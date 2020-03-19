
//
#include <jni.h>
#include <jawt.h>
#include <jawt_md.h>

#define __GLUE3(x,y,z) 	x ## y ## z

#if defined(_WIN64)

	#define FCT(f) __GLUE3(Java_combit_x64_WinHelper, 64, f)

	typedef jlong jHANDLE;			// HANDLE
	typedef jlong jHWND;			// HWND

#else
	
	#define FCT(f) __GLUE3(Java_combit_x86_WinHelper, 32, f)

	typedef jint jHANDLE;			// HANDLE
	typedef jint jHWND;				// HWND

#endif

#ifndef _Included_WinHelper
#define _Included_WinHelper
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jHWND JNICALL FCT(_getWindowHandle)(JNIEnv*, jclass, jobject);
JNIEXPORT jboolean JNICALL FCT(_setEvent)(JNIEnv *, jclass, jint, jHANDLE);


#ifdef __cplusplus
}
#endif
#endif // #ifndef _Included_WinHelper

