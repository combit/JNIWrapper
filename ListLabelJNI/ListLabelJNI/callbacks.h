
#ifndef _LLJNICALLBACKS_H
#define _LLJNICALLBACKS_H

//

#include <jni.h>

#define __GLUE2(x,y) 	x ## y
#define __GLUE3(x,y,z) 	x ## y ## z

#if defined(_WIN64)

	#define FCT(f) __GLUE3(Java_combit_x64_CmbtLL31, 64, f)

#else

	#define FCT(f) __GLUE3(Java_combit_x86_CmbtLL31, 32, f)

#endif

#ifdef __cplusplus
extern "C" {
#endif

	JNIEXPORT jboolean JNICALL FCT(_LlSetNotificationCallback)(JNIEnv*, jobject, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif // _LLJNICALLBACKS_H