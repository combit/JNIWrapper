
// package
package combit.callbacks;

// imports
import combit.CmbtLL29;

/**
* Description: Notification that the user has saved the project in the Designer. The file name is passed.
*
* @author Copyright (c) combit Software GmbH
* @version 29.0
*/

public class SaveFileNameCallback extends CallbackInfo
{
  /**
  * Holds the file name.
  */
  public final String fileName_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param fileName Holds the file name.<br><br>
  */
  public SaveFileNameCallback(int hLlJob, String fileName)
  {
    super(hLlJob, CmbtLL29.LL_CMND_SAVEFILENAME);
    fileName_ = fileName;
  }
}
