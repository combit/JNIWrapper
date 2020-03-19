
//

#include <stdafx.h>
#include "WinHelper.h"

#ifndef UNICODE
  #pragma message("Die DLL muß als Unicode-DLL compiliert werden!")
#endif


#if defined(_MSC_VER)
  #pragma warning(disable:4242) // conversion: possible loss of data
#endif


// global handle for the awt library
HMODULE _hAWT = 0;


// source: http://stackoverflow.com/questions/386792/in-java-swing-how-do-you-get-a-win32-window-handle-hwnd-reference-to-a-window
// =======================================================================
JNIEXPORT jHWND JNICALL FCT(_getWindowHandle)(
											JNIEnv* pJEnv, 
											jclass /* cls */, // unused
											jobject oComponent
											)
// =======================================================================
{
    HWND hWnd = 0;
    typedef jboolean (JNICALL *PJAWT_GETAWT)(JNIEnv*, JAWT*);
    
    // try to load the AWT Library
	JAWT awt;
    if(!_hAWT)
	{
		_hAWT = ::LoadLibrary(_T("jawt.dll")); // for Java 1.4
		if(_hAWT)
			awt.version = JAWT_VERSION_1_4;
	}
	
	// fallback for earlier versions
    if(!_hAWT)
	{
		_hAWT = ::LoadLibrary(_T("awt.dll")); // for Java 1.3
		if(_hAWT)
			awt.version = JAWT_VERSION_1_3;
	}
	
	ASSERT(_hAWT);
    if(_hAWT)
    {
		PJAWT_GETAWT JAWT_GetAWT = NULL;
		#ifdef WIN32
			JAWT_GetAWT = (PJAWT_GETAWT)GetProcAddress(_hAWT, "_JAWT_GetAWT@8");
		#endif
		
		#ifdef WIN64
			JAWT_GetAWT = (PJAWT_GETAWT)GetProcAddress(_hAWT, "JAWT_GetAWT");
		#endif
		
        if(JAWT_GetAWT)
        {
            jboolean result = JAWT_GetAWT(pJEnv, &awt);
            if(result != JNI_FALSE)
            {
				JAWT_DrawingSurface* ds(NULL);
                ds = awt.GetDrawingSurface(pJEnv, oComponent);
                if(ds != NULL)
                {
                    jint lock = ds->Lock(ds);
                    if((lock & JAWT_LOCK_ERROR) == 0)
                    {
						JAWT_DrawingSurfaceInfo* dsi(NULL);
                        dsi = ds->GetDrawingSurfaceInfo(ds);
                        if(dsi)
                        {
							JAWT_Win32DrawingSurfaceInfo* dsi_win(NULL);
                            dsi_win = (JAWT_Win32DrawingSurfaceInfo*)dsi->platformInfo;
                            if(dsi_win)
                                hWnd = dsi_win->hwnd;
							
                            ds->FreeDrawingSurfaceInfo(dsi);
                        }
                        ds->Unlock(ds);
                    }
                    awt.FreeDrawingSurface(ds);
                }
            }
        }
    }
    return(jHWND)hWnd;
}


// =======================================================================
JNIEXPORT jboolean JNICALL FCT(_setEvent)(
										JNIEnv* /* pJEnv */,
										jclass /* jobject */, // unused 
										jint /* LlJob */, // unused
										jHANDLE jhEvent
										)
// =======================================================================
{
	if (jhEvent == 0)
	{
		return JNI_FALSE;
	}

	HANDLE hEvent = (HANDLE)jhEvent;
	return (jboolean)::SetEvent(hEvent);
}