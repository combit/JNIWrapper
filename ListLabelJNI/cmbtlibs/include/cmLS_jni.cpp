
//

#include <stdafx.h>
#include "cmLS_jni.h"

#ifndef UNICODE
  #pragma message("Die DLL muﬂ als Unicode-DLL compiliert werden!")
#endif

#include "CmbtLS29.h"


#if defined(_MSC_VER)
  #pragma warning(disable:4242) // conversion: possible loss of data
#endif


// contains special types and global variables
#include "global.h"


// =======================================================================
JNIEXPORT jHLLSTG JNICALL FCT(_LlStgsysStorageOpen)(
																	JNIEnv* pJEnv, 
																	jobject /*oJObject*/, // unused 
																	jstring Filename, 
																	jstring TempPath, 
																	jboolean ReadOnly, 
																	jboolean OneJobTranslation
																	)
// =======================================================================
{
    return((jHLLSTG)(LlStgsysStorageOpen(ConvertJStringToCString(pJEnv, Filename), ConvertJStringToCString(pJEnv, TempPath), (BOOL)(ReadOnly), (BOOL)(OneJobTranslation))));
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LlStgsysStorageClose)(
												JNIEnv* /*pJEnv*/, // unused
												jobject /*oJObject*/, // unused  
												jHLLSTG Stg
												)
// =======================================================================
{
    LlStgsysStorageClose((HLLSTG)(Stg));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetAPIVersion)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jHLLSTG Stg
																)
// =======================================================================
{
    return((jint)(LlStgsysGetAPIVersion((HLLSTG)(Stg))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetFileVersion)(
																	JNIEnv* /*pJEnv*/, // unused
																	jobject /*oJObject*/, // unused  
																	jHLLSTG Stg
																	)
// =======================================================================
{
    return((jint)(LlStgsysGetFileVersion((HLLSTG)(Stg))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetFilename)(
																JNIEnv* pJEnv, 
																jobject /*oJObject*/, // unused  
																jHLLSTG Stg,
																jint Job, 
																jint File, 
																jobject Buffer
																)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// get buffersize for Ll-function
	int nBufferSize = LlStgsysGetFilename((HLLSTG)(Stg), (INT)Job, (INT)File, NULL, 0);
	if (nBufferSize < 0)
		return (jint)nBufferSize;
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlStgsysGetFilename((HLLSTG)(Stg), (INT)Job, (INT)File, _Buffer, nBufferSize);
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
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJobCount)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jHLLSTG Stg
																)
// =======================================================================
{
    return((jint)(LlStgsysGetJobCount((HLLSTG)(Stg))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysSetJob)(
															JNIEnv* /*pJEnv*/, // unused
															jobject /*oJObject*/, // unused  
															jHLLSTG Stg,
															jint Job
															)
// =======================================================================
{
    return((jint)(LlStgsysSetJob((HLLSTG)(Stg), (INT)(Job))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJob)(
															JNIEnv* /*pJEnv*/, // unused
															jobject /*oJObject*/, // unused  
															jHLLSTG Stg
															)
// =======================================================================
{
    return((jint)(LlStgsysGetJob((HLLSTG)(Stg))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetPageCount)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jHLLSTG Stg
																)
// =======================================================================
{
    return((jint)(LlStgsysGetPageCount((HLLSTG)(Stg))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJobOptionValue)(
																		JNIEnv* /*pJEnv*/, // unused
																		jobject /*oJObject*/, // unused  
																		jHLLSTG Stg,
																		jint Option
																		)
// =======================================================================
{
    return((jint)(LlStgsysGetJobOptionValue((HLLSTG)(Stg), (INT)(Option))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetPageOptionValue)(
																		JNIEnv* /*pJEnv*/, // unused
																		jobject /*oJObject*/, // unused  
																		jHLLSTG Stg,
																		jint PageIndex, 
																		jint Option
																		)
// =======================================================================
{
    return((jint)(LlStgsysGetPageOptionValue((HLLSTG)(Stg), (INT)(PageIndex), (INT)(Option))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetPageOptionString)(
																		JNIEnv* pJEnv, 
																		jobject /*oJObject*/, // unused  
																		jHLLSTG Stg,
																		jint PageIndex, 
																		jint Option, 
																		jobject Buffer
																		)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);

	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	// get buffersize for Ll-function
	int nBufferSize = LlStgsysGetPageOptionString((HLLSTG)(Stg), (INT)PageIndex, (INT)Option, NULL, 0);
	if (nBufferSize < 0)
		return (jint)nBufferSize;
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LlStgsysGetPageOptionString((HLLSTG)(Stg), (INT)PageIndex, (INT)Option, _Buffer, nBufferSize);
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
JNIEXPORT jint JNICALL FCT(_LlStgsysSetPageOptionString)(
																		JNIEnv* pJEnv, 
																		jobject /*oJObject*/, // unused  
																		jHLLSTG Stg,
																		jint PageIndex, 
																		jint Option, 
																		jstring Buffer
																		)
// =======================================================================
{
    return((jint)(LlStgsysSetPageOptionString((HLLSTG)(Stg), (INT)(PageIndex), (INT)(Option), ConvertJStringToCString(pJEnv, Buffer))));
}

// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysAppend)(
															JNIEnv* /*pJEnv*/, // unused
															jobject /*oJObject*/, // unused  
															jHLLSTG Stg,
															jHLLSTG StgToAppend
															)
// =======================================================================
{
	return((jint)(LlStgsysAppend((HLLSTG)(Stg), (HLLSTG)(StgToAppend))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysDeleteJob)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jHLLSTG Stg,
																jint PageIndex
																)
// =======================================================================
{
    return((jint)(LlStgsysDeleteJob((HLLSTG)(Stg), (INT)(PageIndex))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysDeletePage)(
												JNIEnv* /*pJEnv*/, // unused
												jobject /*oJObject*/, // unused  
												jHLLSTG Stg,
												jint PageIndex
												)
// =======================================================================
{
    return((jint)(LlStgsysDeletePage)((HLLSTG)(Stg), (INT)(PageIndex)));
}


// =======================================================================
JNIEXPORT jHANDLE JNICALL FCT(_LlStgsysGetPageMetafile)(
																		JNIEnv* /*pJEnv*/, // unused
																		jobject /*oJObject*/, // unused  
																		jHLLSTG Stg,
																		jint PageIndex
																		)
// =======================================================================
{
    return((jHANDLE)(LlStgsysGetPageMetafile((HLLSTG)(Stg), (INT)(PageIndex))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysDestroyMetafile)(
																	JNIEnv* /*pJEnv*/, // unused
																	jobject /*oJObject*/, // unused  
																	jHANDLE MF
																	)
// =======================================================================
{
    return((jint)(LlStgsysDestroyMetafile((HANDLE)(MF))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetLastError)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jHLLSTG Stg
																)
// =======================================================================
{
    return((jint)(LlStgsysGetLastError((HLLSTG)(Stg))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysDeleteFiles)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jHLLSTG Stg
																)
// =======================================================================
{
    return((jint)(LlStgsysDeleteFiles((HLLSTG)(Stg))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysPrint)(
														JNIEnv* pJEnv, 
														jobject /*oJObject*/, // unused  
														jHLLSTG Stg,
														jstring PrinterName1, 
														jstring PrinterName2, 
														jint StartPageIndex, 
														jint EndPageIndex, 
														jint Copies, 
														jint Flags, 
														jstring Message, 
														jHWND WndParent
														)
// =======================================================================
{
    return((jint)(LlStgsysPrint((HLLSTG)(Stg), ConvertJStringToCString(pJEnv, PrinterName1), ConvertJStringToCString(pJEnv, PrinterName2), (INT)(StartPageIndex), (INT)(EndPageIndex), (INT)(Copies), (UINT)(Flags), ConvertJStringToCString(pJEnv, Message), (HWND)(WndParent))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysStoragePrint)(
																JNIEnv* pJEnv, 
																jobject /*oJObject*/, // unused  
																jstring Filename, 
																jstring TempPath, 
																jstring PrinterName1, 
																jstring PrinterName2, 
																jint StartPageIndex, 
																jint EndPageIndex, 
																jint Copies, 
																jint Flags, 
																jstring Message, 
																jHWND WndParent
																)
// =======================================================================
{
    return((jint)(LlStgsysStoragePrint(ConvertJStringToCString(pJEnv, Filename), ConvertJStringToCString(pJEnv, TempPath), ConvertJStringToCString(pJEnv, PrinterName1), ConvertJStringToCString(pJEnv, PrinterName2), (INT)(StartPageIndex), (INT)(EndPageIndex), (INT)(Copies), (UINT)(Flags), ConvertJStringToCString(pJEnv, Message), (HWND)(WndParent))));
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LsSetDebug)(
														JNIEnv* /*pJEnv*/, // unused
														jobject /*oJObject*/, // unused  
														jboolean On
														)
// =======================================================================
{
    LsSetDebug((BOOL)(On));
}


// =======================================================================
JNIEXPORT jstring JNICALL FCT(_LsGetViewerControlClassName)(
																			JNIEnv* /*pJEnv*/, // unused
																			jobject /*oJObject*/ // unused
																			)
// =======================================================================
{
    return((jstring)(LsGetViewerControlClassName()));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsGetViewerControlDefaultMessage)(
																			JNIEnv* /*pJEnv*/, // unused
																			jobject /*oJObject*/ // unused
																			)
// =======================================================================
{
    return((jint)(LsGetViewerControlDefaultMessage()));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsCreateViewerControlOverParent)(
																			JNIEnv* /*pJEnv*/, // unused
																			jobject /*oJObject*/, // unused  
																			jHSTG Stg,
																			jHWND ParentControl
																			)
// =======================================================================
{
    return((jint)(LsCreateViewerControlOverParent((HSTG)(Stg), (HWND)(ParentControl))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJobOptionStringEx)(
																			JNIEnv* pJEnv, 
																			jobject /*oJObject*/, // unused  
																			jHLLSTG Stg,
																			jstring Key, 
																			jobject Buffer
																			)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Key, 0);
    CString sKey((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Key, pwszTempStr1);
	
	// get buffersize for Ll-function
	int nBufferSize = LlStgsysGetJobOptionStringEx((HLLSTG)(Stg), (CString)sKey, NULL, 0);
	if (nBufferSize < 0)
		return (jint)nBufferSize;
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];	
	int nRet = LlStgsysGetJobOptionStringEx((HLLSTG)(Stg), (CString)sKey, _Buffer, nBufferSize);
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
JNIEXPORT jint JNICALL FCT(_LlStgsysSetJobOptionStringEx)(
																		JNIEnv* pJEnv, 
																		jobject /*oJObject*/, // unused  
																		jHLLSTG Stg,
																		jstring Key, 
																		jstring Buffer
																		)
// =======================================================================
{
    return((jint)(LlStgsysSetJobOptionStringEx((HLLSTG)(Stg), ConvertJStringToCString(pJEnv, Key), ConvertJStringToCString(pJEnv, Buffer))));
}


// =======================================================================
JNIEXPORT jHLSCNVJOB JNICALL FCT(_LsConversionJobOpen)(
																	JNIEnv* pJEnv, 
																	jobject /*oJObject*/, // unused  
																	jHWND WndParent,
																	jint Language, 
																	jstring Format
																	)
// =======================================================================
{
    return((jHLSCNVJOB)(LsConversionJobOpen((HWND)(WndParent), (INT)(Language), ConvertJStringToCString(pJEnv, Format))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsConversionJobClose)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jHLSCNVJOB CnvJob
																)
// =======================================================================
{
    return((jint)(LsConversionJobClose((HLSCNVJOB)(CnvJob))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsConversionConfigurationDlg)(
																		JNIEnv* /*pJEnv*/, // unused
																		jobject /*oJObject*/, // unused  
																		jHLSCNVJOB CnvJob,
																		jHWND WndParent
																		)
// =======================================================================
{
    return((jint)(LsConversionConfigurationDlg((HLSCNVJOB)(CnvJob), (HWND)(WndParent))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsConversionSetOptionString)(
																		JNIEnv* pJEnv, 
																		jobject /*oJObject*/, // unused  
																		jHLSCNVJOB CnvJob,
																		jstring Key, 
																		jstring Data
																		)
// =======================================================================
{
    return((jint)(LsConversionSetOptionString((HLSCNVJOB)(CnvJob), ConvertJStringToCString(pJEnv, Key), ConvertJStringToCString(pJEnv, Data))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsConversionGetOptionString)(
																		JNIEnv* pJEnv, 
																		jobject /*oJObject*/, // unused  
																		jHLSCNVJOB CnvJob,
																		jstring Key, 
																		jobject Buffer
																		)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Key, 0);
    CString sKey((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Key, pwszTempStr1);
	
	// get buffersize for Ll-function
	int nBufferSize = LsConversionGetOptionString((HLSCNVJOB)(CnvJob), (CString)sKey, NULL, 0);
	if (nBufferSize < 0)
		return (jint)nBufferSize;
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];	
	int nRet = LsConversionGetOptionString((HLSCNVJOB)(CnvJob), (CString)sKey, _Buffer, nBufferSize);
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
JNIEXPORT jint JNICALL FCT(_LsConversionConvertEMFToFile)(
																		JNIEnv* pJEnv, 
																		jobject /*oJObject*/, // unused  
																		jHLSCNVJOB CnvJob,
																		jHENHMETAFILE EMF,
																		jstring Filename
																		)
// =======================================================================
{
    return((jint)(LsConversionConvertEMFToFile((HLSCNVJOB)(CnvJob), (HENHMETAFILE)(EMF), ConvertJStringToCString(pJEnv, Filename))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsConversionConvertStgToFile)(
																		JNIEnv* pJEnv, 
																		jobject /*oJObject*/, // unused  
																		jHLSCNVJOB CnvJob,
																		jHLLSTG Stg,
																		jstring Filename
																		)
// =======================================================================
{
    return((jint)(LsConversionConvertStgToFile((HLSCNVJOB)(CnvJob), (HLLSTG)(Stg), ConvertJStringToCString(pJEnv, Filename))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysStorageConvert)(
																	JNIEnv* pJEnv, 
																	jobject /*oJObject*/, // unused  
																	jstring StgFilename, 
																	jstring DstFilename, 
																	jstring Format
																	)
// =======================================================================
{
    return((jint)(LlStgsysStorageConvert(ConvertJStringToCString(pJEnv, StgFilename), ConvertJStringToCString(pJEnv, DstFilename), ConvertJStringToCString(pJEnv, Format))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LlStgsysConvert)(
															JNIEnv* pJEnv, 
															jobject /*oJObject*/, // unused  
															jHLLSTG Stg,
															jstring DstFilename, 
															jstring Format
															)
// =======================================================================
{
    return((jint)(LlStgsysConvert((HLLSTG)(Stg), ConvertJStringToCString(pJEnv, DstFilename), ConvertJStringToCString(pJEnv, Format))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsMailConfigurationDialog)(
																	JNIEnv* pJEnv, 
																	jobject /*oJObject*/, // unused  
																	jHWND WndParent,
																	jstring Subkey, 
																	jint Flags, 
																	jint Language
																	)
// =======================================================================
{
    return((jint)(LsMailConfigurationDialog((HWND)(WndParent), ConvertJStringToCString(pJEnv, Subkey), (UINT)(Flags), (INT)(Language))));
}


// =======================================================================
JNIEXPORT jHLSMAILJOB JNICALL FCT(_LsMailJobOpen)(
																JNIEnv* /*pJEnv*/, // unused
																jobject /*oJObject*/, // unused  
																jint Language
																)
// =======================================================================
{
    return((jHLSMAILJOB)(LsMailJobOpen((INT)(Language))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsMailJobClose)(
															JNIEnv* /*pJEnv*/, // unused
															jobject /*oJObject*/, // unused  
															jHLSMAILJOB Job
															)
// =======================================================================
{
    return((jint)(LsMailJobClose((HLSMAILJOB)(Job))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsMailSetOptionString)(
																	JNIEnv* pJEnv, 
																	jobject /*oJObject*/, // unused  
																	jHLSMAILJOB Job,
																	jstring Key, 
																	jstring Value
																	)
// =======================================================================
{
    return((jint)(LsMailSetOptionString((HLSMAILJOB)(Job), ConvertJStringToCString(pJEnv, Key), ConvertJStringToCString(pJEnv, Value))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsMailGetOptionString)(
																JNIEnv* pJEnv, 
																jobject /*oJObject*/, // unused  
																jHLSMAILJOB Job,
																jstring Key, 
																jobject Buffer
																)
// =======================================================================
{
    jclass clazz = (*pJEnv).GetObjectClass (Buffer);
	
	// get method IDs for java object 'Buffer'
	jmethodID mid_append = (*pJEnv).GetMethodID (clazz, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
	jmethodID mid_setLenght = (*pJEnv).GetMethodID (clazz, "setLength", "(I)V");
	
	const jchar* pwszTempStr1 = pJEnv->GetStringChars(Key, 0);
    CString sKey((const WCHAR*)pwszTempStr1);
    pJEnv->ReleaseStringChars(Key, pwszTempStr1);
	
	// get buffersize for Ll-function
	int nBufferSize = LsMailGetOptionString((HLSMAILJOB)(Job), (CString)sKey, NULL, 0);
	if (nBufferSize < 0)
		return (jint)nBufferSize;
	
	// create buffer and call Ll-function
	WCHAR *_Buffer = new WCHAR[nBufferSize];
	int nRet = LsMailGetOptionString((HLSMAILJOB)(Job), (CString)sKey, _Buffer, nBufferSize);
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
JNIEXPORT jint JNICALL FCT(_LsMailSendFile)(
															JNIEnv* /*pJEnv*/, // unused
															jobject /*oJObject*/, // unused  
															jHLSMAILJOB Job,
															jHWND WndParent
															)
// =======================================================================
{
    return((jint)(LsMailSendFile((HLSMAILJOB)(Job), (HWND)(WndParent))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsProfileStart)(
															JNIEnv* pJEnv, 
															jobject /*oJObject*/, // unused  
															jHANDLE Thread,
															jstring Descr, 
															jstring Filename, 
															jint TicksMS
															)
// =======================================================================
{
    return((jint)(LsProfileStart((HANDLE)(Thread), ConvertJStringToCString(pJEnv, Descr), ConvertJStringToCString(pJEnv, Filename), (INT)(TicksMS))));
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LsProfileEnd)(
														JNIEnv* /*pJEnv*/, // unused
														jobject /*oJObject*/, // unused  
														jHANDLE Thread
														)
// =======================================================================
{
    LsProfileEnd((HANDLE)(Thread));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsMailView)(
														JNIEnv* pJEnv, 
														jobject /*oJObject*/, // unused  
														jHWND WndParent,
														jstring MailFile, 
														jint Rights, 
														jint Language
														)
// =======================================================================
{
    return((jint)(LsMailView((HWND)(WndParent), ConvertJStringToCString(pJEnv, MailFile), (UINT)(Rights), (INT)(Language))));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsInternalCreateViewerControlOverParent13)(
																					JNIEnv* /*pJEnv*/, // unused
																					jobject /*oJObject*/, // unused
																					jHWND ParentControl,
																					jint Flags
																					)
// =======================================================================
{
    return((jint)(LsInternalCreateViewerControlOverParent13((HWND)(ParentControl), (UINT)(Flags))));
}


// =======================================================================
JNIEXPORT jHWND JNICALL FCT(_LsInternalGetViewerControlFromParent13)(
																					JNIEnv* /*pJEnv*/, // unused
																					jobject /*oJObject*/, // unused
																					jHWND ParentControl
																					)
// =======================================================================
{
    return((jHWND)(LsInternalGetViewerControlFromParent13((HWND)(ParentControl))));
}


// =======================================================================
JNIEXPORT void JNICALL FCT(_LsSetDlgboxMode)(
															JNIEnv* /*pJEnv*/, // unused
															jobject /*oJObject*/, // unused  
															jint Mode
															)
// =======================================================================
{
    LsSetDlgboxMode((UINT)(Mode));
}


// =======================================================================
JNIEXPORT jint JNICALL FCT(_LsGetDlgboxMode)(
															JNIEnv* /*pJEnv*/, // unused
															jobject /*oJObject*/ // unused
															)
// =======================================================================
{
    return((jint)(LsGetDlgboxMode()));
}