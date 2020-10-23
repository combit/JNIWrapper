
// package
package combit.callbacks;

// imports
import combit.CmbtLL26;

/**
* Description: Notification that a menu has been selected.
*
* @author Copyright (c) combit Software GmbH
* @version 26.0
*/

public class SelectMenuCallback extends CallbackInfo
{
  /**
  * Holds the return value for this callback in List & Label.
  */
  private boolean lResult_;

  /**
  * Holds the menu ID of the menu item (negative ID if called from a toolbar button!).
  */
  public final int menuID_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param menuID Menu ID of the menu item (negative ID if called from a toolbar button!).<br><br>
  */
  public SelectMenuCallback(int hLlJob, int menuID)
  {
    super(hLlJob, CmbtLL26.LL_CMND_SELECTMENU);
    menuID_ = menuID;
    lResult_ = false;
  }

  /**
  * Sets the return value for this callback in List & Label.
  *
  * @param result true, if List & Label shall not try to execute the command associated with the menu ID (usually if the menu item has been inserted by the application) false otherwise.
  */
  public void setCallbackResult(boolean result)
  {
    lResult_ = result;
  }
}
