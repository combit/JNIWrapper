//
// Java Declaration File
// constants and function definitions for combit List & Label 31
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 31.000
//

package combit;

import combit.x86.*;
import combit.x64.*;

public final class WinHelper
  {
	private static WinHelper32 WinHelper_32 = null;
	private static WinHelper64 WinHelper_64 = null;
	  
	/**
	* Retrieves a window handle.
	* <br>Hint: It have to be a visible window/component!
	*/
	public static long getWindowHandle
	  (
	  java.awt.Component		component	
	  )
	  {
		if(WinHelper_32 != null)
		{
			return WinHelper_32.getWindowHandle(component);
		}
		else if(WinHelper_64 != null)
		{
			return WinHelper_64.getWindowHandle(component);
		}
		else
		{
			throw new UnsupportedOperationException("Platform not supported by List & Label");
		}
	  }
	
	/**
	* Sets an event object.
	*/
	public static boolean setEvent
	  (
      int job,
      long hEvent
	  )
	  {
		if(WinHelper_32 != null)
		{
			return WinHelper_32.setEvent(job, (int)hEvent);
		}
		else if(WinHelper_64 != null)
		{
			return WinHelper_64.setEvent(job, hEvent);
		}
		else
		{
			throw new UnsupportedOperationException("Platform not supported by List & Label");
		}
	  }
	
	static
	  {
		String vmArch = System.getProperty("sun.arch.data.model");
		if(vmArch.compareTo("32") == 0)
		{
			WinHelper_32 = new WinHelper32();
		}
		else if(vmArch.compareTo("64") == 0)
		{
			WinHelper_64 = new WinHelper64();
		}
		else
		{
			throw new UnsupportedOperationException("Platform not supported by List & Label");
		}
	  }
  };