
//

#include <stdafx.h>
#include "cmLL_jni.h"

#ifndef UNICODE
  #pragma message("Die DLL muﬂ als Unicode-DLL compiliert werden!")
#endif

#include "CmbtLL31.h"


#if defined(_MSC_VER)
  #pragma warning(disable:4242) // conversion: possible loss of data
#endif


// contains special types and global variables
#include "global.h"


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlJobOpen)(
																						JNIEnv* /*pJEnv*/, // unsused
																						jobject /*oJObject*/, // unused 
																						jint Language
																						)
// =======================================================================
{
	return ((jint)(LlJobOpen((INT)(Language))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlJobOpenLCID)(
																							JNIEnv* /*pJEnv*/, // unused
																							jobject /*oJObject*/, // unused 
																							jint LCID
																							)
// =======================================================================
{
	return ((jint)(LlJobOpenLCID((_LCID)(LCID))));
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlJobClose)(
																						JNIEnv* pJEnv, 
																						jobject /*oJObject*/, // unused 
																						jint LlJob
																						)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    LlJobClose((HLLJOB)(LlJob));
	jni_env_registry.rem(LlJob);
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlSetDebug)(
																						JNIEnv* /*pJEnv*/, // unused
																						jobject /*oJObject*/, // unused 
																						jint OnOff
																						)
// =======================================================================
{
    LlSetDebug((INT)(OnOff));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetVersion)(
																						JNIEnv* /*pJEnv*/, // unused
																						jobject /*oJObject*/, // unused 
																						jint Cmd
																						)
// =======================================================================
{
    return((jint)(LlGetVersion((INT)(Cmd))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetNotificationMessage)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlGetNotificationMessage((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetNotificationMessage)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jint Message
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlSetNotificationMessage((HLLJOB)(LlJob), (UINT)(Message))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineField)(
																						JNIEnv* pJEnv, 
																						jobject /*oJObject*/, // unused 
																						jint LlJob, 
																						jstring VarName, 
																						jstring Contents
																						)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineField((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), ConvertJStringToCString(pJEnv, Contents))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineFieldExt)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jstring VarName, 
												jstring Contents, 
												jint Para, 
												jLPVOID Ptr
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineFieldExt((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), ConvertJStringToCString(pJEnv, Contents), (INT)(Para), (LPVOID)(Ptr))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineFieldExtHandle)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jstring VarName, 
													jHANDLE Contents,
													jint Para, 
													jLPVOID Ptr
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineFieldExtHandle((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), (HANDLE)(Contents), (INT)(Para), (LPVOID)(Ptr))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlDefineFieldStart)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    LlDefineFieldStart((HLLJOB)(LlJob));
	jni_env_registry.rem(LlJob);
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineVariable)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jstring VarName, 
																								jstring Contents
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineVariable((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), ConvertJStringToCString(pJEnv, Contents))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineVariableExt)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring VarName, 
																									jstring Contents, 
																									jint Para, 
	jLPVOID Ptr
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineVariableExt((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), ConvertJStringToCString(pJEnv, Contents), (INT)(Para), (LPVOID)(Ptr))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineVariableExtHandle)(
														JNIEnv* pJEnv, 
														jobject /*oJObject*/, // unused 
														jint LlJob, 
														jstring VarName, 
														jHANDLE Contents,
														jint Para, 
														jLPVOID Ptr
														)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineVariableExtHandle((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), (HANDLE)(Contents), (INT)(Para), (LPVOID)(Ptr))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineVariableName)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring VarName
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineVariableName((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlDefineVariableStart)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    LlDefineVariableStart((HLLJOB)(LlJob));
	jni_env_registry.rem(LlJob);
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineSumVariable)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring VarName, 
																									jstring Contents
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineSumVariable((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), ConvertJStringToCString(pJEnv, Contents))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineLayout)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jHWND Wnd,
											jstring Title, 
											jint ObjType, 
											jstring ObjName
											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineLayout((HLLJOB)(LlJob), (HWND)(Wnd), ConvertJStringToCString(pJEnv, Title), (UINT)(ObjType), ConvertJStringToCString(pJEnv, ObjName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDlgEditLine)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jHWND Wnd, 
											jobject Buf
											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buf);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// create buffer and call Ll-function
	const int nBufferSize = 1024*1024;
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	int nRet = LlDlgEditLine((HLLJOB)(LlJob), (HWND)Wnd, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buf, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*)_Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buf, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDlgEditLineEx)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jHWND Wnd,
											jobject Buffer, 
											jint ParaTypes, 
											jstring Title, 
											jboolean Table, 
											jLPVOID Reserved
											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// create buffer and call Ll-function
	const int nBufferSize = 1024*1024;
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Title, 0);
    CString sTitle((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Title, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	int nRet = LlDlgEditLineEx((HLLJOB)(LlJob), (HWND)Wnd, _Buffer, nBufferSize, (int)ParaTypes, (CString)sTitle, (BOOL)Table, (LPVOID)Reserved);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString ((jchar*) _Buffer, nBufferSize);
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPreviewSetTempPath)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring Path
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPreviewSetTempPath((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Path))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPreviewDeleteFiles)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring ObjName, 
																									jstring Path
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPreviewDeleteFiles((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ObjName), ConvertJStringToCString(pJEnv, Path))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPreviewDisplay)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jstring ObjName, 
												jstring Path, 
												jHWND Wnd
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPreviewDisplay((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ObjName), ConvertJStringToCString(pJEnv, Path), (HWND)(Wnd))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPreviewDisplayEx)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jstring ObjName, 
												jstring Path, 
												jHWND Wnd,
												jint Options, 
												jLPVOID Reserved
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPreviewDisplayEx((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ObjName), ConvertJStringToCString(pJEnv, Path), (HWND)(Wnd), (UINT)(Options), (LPVOID)(Reserved))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrint)(
																				JNIEnv* pJEnv, 
																				jobject /*oJObject*/, // unused 
																				jint LlJob
																				)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrint((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintAbort)(
																						JNIEnv* pJEnv, 
																						jobject /*oJObject*/, // unused 
																						jint LlJob
																						)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintAbort((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jboolean JNICALL FCT(_LlPrintCheckLineFit)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jboolean res = ((jboolean)(LlPrintCheckLineFit((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintEnd)(
																					JNIEnv* pJEnv, 
																					jobject /*oJObject*/, // unused 
																					jint LlJob, 
																					jint Pages
																					)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintEnd((HLLJOB)(LlJob), (INT)(Pages))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintFields)(
																						JNIEnv* pJEnv, 
																						jobject /*oJObject*/, // unused 
																						jint LlJob
																						)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintFields((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintFieldsEnd)(
																							JNIEnv* pJEnv, 
																							jobject /*oJObject*/, // unused 
																							jint LlJob
																							)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintFieldsEnd((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetCurrentPage)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetCurrentPage((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetItemsPerPage)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetItemsPerPage((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetItemsPerTable)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetItemsPerTable((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetRemainingItemsPerTable)(
																														JNIEnv* pJEnv, 
																														jobject /*oJObject*/, // unused 
																														jint LlJob, 
																														jstring Field
																														)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetRemainingItemsPerTable((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Field))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetRemItemsPerTable)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob, 
																												jstring Field
																												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetRemItemsPerTable((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Field))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jINT_PTR JNICALL FCT(_LlPrintGetOption)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jint Index
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jINT_PTR res = ((jINT_PTR)(LlPrintGetOption((HLLJOB)(LlJob), (INT)(Index))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetPrinterInfo)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jobject Prn, 
																									jobject Port
																									)
// =======================================================================
{
    // get method IDs for java object 'Prn'
	jclass clazzPrn = (*pJEnv).GetObjectClass (Prn);
	jmethodID mid_appendPrn = (*pJEnv).GetMethodID (clazzPrn, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenghtPrn = (*pJEnv).GetMethodID (clazzPrn, "setLength", "(I)V");
	
	// get method IDs for java object 'Port'
	jclass clazzPort = (*pJEnv).GetObjectClass (Prn);
	jmethodID mid_appendPort = (*pJEnv).GetMethodID (clazzPort, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenghtPort = (*pJEnv).GetMethodID (clazzPort, "setLength", "(I)V");
	
	// create buffer and call Ll-function
	WCHAR *_BufferPrn = new WCHAR[1024];
	WCHAR *_BufferPort = new WCHAR[1024];
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	int nRet = LlPrintGetPrinterInfo((HLLJOB)(LlJob), _BufferPrn, 500, _BufferPort, 500);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _BufferPrn;
		delete _BufferPort;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Prn, mid_setLenghtPrn, 0);
	(*pJEnv).CallObjectMethod (Port, mid_setLenghtPort, 0);
	
	// copy new string into java-string
	jstring _jstringPrn = (*pJEnv).NewString((jchar*) _BufferPrn, (jsize)wcslen(_BufferPrn));
	(*pJEnv).CallObjectMethod (Prn, mid_appendPrn, _jstringPrn);
	
	jstring _jstringPort = (*pJEnv).NewString((jchar*) _BufferPort, (jsize)wcslen(_BufferPort));
	(*pJEnv).CallObjectMethod (Port, mid_appendPort, _jstringPort);
	
	// free buffer
	delete _BufferPrn;
	delete _BufferPort;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintOptionsDialog)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jHWND Wnd,
												jstring Text
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintOptionsDialog((HLLJOB)(LlJob), (HWND)(Wnd), ConvertJStringToCString(pJEnv, Text))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintSelectOffsetEx)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jHWND Wnd
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintSelectOffsetEx((HLLJOB)(LlJob), (HWND)(Wnd))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintSetBoxText)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jstring Text, 
												jint Percentage
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintSetBoxText((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Text), (INT)(Percentage))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintSetOption)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jint Index, 
											jINT_PTR Value
											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintSetOption((HLLJOB)(LlJob), (INT)(Index), (INT_PTR)(Value))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintUpdateBox)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintUpdateBox((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintStart)(
																						JNIEnv* pJEnv, 
																						jobject /*oJObject*/, // unused 
																						jint LlJob, 
																						jint ObjType, 
																						jstring ObjName, 
																						jint PrintOptions, 
																						jint dummy
																						)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintStart((HLLJOB)(LlJob), (UINT)(ObjType), ConvertJStringToCString(pJEnv, ObjName), (INT)(PrintOptions), (INT)(dummy))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintWithBoxStart)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jint ObjType, 
												jstring ObjName, 
												jint PrintOptions, 
												jint BoxType, 
												jHWND Wnd,
												jstring Title
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintWithBoxStart((HLLJOB)(LlJob), (UINT)(ObjType), ConvertJStringToCString(pJEnv, ObjName), (INT)(PrintOptions), (INT)(BoxType), (HWND)(Wnd), ConvertJStringToCString(pJEnv, Title))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrinterSetup)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jHWND Wnd,
											jint ObjType, 
											jstring ObjName
											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrinterSetup((HLLJOB)(LlJob), (HWND)(Wnd), (UINT)(ObjType), ConvertJStringToCString(pJEnv, ObjName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSelectFileDlgTitleEx)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jHWND Wnd,
													jstring Title, 
													jint ObjType, 
													jobject ObjName, 
													jLPVOID /*Reserved*/ // ununsed
													)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (ObjName);
	
	// get method IDs for java object 'StringBuffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLength = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	jmethodID mid_toString = (*pJEnv).GetMethodID (clazz, "toString", "()Ljava/lang/String;");
	
	// copy and convert param local
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Title, 0);
    CString sTitle((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Title, pwszTempStr1);
	
	// create buffer and call Ll-function
	jstring strTemp = (jstring)(*pJEnv).CallObjectMethod (ObjName, mid_toString);
	const jchar* pwszTempStr2 = pJEnv->GetStringChars(strTemp, 0);
	WCHAR _Buffer[2048] = {0};
	wcsncpy_s((WCHAR*)_Buffer, 2048, (const WCHAR*)pwszTempStr2, _TRUNCATE);
	pJEnv->ReleaseStringChars(strTemp, pwszTempStr2);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	int nRet = LlSelectFileDlgTitleEx((HLLJOB)(LlJob), (HWND)Wnd, (LPCTSTR)sTitle, (int)ObjType, (WCHAR*)_Buffer, 2048, NULL);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
		return (jint)nRet;
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (ObjName, mid_setLength, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (ObjName, mid_append, _jstring);
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlSetDlgboxMode)(
																									JNIEnv* /*pJEnv*/, // unused
																									jobject /*oJObject*/, // unused 
																									jint Mode
																									)
// =======================================================================
{
    LlSetDlgboxMode((UINT)(Mode));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetDlgboxMode)(
																								JNIEnv* /*pJEnv*/, // unused
																								jobject /*oJObject*/ // unused 
																								)
// =======================================================================
{
    return((jint)(LlGetDlgboxMode()));
}


// =======================================================================
JNIEXPORT jHLLEXPR JNICALL FCT(_LlExprParse)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jstring ExprText, 
											jboolean IncludeFields
											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jHLLEXPR res = ((jHLLEXPR)(LlExprParse((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ExprText), (BOOL)(IncludeFields))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlExprType)(
										JNIEnv* pJEnv, 
										jobject /*oJObject*/, // unused 
										jint LlJob, 
										jHLLEXPR Expr
										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlExprType((HLLJOB)(LlJob), (HLLEXPR)(Expr))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlExprError)(
																						JNIEnv* pJEnv, 
																						jobject /*oJObject*/, // unused 
																						jint LlJob, 
																						jobject Buf
																						)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buf);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buf, mid_setLenght, 0);
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[2048];
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	LlExprError((HLLJOB)(LlJob), _Buffer, 2048);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString ((jchar*) _Buffer, 2048);
	(*pJEnv).CallObjectMethod (Buf, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlExprFree)(
										JNIEnv* pJEnv, 
										jobject /*oJObject*/, // unused 
										jint LlJob, 
										jHLLEXPR Expr
										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    LlExprFree((HLLJOB)(LlJob), (HLLEXPR)(Expr));
	jni_env_registry.rem(LlJob);
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlExprEvaluate)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jHLLEXPR Expr,
											jobject Buf
											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buf);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlExprEvaluate((HLLJOB)(LlJob), (HLLEXPR)Expr, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlExprEvaluate((HLLJOB)(LlJob), (HLLEXPR)Expr, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buf, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buf, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlExprGetUsedVars)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jHLLEXPR Expr,
												jobject Buffer
												)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlExprGetUsedVars((HLLJOB)(LlJob), (HLLEXPR)Expr, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlExprGetUsedVars((HLLJOB)(LlJob), (HLLEXPR)Expr, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetOption)(
										JNIEnv* pJEnv, 
										jobject /*oJObject*/, // unused 
										jint LlJob, 
										jint Mode, 
										jINT_PTR Value
										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlSetOption((HLLJOB)(LlJob), (INT)(Mode), (INT_PTR)(Value))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jINT_PTR JNICALL FCT(_LlGetOption)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jint Mode
											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jINT_PTR res = ((jINT_PTR)(LlGetOption((HLLJOB)(LlJob), (INT)(Mode))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetOptionString)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jint Index, 
																								jstring Buffer
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlSetOptionString((HLLJOB)(LlJob), (INT)(Index), ConvertJStringToCString(pJEnv, Buffer))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetOptionString)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jint Index, 
																								jobject Buffer
																								)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetOptionString((HLLJOB)(LlJob), (int)Index, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetOptionString((HLLJOB)(LlJob), (int)Index, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintSetOptionString)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jint Index, 
																										jstring Buffer
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintSetOptionString((HLLJOB)(LlJob), (INT)(Index), ConvertJStringToCString(pJEnv, Buffer))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetOptionString)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jint Index, 
																										jobject Buffer
																										)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlPrintGetOptionString((HLLJOB)(LlJob), (int)Index, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlPrintGetOptionString((HLLJOB)(LlJob), (int)Index, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerProhibitAction)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jint MenuID
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerProhibitAction((HLLJOB)(LlJob), (INT)(MenuID))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerProhibitFunction)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jstring Function
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerProhibitFunction((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Function))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintEnableObject)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring ObjectName, 
																									jboolean Enable
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintEnableObject((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ObjectName), (BOOL)(Enable))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetFileExtensions)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jint ObjType, 
																									jstring ObjectExt, 
																									jstring PrinterExt, 
																									jstring SketchExt
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlSetFileExtensions((HLLJOB)(LlJob), (INT)(ObjType), ConvertJStringToCString(pJEnv, ObjectExt), ConvertJStringToCString(pJEnv, PrinterExt), ConvertJStringToCString(pJEnv, SketchExt))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetTextCharsPrinted)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob, 
																												jstring ObjectName
																												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetTextCharsPrinted((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ObjectName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetFieldCharsPrinted)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob, 
																												jstring ObjectName, 
																												jstring Field
																												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetFieldCharsPrinted((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ObjectName), ConvertJStringToCString(pJEnv, Field))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintIsVariableUsed)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring VarName
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintIsVariableUsed((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintIsFieldUsed)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jstring FieldName
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintIsFieldUsed((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, FieldName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintOptionsDialogTitle)(
														JNIEnv* pJEnv, 
														jobject /*oJObject*/, // unused 
														jint LlJob, 
														jHWND Wnd, 
														jstring Title, 
														jstring Text
														)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintOptionsDialogTitle((HLLJOB)(LlJob), (HWND)(Wnd), ConvertJStringToCString(pJEnv, Title), ConvertJStringToCString(pJEnv, Text))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetPrinterToDefault)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jint ObjType, 
																									jstring ObjName
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlSetPrinterToDefault((HLLJOB)(LlJob), (INT)(ObjType), ConvertJStringToCString(pJEnv, ObjName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineSortOrderStart)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineSortOrderStart((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineSortOrder)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jstring Identifier, 
																								jstring Text
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineSortOrder((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Identifier), ConvertJStringToCString(pJEnv, Text))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetSortOrder)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jobject Buffer
																									)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlPrintGetSortOrder((HLLJOB)(LlJob), NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlPrintGetSortOrder((HLLJOB)(LlJob), _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineGrouping)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jstring Sortorder, 
																								jstring Identifier, 
																								jstring Text
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineGrouping((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Sortorder), ConvertJStringToCString(pJEnv, Identifier), ConvertJStringToCString(pJEnv, Text))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetGrouping)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jobject Buffer
																									)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlPrintGetGrouping((HLLJOB)(LlJob), NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];	
	int nRet = LlPrintGetGrouping((HLLJOB)(LlJob), _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlAddCtlSupport)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jHWND Wnd, 
											jint Flags, 
											jstring Inifile
											)
// =======================================================================
{
    jint res = ((jint)(LlAddCtlSupport((HWND)(Wnd), (UINT)(Flags), ConvertJStringToCString(pJEnv, Inifile))));
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetFilterExpression)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jobject Buffer
																											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlPrintGetFilterExpression((HLLJOB)(LlJob), NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlPrintGetFilterExpression((HLLJOB)(LlJob), _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintWillMatchFilter)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintWillMatchFilter((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintDidMatchFilter)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintDidMatchFilter((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetFieldContents)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jstring Name, 
																								jobject Buffer
																								)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetFieldContents((HLLJOB)(LlJob), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetFieldContents((HLLJOB)(LlJob), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetVariableContents)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring Name, 
																										jobject Buffer
																										)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetVariableContents((HLLJOB)(LlJob), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetVariableContents((HLLJOB)(LlJob), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetSumVariableContents)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jstring Name, 
																											jobject Buffer
																											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetSumVariableContents((HLLJOB)(LlJob), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetSumVariableContents((HLLJOB)(LlJob), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetUserVariableContents)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob, 
																												jstring Name, 
																												jobject Buffer
																												)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetUserVariableContents((HLLJOB)(LlJob), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetUserVariableContents((HLLJOB)(LlJob), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetVariableType)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring Name
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlGetVariableType((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Name))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetFieldType)(
																							JNIEnv* pJEnv, 
																							jobject /*oJObject*/, // unused 
																							jint LlJob, 
																							jstring Name
																							)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlGetFieldType((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Name))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetPrinterDefaultsDir)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring Dir
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlSetPrinterDefaultsDir((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Dir))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlCreateSketch)(
																							JNIEnv* pJEnv, 
																							jobject /*oJObject*/, // unused 
																							jint LlJob, 
																							jint ObjType, 
																							jstring ObjName
																							)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlCreateSketch((HLLJOB)(LlJob), (UINT)(ObjType), ConvertJStringToCString(pJEnv, ObjName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlViewerProhibitAction)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jint MenuID
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlViewerProhibitAction((HLLJOB)(LlJob), (INT)(MenuID))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintCopyPrinterConfiguration)(
																													JNIEnv* pJEnv, 
																													jobject /*oJObject*/, // unused 
																													jint LlJob, 
																													jstring Filename, 
																													jint Function
																													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintCopyPrinterConfiguration((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Filename), (INT)(Function))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jHLLRTFOBJ JNICALL FCT(_LlRTFCreateObject)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jHLLRTFOBJ res = ((jHLLRTFOBJ)(LlRTFCreateObject((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFDeleteObject)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jHLLRTFOBJ RTF
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlRTFDeleteObject((HLLJOB)(LlJob), (HLLRTFOBJ)(RTF))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFSetText)(
										JNIEnv* pJEnv, 
										jobject /*oJObject*/, // unused 
										jint LlJob, 
										jHLLRTFOBJ RTF,
										jstring Text
										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlRTFSetText((HLLJOB)(LlJob), (HLLRTFOBJ)(RTF), ConvertJStringToCString(pJEnv, Text))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFGetTextLength)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jHLLRTFOBJ RTF,
												jint Flags
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlRTFGetTextLength((HLLJOB)(LlJob), (HLLRTFOBJ)(RTF), (INT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFGetText)(
										JNIEnv* pJEnv, 
										jobject /*oJObject*/, // unused 
										jint LlJob, 
										jHLLRTFOBJ RTF,
										jint Flags, 
										jobject Buffer
										)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlRTFGetText((HLLJOB)(LlJob), (HLLRTFOBJ)RTF, (INT)Flags, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlRTFGetText((HLLJOB)(LlJob), (HLLRTFOBJ)RTF, (INT)Flags, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFEditObject)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jHLLRTFOBJ RTF, 
											jHWND Wnd, 
											jHDC PrnDC, 
											jint ProjectType, 
											jboolean Modal
											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlRTFEditObject((HLLJOB)(LlJob), (HLLRTFOBJ)(RTF), (HWND)(Wnd), (HDC)(PrnDC), (INT)(ProjectType), (BOOL)(Modal))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFCopyToClipboard)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jHLLRTFOBJ RTF
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlRTFCopyToClipboard((HLLJOB)(LlJob), (HLLRTFOBJ)(RTF))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFEditorProhibitAction)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jHLLRTFOBJ RTF,
													jint ControlID
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlRTFEditorProhibitAction((HLLJOB)(LlJob), (HLLRTFOBJ)(RTF), (INT)(ControlID))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlRTFEditorInvokeAction)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jHLLRTFOBJ RTF,
													jint ControlID
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlRTFEditorInvokeAction((HLLJOB)(LlJob), (HLLRTFOBJ)(RTF), (INT)(ControlID))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlDebugOutput)(
																							JNIEnv* pJEnv,
																							jobject /*oJObject*/, // unused 
																							jint Indent, 
																							jstring Text
																							)
// =======================================================================
{
    LlDebugOutput((INT)(Indent), ConvertJStringToCString(pJEnv, Text));
}


// =======================================================================
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetFirstVar)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jint Flags
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jHLISTPOS res = ((jHLISTPOS)(LlEnumGetFirstVar((HLLJOB)(LlJob), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetFirstField)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jint Flags
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jHLISTPOS res = ((jHLISTPOS)(LlEnumGetFirstField((HLLJOB)(LlJob), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetNextEntry)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jHLISTPOS Pos,
													jint Flags
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jHLISTPOS res = ((jHLISTPOS)(LlEnumGetNextEntry((HLLJOB)(LlJob), (HLISTPOS)(Pos), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintResetObjectStates)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintResetObjectStates((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlXSetParameter)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jint ExtensionType, 
																								jstring ExtensionName, 
																								jstring Key, 
																								jstring Value
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlXSetParameter((HLLJOB)(LlJob), (INT)(ExtensionType), ConvertJStringToCString(pJEnv, ExtensionName), ConvertJStringToCString(pJEnv, Key), ConvertJStringToCString(pJEnv, Value))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlXGetParameter)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob, 
																								jint ExtensionType, 
																								jstring ExtensionName, 
																								jstring Key, 
																								jobject Buffer
																								)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(ExtensionName, 0);
    CString sExtensionName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(ExtensionName, pwszTempStr1);
	
	const jchar* pwszTempStr2 = pJEnv->GetStringChars(Key, 0);
    CString sKey((const WCHAR*)pwszTempStr2);
    pJEnv->ReleaseStringChars(Key, pwszTempStr2);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlXGetParameter((HLLJOB)(LlJob), (int)ExtensionType, (CString)sExtensionName, (CString)sKey, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlXGetParameter((HLLJOB)(LlJob), (int)ExtensionType, (CString)sExtensionName, (CString)sKey, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintResetProjectState)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintResetProjectState((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlDefineChartFieldStart)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    LlDefineChartFieldStart((HLLJOB)(LlJob));
	jni_env_registry.rem(LlJob);
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDefineChartFieldExt)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jstring VarName, 
													jstring Contents, 
													jint Para, 
													jLPVOID Ptr
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDefineChartFieldExt((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, VarName), ConvertJStringToCString(pJEnv, Contents), (INT)(Para), (LPVOID)(Ptr))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintDeclareChartRow)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jint Flags
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintDeclareChartRow((HLLJOB)(LlJob), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetChartObjectCount)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob, 
																												jint Type
																												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetChartObjectCount((HLLJOB)(LlJob), (UINT)(Type))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintIsChartFieldUsed)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring FieldName
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintIsChartFieldUsed((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, FieldName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetChartFieldContents)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jstring Name, 
																											jobject Buffer
																											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetChartFieldContents((HLLJOB)(LlJob), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetChartFieldContents((HLLJOB)(LlJob), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetFirstChartField)(
															JNIEnv* pJEnv, 
															jobject /*oJObject*/, // unused 
															jint LlJob, 
															jint Flags
															)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jHLISTPOS res = ((jHLISTPOS)(LlEnumGetFirstChartField((HLLJOB)(LlJob), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintGetRemainingSpacePerTable)(
																														JNIEnv* pJEnv, 
																														jobject /*oJObject*/, // unused 
																														jint LlJob, 
																														jstring Field, 
																														jint Dimension
																														)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintGetRemainingSpacePerTable((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Field), (INT)(Dimension))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetDefaultProjectParameter)(
																													JNIEnv* pJEnv, 
																													jobject /*oJObject*/, // unused 
																													jint LlJob, 
																													jstring Parameter, 
																													jstring Value, 
																													jint Flags
																													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlSetDefaultProjectParameter((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Parameter), ConvertJStringToCString(pJEnv, Value), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintSetProjectParameter)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob, 
																												jstring Parameter, 
																												jstring Value, 
																												jint Flags
																												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintSetProjectParameter((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Parameter), ConvertJStringToCString(pJEnv, Value), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlExprContainsVariable)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jint LlJob, 
													jHLLEXPR Expr,
													jstring Variable
													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlExprContainsVariable((HLLJOB)(LlJob), (HLLEXPR)(Expr), ConvertJStringToCString(pJEnv, Variable))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlExprIsConstant)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jHLLEXPR Expr
											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlExprIsConstant((HLLJOB)(LlJob), (HLLEXPR)(Expr))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlProfileStart)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jHANDLE Thread,
											jstring Descr, 
											jstring Filename, 
											jint TicksMS
											)
// =======================================================================
{
	jni_env_registry.add((jint)Thread, pJEnv);
    jint res = ((jint)(LlProfileStart((HANDLE)(Thread), ConvertJStringToCString(pJEnv, Descr), ConvertJStringToCString(pJEnv, Filename), (INT)(TicksMS))));
	jni_env_registry.rem((jint)Thread);
	return res;
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlProfileEnd)(
										JNIEnv* pJEnv,
										jobject /*oJObject*/, // unused 
										jHANDLE Thread
										)
// =======================================================================
{
	jni_env_registry.add((jint)Thread, pJEnv);
    LlProfileEnd((HANDLE)(Thread));
	jni_env_registry.rem((jint)Thread);
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbAddTable)(
	JNIEnv* pJEnv,
	jobject /*oJObject*/, // unused 
	jint LlJob,
	jstring TableID,
	jstring DisplayName
	)
	// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jint res = ((jint)(LlDbAddTable((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, TableID), ConvertJStringToCString(pJEnv, DisplayName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbAddTableEx)(
	JNIEnv* pJEnv,
	jobject /*oJObject*/, // unused 
	jint LlJob,
	jstring TableID,
	jstring DisplayName,
	jint Options
	)
	// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jint res = ((jint)(LlDbAddTableEx((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, TableID), ConvertJStringToCString(pJEnv, DisplayName), (UINT)Options)));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbAddTableRelation)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring TableID, 
																										jstring ParentTableID, 
																										jstring RelationID, 
																										jstring RelationDisplayName
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDbAddTableRelation((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, TableID), ConvertJStringToCString(pJEnv, ParentTableID), ConvertJStringToCString(pJEnv, RelationID), ConvertJStringToCString(pJEnv, RelationDisplayName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbAddTableSortOrder)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring TableID, 
																										jstring SortOrderID, 
																										jstring SortOrderDisplayName
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDbAddTableSortOrder((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, TableID), ConvertJStringToCString(pJEnv, SortOrderID), ConvertJStringToCString(pJEnv, SortOrderDisplayName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetCurrentTable)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint  LlJob, 
																											jobject TableID, 
																											jboolean CompletePath
																											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (TableID);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlPrintDbGetCurrentTable((HLLJOB)(LlJob), NULL, 0, (BOOL)CompletePath);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlPrintDbGetCurrentTable((HLLJOB)(LlJob), _Buffer, nBufferSize, (BOOL)CompletePath);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (TableID, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (TableID, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetCurrentTableRelation)(
																														JNIEnv* pJEnv, 
																														jobject /*oJObject*/, // unused 
																														jint LlJob, 
																														jobject RelationID
																														)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (RelationID);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlPrintDbGetCurrentTableRelation((HLLJOB)(LlJob), NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlPrintDbGetCurrentTableRelation((HLLJOB)(LlJob), _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (RelationID, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (RelationID, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetCurrentTableSortOrder)(
																															JNIEnv* pJEnv, 
																															jobject /*oJObject*/, // unused 
																															jint LlJob, 
																															jobject SortOrderID
																															)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (SortOrderID);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlPrintDbGetCurrentTableSortOrder((HLLJOB)(LlJob), NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlPrintDbGetCurrentTableSortOrder((HLLJOB)(LlJob), _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (SortOrderID, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (SortOrderID, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbDumpStructure)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDbDumpStructure((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetRootTableCount)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob
																												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlPrintDbGetRootTableCount((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbSetMasterTable)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring TableID
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDbSetMasterTable((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, TableID))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbGetMasterTable)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jobject Buffer
																									)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlDbGetMasterTable((HLLJOB)(LlJob), NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlDbGetMasterTable((HLLJOB)(LlJob), _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlXSetExportParameter)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused
																										jint LlJob, 
																										jstring ExtensionName, 
																										jstring Key, 
																										jstring Value
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlXSetExportParameter((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ExtensionName), ConvertJStringToCString(pJEnv, Key), ConvertJStringToCString(pJEnv, Value))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlXGetExportParameter)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused
																										jint LlJob, 
																										jstring ExtensionName, 
																										jstring Key, 
																										jobject Buffer
																										)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(ExtensionName, 0);
    CString sExtensionName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(ExtensionName, pwszTempStr1);
	
	const jchar* pwszTempStr2 = pJEnv->GetStringChars(Key, 0);
    CString sKey((const WCHAR*)pwszTempStr2);
    pJEnv->ReleaseStringChars(Key, pwszTempStr2);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlXGetExportParameter((HLLJOB)(LlJob), (CString)sExtensionName, (CString)sKey, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlXGetExportParameter((HLLJOB)(LlJob), (CString)sExtensionName, (CString)sKey, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlXlatName)(
																						JNIEnv* pJEnv, 
																						jobject /*oJObject*/, // unused
																						jint LlJob, 
																						jstring Name, 
																						jobject Buffer
																						)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlXlatName((HLLJOB)(LlJob), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlXlatName((HLLJOB)(LlJob), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerProhibitEditingObject)(
																													JNIEnv* pJEnv, 
																													jobject /*oJObject*/, // unused
																													jint LlJob, 
																													jstring Object
																													)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerProhibitEditingObject((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Object))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetUsedIdentifiers)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused
																									jint LlJob, 
																									jstring ProjectName, 
																									jobject Buffer
																									)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(ProjectName, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(ProjectName, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetUsedIdentifiers((HLLJOB)(LlJob), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetUsedIdentifiers((HLLJOB)(LlJob), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlExprGetUsedVarsEx)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused
												jint LlJob, 
												jHLLEXPR Expr,
												jobject Buffer, 
												jboolean OrgName
												)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlExprGetUsedVarsEx((HLLJOB)(LlJob), (HLLEXPR)Expr, NULL, 0, (BOOL)OrgName);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlExprGetUsedVarsEx((HLLJOB)(LlJob), (HLLEXPR)Expr, _Buffer, nBufferSize, (BOOL)OrgName);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jHANDLE JNICALL FCT(_LlDomGetProject)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jint LlJob, 
											jPHLLDOMOBJ /*DOMObj*/ // unused: domobj will be directly returned
											)
// =======================================================================
{
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);

	// call ll-function
	HLLDOMOBJ   hObj;
	jHANDLE     result = NULL;

	if (LlDomGetProject((int)LlJob, &hObj) == 0)
		result = (jHANDLE)(intptr_t)hObj;

	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);

	// return function
	return result; // change: nullptr on error, no information about the reason except debug logging
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDomGetProperty)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jHLLDOMOBJ DOMObj,
											jstring Name, 
											jobject Buffer
											)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add((jint)DOMObj, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlDomGetProperty((HLLDOMOBJ)(DOMObj), (CString)sName, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem((jint)DOMObj);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlDomGetProperty((HLLDOMOBJ)(DOMObj), (CString)sName, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem((jint)DOMObj);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDomSetProperty)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jHLLDOMOBJ DOMObj,
											jstring Name, 
											jstring Value
											)
// =======================================================================
{
	jni_env_registry.add((jint)DOMObj, pJEnv);
    jint res = ((jint)(LlDomSetProperty((HLLDOMOBJ)(DOMObj), ConvertJStringToCString(pJEnv, Name), ConvertJStringToCString(pJEnv, Value))));
	jni_env_registry.rem((jint)DOMObj);
	return res;
}


// =======================================================================
JNIEXPORT jHANDLE JNICALL FCT(_LlDomGetObject)(
											JNIEnv* pJEnv, 
											jobject /*oJObject*/, // unused 
											jHLLDOMOBJ DOMObj,
											jstring Name, 
											jPHLLDOMOBJ /*DOMSubObj*/ // unused: domsubobj will be directly returned
											)
// =======================================================================
{
    // get string
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Name, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Name, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add((jint)DOMObj, pJEnv);
	
	// call ll-function
	HLLDOMOBJ hObj;
	jHANDLE nReturn = NULL;
	if(LlDomGetObject((HLLDOMOBJ)DOMObj, (CString)sName, &hObj) == 0)
		nReturn = (jHANDLE)(intptr_t)hObj;
	
	// unregister LL-callbacks
	jni_env_registry.rem((jint)DOMObj);
	
	// return function
	return nReturn; // change: nullptr on error, no information about the reason except debug logging
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDomGetSubobjectCount)(
													JNIEnv* pJEnv, 
													jobject /*oJObject*/, // unused 
													jHLLDOMOBJ DOMObj,
													j_LPINTJAVADUMMY /*Count*/ // unused: count will be directly returned 
													)
// =======================================================================
{
	// register for LL-callbacks
	jni_env_registry.add((jint)DOMObj, pJEnv);
	
    // call ll-function
	INT nObjCount;
	int nReturn = LlDomGetSubobjectCount((HLLDOMOBJ)DOMObj, &nObjCount);
	if(nReturn == 0)
		nReturn = (int)nObjCount;
	
	// unregister LL-callbacks
	jni_env_registry.rem((jint)DOMObj);
	
	// return function
	return (jint)nReturn; // attention: caller have to check, wether the return-value is a valid object handle (HIWORD(nReturn) == (WORD)-1 -> no valid handle!)
}


// =======================================================================
JNIEXPORT jHANDLE JNICALL FCT(_LlDomGetSubobject)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jHLLDOMOBJ DOMObj,
												jint Position, 
												jPHLLDOMOBJ /*DOMSubObj*/ // unused: domsubobj will be directly returned
												)
// =======================================================================
{
	// register for LL-callbacks
	jni_env_registry.add((jint)DOMObj, pJEnv);
	
	// call ll-function
	HLLDOMOBJ hObj;
	jHANDLE nReturn = NULL;
	if(LlDomGetSubobject((HLLDOMOBJ)DOMObj, (int)Position, &hObj) == 0)
		nReturn = (jHANDLE)(intptr_t)hObj;
	
	// unregister LL-callbacks
	jni_env_registry.rem((jint)DOMObj);
	
	// return function
	return nReturn; // change: nullptr on error, no information about the reason except debug logging
}


// =======================================================================
JNIEXPORT jHANDLE JNICALL FCT(_LlDomCreateSubobject)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jHLLDOMOBJ DOMObj, 
												jint Position, 
												jstring Type, 
												jPHLLDOMOBJ /*DOMSubObj*/ // unused: domsubobj will be directly returned
												)
// =======================================================================
{
	// get string
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Type, 0);
    CString sType((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Type, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add((jint)DOMObj, pJEnv);
	
	// call ll-function
	HLLDOMOBJ hObj;
	jHANDLE nReturn = NULL;
	if(LlDomCreateSubobject((HLLDOMOBJ)DOMObj, (int)Position, (CString)sType, &hObj) == 0)
		nReturn = (jHANDLE)(intptr_t)hObj;
	
	// unregister LL-callbacks
	jni_env_registry.rem((jint)DOMObj);
	
	// return function
	return nReturn; // change: nullptr on error, no information about the reason except debug logging
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDomDeleteSubobject)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jHLLDOMOBJ DOMObj,
												jint Position
												)
// =======================================================================
{
	jni_env_registry.add((jint)DOMObj, pJEnv);
    jint res = ((jint)(LlDomDeleteSubobject((HLLDOMOBJ)(DOMObj), (INT)(Position))));
	jni_env_registry.rem((jint)DOMObj);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlProjectOpen)(
																							JNIEnv* pJEnv, 
																							jobject /*oJObject*/, // unused 
																							jint LlJob, 
																							jint ObjType, 
																							jstring ObjName, 
																							jint OpenMode
																							)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlProjectOpen((HLLJOB)(LlJob), (UINT)(ObjType), ConvertJStringToCString(pJEnv, ObjName), (UINT)(OpenMode))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlProjectSave)(
																							JNIEnv* pJEnv, 
																							jobject /*oJObject*/, // unused 
																							jint LlJob, 
																							jstring ObjName
																							)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlProjectSave((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ObjName))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlProjectClose)(
																							JNIEnv* pJEnv, 
																							jobject /*oJObject*/, // unused 
																							jint LlJob
																							)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlProjectClose((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlAssociatePreviewControl)(
														JNIEnv* pJEnv, 
														jobject /*oJObject*/, // unused 
														jint LlJob, 
														jHWND WndControl,
														jint Flags
														)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlAssociatePreviewControl((HLLJOB)(LlJob), (HWND)(WndControl), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetErrortext)(
																							JNIEnv* pJEnv, 
																							jobject /*oJObject*/, // unused 
																							jint Error, 
																							jobject Buffer
																							)
// =======================================================================
{
	jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(Error, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetErrortext((HLLJOB)(Error), NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(Error);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetErrortext((HLLJOB)(Error), _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(Error);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerInvokeAction)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jint MenuID
																										)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerInvokeAction((HLLJOB)(LlJob), (INT)(MenuID))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerRefreshWorkspace)(
																												JNIEnv* pJEnv, 
																												jobject /*oJObject*/, // unused 
																												jint LlJob
																												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerRefreshWorkspace((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerFileOpen)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jstring Filename, 
																									jint Flags
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerFileOpen((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, Filename), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerFileSave)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused 
																									jint LlJob, 
																									jint Flags
																									)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerFileSave((HLLJOB)(LlJob), (UINT)(Flags))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerAddAction)(
												JNIEnv* pJEnv, 
												jobject /*oJObject*/, // unused 
												jint LlJob, 
												jint ID, 
												jint Flags, 
												jstring MenuText, 
												jstring MenuHierarchy, 
												jstring TooltipText, 
												jint Icon, 
												jLPVOID Reserved
												)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerAddAction((HLLJOB)(LlJob), (UINT)(ID), (UINT)(Flags), ConvertJStringToCString(pJEnv, MenuText), ConvertJStringToCString(pJEnv, MenuHierarchy), ConvertJStringToCString(pJEnv, TooltipText), (UINT)(Icon), (LPVOID)(Reserved))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerGetOptionString)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jint Index, 
																											jobject Buffer
																											)
// =======================================================================
{
	jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlDesignerGetOptionString((HLLJOB)(LlJob), (int)Index, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlDesignerGetOptionString((HLLJOB)(LlJob), (int)Index, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDesignerSetOptionString)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jint Index, 
																											jstring Buffer
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlDesignerSetOptionString((HLLJOB)(LlJob), (INT)(Index), ConvertJStringToCString(pJEnv, Buffer))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlJobOpenCopy)(
																								JNIEnv* pJEnv, 
																								jobject /*oJObject*/, // unused 
																								jint LlJob
																								)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlJobOpenCopy((HLLJOB)(LlJob))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetProjectParameter)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused 
																										jint LlJob, 
																										jstring ProjectName, 
																										jstring Parameter, 
																										jobject Buffer
																										)
// =======================================================================
{
	jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(ProjectName, 0);
    CString sProjectName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(ProjectName, pwszTempStr1);
	
	const jchar* pwszTempStr2 = pJEnv->GetStringChars(Parameter, 0);
    CString sParameter((const WCHAR*)pwszTempStr2);
    pJEnv->ReleaseStringChars(Parameter, pwszTempStr2);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = LlGetProjectParameter((HLLJOB)(LlJob), (CString)sProjectName, (CString)sParameter, NULL, 0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlGetProjectParameter((HLLJOB)(LlJob),(CString)sProjectName, (CString)sParameter, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);

	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetDebug)(
																						JNIEnv* /*pJEnv*/,		// unsused
																						jobject /*oJObject*/	// unused 
																						)
// =======================================================================
{
	return ((jint)(LlGetDebug()));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetTempFileName)(
																									JNIEnv* pJEnv, 
																									jobject /*oJObject*/, // unused  
																									jstring Prefix, 
																									jstring Extension, 
																									jobject Buffer,
																									jint Options
																									)
// =======================================================================
{
	jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Prefix, 0);
    CString sPrefix((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Prefix, pwszTempStr1);
	
	const jchar* pwszTempStr2 = pJEnv->GetStringChars(Extension, 0);
    CString sExtension((const WCHAR*)pwszTempStr2);
    pJEnv->ReleaseStringChars(Extension, pwszTempStr2);
	
	// get buffersize for Ll-function
	int nBufferSize = ::LlGetTempFileName((CString)sPrefix, (CString)sExtension, NULL, (UINT)0, (UINT)Options);
	if (nBufferSize < 0)
		return (jint)nBufferSize;
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = ::LlGetTempFileName((CString)sPrefix, (CString)sExtension, _Buffer, (UINT)nBufferSize, (UINT)Options);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod(Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlGetUsedIdentifiersEx)(
																										JNIEnv* pJEnv, 
																										jobject /*oJObject*/, // unused
																										jint LlJob, 
																										jstring ProjectName, 
																										jint IdentifierTypes,
																										jobject Buffer
																										)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(ProjectName, 0);
    CString sName((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(ProjectName, pwszTempStr1);
	
	// register for LL-callbacks
	jni_env_registry.add(LlJob, pJEnv);
	
	// get buffersize for Ll-function
	int nBufferSize = ::LlGetUsedIdentifiersEx((HLLJOB)(LlJob), (CString)sName, (UINT)IdentifierTypes, NULL, (UINT)0);
	if (nBufferSize < 0)
	{
		// unregister LL-callbacks
		jni_env_registry.rem(LlJob);
		
		return (jint)nBufferSize;
	}
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = ::LlGetUsedIdentifiersEx((HLLJOB)(LlJob), (CString)sName,  (UINT)IdentifierTypes, _Buffer, nBufferSize);
	
	// unregister LL-callbacks
	jni_env_registry.rem(LlJob);
	
	if(nRet < 0)
	{
		// free buffer
		delete _Buffer;
		
		return (jint)nRet;
	}
	
	// set buffer to 0
	(*pJEnv).CallObjectMethod (Buffer, mid_setLenght, 0);
	
	// copy new string into java-string
	jstring _jstring = (*pJEnv).NewString((jchar*) _Buffer, (jsize)wcslen(_Buffer));
	(*pJEnv).CallObjectMethod (Buffer, mid_append, _jstring);
	
	// free buffer
	delete _Buffer;
	
	// return function
	return (jint)nRet;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbAddTableRelationEx)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jstring TableID, 
																											jstring ParentTableID, 
																											jstring RelationID, 
																											jstring RelationDisplayName,
																											jstring KeyField, 
																											jstring ParentKeyField
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jint res = ((jint)(::LlDbAddTableRelationEx((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, TableID), ConvertJStringToCString(pJEnv, ParentTableID), ConvertJStringToCString(pJEnv, RelationID), ConvertJStringToCString(pJEnv, RelationDisplayName), ConvertJStringToCString(pJEnv, KeyField), ConvertJStringToCString(pJEnv, ParentKeyField))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlDbAddTableSortOrderEx)(
																											JNIEnv* pJEnv, 
																											jobject /*oJObject*/, // unused 
																											jint LlJob, 
																											jstring TableID, 
																											jstring SortOrderID, 
																											jstring SortOrderDisplayName,
																											jstring Field
																											)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jint res = ((jint)(::LlDbAddTableSortOrderEx((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, TableID), ConvertJStringToCString(pJEnv, SortOrderID), ConvertJStringToCString(pJEnv, SortOrderDisplayName), ConvertJStringToCString(pJEnv, Field))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlSetPrinterInPrinterFile)(
														JNIEnv* pJEnv, 
														jobject /*oJObject*/, // unused 
														jint LlJob, 
														jint ObjectType, 
														jstring ObjectName, 
														jint PrinterIndex,
														jstring PrinterName
														)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jint res = ((jint)(::LlSetPrinterInPrinterFile((HLLJOB)(LlJob), ObjectType, ConvertJStringToCString(pJEnv, ObjectName), PrinterIndex, ConvertJStringToCString(pJEnv, PrinterName), NULL)));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlLocAddDictionaryEntry)(
																	JNIEnv* pJEnv, 
																	jobject /*oJObject*/, // unused
																	jint LlJob, 
																	jint LCID, 
																	jstring Key, 
																	jstring Value, 
																	jint Type
																	)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlLocAddDictionaryEntry((HLLJOB)(LlJob), (_LCID)(LCID), ConvertJStringToCString(pJEnv, Key), ConvertJStringToCString(pJEnv, Value), Type)));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlLocAddDesignLCID)(
																JNIEnv* pJEnv, 
																jobject /*oJObject*/, // unused
																jint LlJob, 
																jint LCID
																)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
    jint res = ((jint)(LlLocAddDesignLCID((HLLJOB)(LlJob), (_LCID)(LCID))));
	jni_env_registry.rem(LlJob);
	return res;
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlUtilsGetProjectType)(
																JNIEnv* pJEnv,
																jobject /*oJObject*/, // unused
																jint LlJob,
																jstring ProjectFilename
																)
// =======================================================================
{
	jni_env_registry.add(LlJob, pJEnv);
	jint res = ((jint)(LlUtilsGetProjectType((HLLJOB)(LlJob), ConvertJStringToCString(pJEnv, ProjectFilename))));
	jni_env_registry.rem(LlJob);
	return res;
}