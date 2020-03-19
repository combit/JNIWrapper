
// package
package combit.callbacks;

// imports
import combit.CmbtLL25;

/**
* Description: Using this callback, List & Label asks the application about button states of the real data preview's toolbar buttons. For more information look at Programmer's Manual.
* <p>Hint: This function will be called by the real data preview by List & Label. The IDs of the menu items in List & Label can be found in the file MENUID.TXT of your List & Label installation.</p>
*
* @author Copyright (c) combit Software GmbH
* @version 25.0
*/

public class GetViewerButtonStateCallback extends CallbackInfo
{
  /**
  * Holds the button ID.
  */
  public final int buttonID_;

  /**
   * Holds the button state defined by List & Label.
  */
  public final int buttonState_;

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
  * @param buttonState State defined by List & Label.
  */
  public GetViewerButtonStateCallback(int hLlJob, int buttonID, int buttonState)
  {
    super(hLlJob, CmbtLL25.LL_CMND_GETVIEWERBUTTONSTATE);
    buttonID_ = buttonID;
    buttonState_ = buttonState;
    lResult_ = 0;
  }

  /**
  * Sets the return value for this callback in List & Label.
  *
  * @param result Possible values are (List & Label button states):
  * <br>0 = no change (default)
  * <br>1 = enabled
  * <br>2 = disabled
  * <br>-1 = hidden
  */
  public void setCallbackResult(int result)
  {
    lResult_ = result;
  }
}
