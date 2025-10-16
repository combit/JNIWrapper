
// package
package combit.callbacks;

// imports
import combit.CmbtLL31;
import java.util.HashMap;

/**
* Description: Allows the host application to disable menu items in List & Label. For more information see the Programmer's Manual.
*
* @author Copyright (c) combit Software GmbH
* @version 31.0
*/

public class EnableMenuCallback extends CallbackInfo
{
  /**
  * Holds the menu handle from List & Label.
  */
  private final int hMenu_;

  /**
  * Holds the menu items and their options to modify them.
  */
  private HashMap menuItems_;

  /**
  * <p>Constructs the callback object with specified information from List & Label.</p>
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param hMenu Handle to the menu in List & Label.
  */
  public EnableMenuCallback(int hLlJob, int hMenu)
  {
    super(hLlJob, CmbtLL31.LL_CMND_ENABLEMENU);
    hMenu_ = hMenu;

    // init hashmap
    menuItems_ = new HashMap<Integer, Integer>();
    menuItems_.clear();
  }

  /**
  * Collect the menu IDs and their flags which should be modified in the List & Label menu.
  *
  * @param menuID List & Label menu ID. The IDs of the menu items in List & Label can be found in the file MENUID.TXT of your List & Label installation.<br><br>
  * @param menuFlags Specifies the action to take. It can be a combination of MF_DISABLED, MF_ENABLED or MF_GRAYED, with MF_BYCOMMAND or MF_BYPOSITION. See MSDN for more details.
  */
  public void collectMenuInformation(int menuID, int menuFlags)
  {
    menuItems_.put(menuID, menuFlags);
  }

  /**
  * Clears the internal HashMap which holds the menu IDs and their flags.
  */
  public void clearMenuInformation()
  {
    menuItems_.clear();
  }
}
