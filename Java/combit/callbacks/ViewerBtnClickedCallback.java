
// package
package combit.callbacks;

// imports
import combit.CmbtLL27;

/**
* Description: Notification that a button has been pressed in the real data preview.
* <p>Hint:
* <br>For the IDs please refer to the callback 'GetViewerButtonStateCallback'.
* </p>
*
* @author Copyright (c) combit Software GmbH
* @version 27.0
*/

public class ViewerBtnClickedCallback extends CallbackInfo
{
  /**
  * Holds the button ID.
  */
  public final int buttonID_;

  /**
  * Holds the return value for this callback in List & Label.
  */
  private int lResult_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param buttonID Tool button ID.<br><br>
  */
  public ViewerBtnClickedCallback(int hLlJob, int buttonID)
  {
    super(hLlJob, CmbtLL27.LL_NTFY_VIEWERBTNCLICKED);
    buttonID_ = buttonID;
    lResult_ = 0;
  }

  /**
  * Sets the return value for this callback in List & Label.
  *
  * @param result Possible values are:
  * <br>1 = ignore button (action usually done by host application).
  * <br>0 = execute default button function (default).
  */
  public void setCallbackResult(int result)
  {
    lResult_ = result;
  }
}
