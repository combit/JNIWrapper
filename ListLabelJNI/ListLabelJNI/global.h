

#ifndef _LLJNIGLOBAL_H
#define _LLJNIGLOBAL_H


#include <unordered_map>
#include <jni.h>
#include <afxmt.h> // for using CCriticalSection


// simple template for switching to the correct datatype - pending of the architecture 
// how wo use:
// TypeSwitch<DWORD, DWORDLONG>::Type	dw(0);
template <typename X, typename Y> class TypeSwitch
{
public:
	using TypeX = X;
	using TypeY = Y;
#ifndef _WIN64
	using Type = X;
#else
	using Type = Y;
#endif
};


// Utility class equivalent to java HashMap
template<typename T> class Registry : private std::unordered_map<jint,T>
{

private:
	
	CCriticalSection m_oCriticalSection; // used to synchronize current object
	
public:
	
	void add(jint hjob, const T val)
	{
		CSingleLock CL(&m_oCriticalSection, TRUE); // make it thread-safe
		insert(value_type(hjob, val));
	}
	
	T get(jint hjob)
	{
		CSingleLock CL(&m_oCriticalSection, TRUE); // make it thread-safe
		const_iterator it = find(hjob);
		if (it == end())
			return T(0);
		else
			return ((*it).second);
	}
	
	T rem(jint hjob)
	{
		CSingleLock CL(&m_oCriticalSection, TRUE); // make it thread-safe
		iterator it = find(hjob);
		if (it == end())
		{
			return T(0);
		}
		else
		{
			T res = ((*it).second);
			erase(it);
			return res;
		}
	}
};


// Environment registry: any LL method that potentially may have callbacks
// should register itself (see: Java_combit_CmbtLL27_LlPrint)
extern Registry<JNIEnv*> jni_env_registry;

// Callback registry: holds callback objects provided by user
// (see Java_combit_CmbtLL27_LlSetNotificationCallback).
extern Registry<jobject> jni_callback_registry;


// ===========================================================
// Utility function: conversion
static jboolean BOOL2Java(
										BOOL b
										)
// ===========================================================
{
	return (b == TRUE) ? JNI_TRUE : JNI_FALSE;
}


// ===========================================================
// Utility function: conversion
static BOOL Java2BOOL(
									jboolean b
									)
// ===========================================================
{
	return (b == JNI_TRUE) ? TRUE : FALSE;
}


// ===========================================================
// Utility function: conversion
static CString ConvertJStringToCString(
														JNIEnv* pJEnv, 
														const jstring jsValue
														)
// ===========================================================
{
	if(jsValue)
	{
		jsize size = pJEnv->GetStringLength(jsValue);
		if(size > 0)
		{
			const jchar* pwszTempStr = pJEnv->GetStringChars(jsValue,0);
			if(pwszTempStr)
			{
				CString sValue((const WCHAR*)pwszTempStr, (int)size);
				pJEnv->ReleaseStringChars(jsValue,pwszTempStr);
				return(sValue);
			}
		}
	}
	return _T("");
}


#endif // _LLJNIGLOBAL_H