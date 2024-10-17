
//
#include <jni.h>


#define __GLUE3(x,y,z) 	x ## y ## z

#if defined(_WIN64)
	
	#define FCT(f) __GLUE3(Java_combit_x64_CmbtLS30, 64, f)

	typedef jlong jHLLSTG;			// HLLSTG
	typedef jlong jHANDLE;			// HANDLE
	typedef jlong jHWND;			// HWND
	typedef jlong jHLSCNVJOB;		// HLSCNVJOB
	typedef jlong jHLSMAILJOB;		// HLSMAILJOB
	typedef jlong jHENHMETAFILE;	// HENHMETAFILE
	typedef jlong jHSTG;			// HSTG

#else

	#define FCT(f) __GLUE3(Java_combit_x86_CmbtLS30, 32, f)

	typedef jint jHLLSTG;
	typedef jint jHANDLE;			// HANDLE
	typedef jint jHWND;				// HWND
	typedef jint jHLSCNVJOB;		// HLSCNVJOB
	typedef jint jHLSMAILJOB;		// HLSMAILJOB
	typedef jint jHENHMETAFILE;		// HENHMETAFILE
	typedef jint jHSTG;				// HSTG

#endif


#ifndef _Included_cmLS
#define _Included_cmLS
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jHLLSTG JNICALL FCT(_LlStgsysStorageOpen)(JNIEnv*, jobject, jstring, jstring, jboolean, jboolean);
JNIEXPORT void JNICALL FCT(_LlStgsysStorageClose)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetAPIVersion)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetFileVersion)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetFilename)(JNIEnv*, jobject, jHLLSTG, jint, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJobCount)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysSetJob)(JNIEnv*, jobject, jHLLSTG, jint);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJob)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetPageCount)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJobOptionValue)(JNIEnv*, jobject, jHLLSTG, jint);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetPageOptionValue)(JNIEnv*, jobject, jHLLSTG, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetPageOptionString)(JNIEnv*, jobject, jHLLSTG, jint, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlStgsysSetPageOptionString)(JNIEnv*, jobject, jHLLSTG, jint, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlStgsysAppend)(JNIEnv*, jobject, jHLLSTG, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysDeleteJob)(JNIEnv*, jobject, jHLLSTG, jint);
JNIEXPORT jint JNICALL FCT(_LlStgsysDeletePage)(JNIEnv*, jobject, jHLLSTG, jint);
JNIEXPORT jHANDLE JNICALL FCT(_LlStgsysGetPageMetafile)(JNIEnv*, jobject, jHLLSTG, jint);
JNIEXPORT jint JNICALL FCT(_LlStgsysDestroyMetafile)(JNIEnv*, jobject, jHANDLE);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetLastError)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysDeleteFiles)(JNIEnv*, jobject, jHLLSTG);
JNIEXPORT jint JNICALL FCT(_LlStgsysPrint)(JNIEnv*, jobject, jHLLSTG, jstring, jstring, jint, jint, jint, jint, jstring, jHWND);
JNIEXPORT jint JNICALL FCT(_LlStgsysStoragePrint)(JNIEnv*, jobject, jstring, jstring, jstring, jstring, jint, jint, jint, jint, jstring, jHWND);
JNIEXPORT void JNICALL FCT(_LsSetDebug)(JNIEnv*, jobject, jboolean);
JNIEXPORT jstring JNICALL FCT(_LsGetViewerControlClassName)(JNIEnv*, jobject);
JNIEXPORT jint JNICALL FCT(_LsGetViewerControlDefaultMessage)(JNIEnv*, jobject);
JNIEXPORT jint JNICALL FCT(_LsCreateViewerControlOverParent)(JNIEnv*, jobject, jHSTG, jHWND);
JNIEXPORT jint JNICALL FCT(_LlStgsysGetJobOptionStringEx)(JNIEnv*, jobject, jHLLSTG, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlStgsysSetJobOptionStringEx)(JNIEnv*, jobject, jHLLSTG, jstring, jstring);
JNIEXPORT jHLSCNVJOB JNICALL FCT(_LsConversionJobOpen)(JNIEnv*, jobject, jHWND, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LsConversionJobClose)(JNIEnv*, jobject, jHLSCNVJOB);
JNIEXPORT jint JNICALL FCT(_LsConversionConfigurationDlg)(JNIEnv*, jobject, jHLSCNVJOB, jHWND);
JNIEXPORT jint JNICALL FCT(_LsConversionSetOptionString)(JNIEnv*, jobject, jHLSCNVJOB, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LsConversionGetOptionString)(JNIEnv*, jobject, jHLSCNVJOB, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LsConversionConvertEMFToFile)(JNIEnv*, jobject, jHLSCNVJOB, jHENHMETAFILE, jstring);
JNIEXPORT jint JNICALL FCT(_LsConversionConvertStgToFile)(JNIEnv*, jobject, jHLSCNVJOB, jHLLSTG, jstring);
JNIEXPORT jint JNICALL FCT(_LlStgsysStorageConvert)(JNIEnv*, jobject, jstring, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlStgsysConvert)(JNIEnv*, jobject, jHLLSTG, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LsMailConfigurationDialog)(JNIEnv*, jobject, jHWND, jstring, jint, jint);
JNIEXPORT jHLSMAILJOB JNICALL FCT(_LsMailJobOpen)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LsMailJobClose)(JNIEnv*, jobject, jHLSMAILJOB);
JNIEXPORT jint JNICALL FCT(_LsMailSetOptionString)(JNIEnv*, jobject, jHLSMAILJOB, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LsMailGetOptionString)(JNIEnv*, jobject, jHLSMAILJOB, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LsMailSendFile)(JNIEnv*, jobject, jHLSMAILJOB, jHWND);
JNIEXPORT jint JNICALL FCT(_LsProfileStart)(JNIEnv*, jobject, jHANDLE, jstring, jstring, jint);
JNIEXPORT void JNICALL FCT(_LsProfileEnd)(JNIEnv*, jobject, jHANDLE);
JNIEXPORT jint JNICALL FCT(_LsMailView)(JNIEnv*, jobject, jHWND, jstring, jint, jint);
JNIEXPORT jint JNICALL FCT(_LsInternalCreateViewerControlOverParent13)(JNIEnv*, jobject, jHWND, jint);
JNIEXPORT jHWND JNICALL FCT(_LsInternalGetViewerControlFromParent13)(JNIEnv*, jobject, jHWND);
JNIEXPORT void JNICALL FCT(_LsSetDlgboxMode)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LsGetDlgboxMode)(JNIEnv*, jobject);


#ifdef __cplusplus
}
#endif
#endif // #ifndef _Included_cmLS

