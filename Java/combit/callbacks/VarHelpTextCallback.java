
// package
package combit.callbacks;

// imports
import combit.CmbtLL25;

/**
* Description: Assigns a context help string for a variable or field. This string is displayed if the variable/field is selected in the expression wizard.
*
* @author Copyright (c) combit Software GmbH
* @version 25.0
*/

public class VarHelpTextCallback extends CallbackInfo
{
  /**
  * Holds the string containing the variable or fieldname description.
  */
  private String description_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param description String containing the variable or fieldname description.<br><br>
  */
  public VarHelpTextCallback(int hLlJob, String description)
  {
     super(hLlJob, CmbtLL25.LL_CMND_VARHELPTEXT);
     description_ = description;
  }

  /**
  * Gets the variable or fieldname description.
  */
  public String getDescription()
  {
    return description_;
  }

  /**
  * Sets the new variable or fieldname description for this callback in List & Label.
  *
  * @param description New variable or fieldname description.
  */
  public void setDescription(String description)
  {
    description_ = description;
  }
}
