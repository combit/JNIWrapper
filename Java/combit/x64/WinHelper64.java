//
// Java Declaration File
// constants and function definitions for combit List & Label 31
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 31.000
//

package combit.x64;

public final class WinHelper64
  {
	/**
	* Retrieves a window handle.
	* <br>Hint: It have to be a visible window/component!
	*/
	public native long getWindowHandle
	  (
	  java.awt.Component		component	
	  );
	
	/**
	* Sets an event object.
	*/
	public native boolean setEvent
	  (
      int job,
      long hEvent
	  );
	
	static
	  {
		System.loadLibrary("ListLabel31JNI_x64"); // use List & Label JNI x64
	  }
  };