//
// Java Declaration File
// constants and function definitions for combit List & Label 25
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 25.000
//

package combit.x86;

public final class WinHelper32
  {
	/**
	* Retrieves a window handle.
	* <br>Hint: It have to be a visible window/component!
	*/
	public native int getWindowHandle
	  (
	  java.awt.Component		component	
	  );
	
	/**
	* Sets an event object.
	*/
	public native boolean setEvent
	  (
      int job,
      int hEvent
	  );
	
	static
	  {
		System.loadLibrary("ListLabel25JNI_x86"); // use List & Label JNI x86
	  }
  };