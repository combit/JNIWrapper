
// package
package combit.callbacks;

/**
* Description: Superclass for the specified parameters for the List & Label callbacks.
*
* @author Copyright (c) combit Software GmbH
* @version 28.0
*/

public class CallbackInfo
{
  /**
  * Holds the List & Label Job-Handle.
  */
  public final int hLlJob_;

  /**
  * Holds the specified List & Label callback ID.
  */
  public final int callbackID_;

  /**
  * <p>Constructs the callback object with specified information from List & Label.</p>
  * <p>Hint: The constructor will be called by the derived callback classes.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param callbackID Specified List & Label callback ID.
  */
  protected CallbackInfo(int hLlJob, int callbackID)
  {
    hLlJob_ = hLlJob;
    callbackID_ = callbackID;
  }
}
