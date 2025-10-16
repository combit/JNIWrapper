
// package
package combit.callbacks;

// imports
import combit.CmbtLL31;

/**
* Description: Asks the program for the interpretation of the contents of the designer function 'External$()' in an expression.
* <p>Hints:
* <br><br>This callback ist only called, if the designer function 'External$()' is used.
* <br><br>Important: the return fields 'newValue_' and 'errorText_' must be zero-terminated and may not exceed the maximum length (16835 characters incl. termination for the new value in 'setNewValue()', 128 characters incl. zero-termination for the error string in 'setErrorText()').
* </p>
*
* @author Copyright (c) combit Software GmbH
* @version 31.0
*/

public class EvaluateCallback extends CallbackInfo
{
  /**
  * Holds the paramater of the designer function 'External$()'.
  */
  private final String contents_;

  /**
  * Indicates, if the contents have to evaluate or only a syntax-test have to do.
  * <br>true: Contents have to be evaluated.
  * <br>false: Only a syntax-test have to be carried out.
  */
  private final boolean evaluate_;
  
  /**
  * Holds the string where the new value is stored as a zero-terminated string
  */
  private String newValue_;
  
  /**
  * Indicates, if an error occured.
  * <br>true: An error occured.
  * <br>false: No Error occured.
  */
  private boolean error_;
  
  /**
  * Holds the string where a possible error definition can be stored, which can be requested later with 'LlExprError()'. This text is also displayed to the user in the Designer during the automatic syntax-test in case of an error.
  */
  private String errorText_;  
	
  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param contents Parameter of the designer function 'External$()'.<br><br>
  * @param evaluate Indicates, if the contents have to evaluate or only a syntax-test have to do.<br><br>
  * @param newValue String where the new value is stored as a zero-terminated string<br><br>
  * @param error Indicates, if an error occured.<br><br>
  * @param errorText Holds the string where a possible error definition can be stored.<br><br>
  */
  public EvaluateCallback(int hLlJob, String contents, boolean evaluate, String newValue, boolean error, String errorText)
  {
    super(hLlJob, CmbtLL31.LL_CMND_EVALUATE);
    contents_ = contents;
	evaluate_ = evaluate;
	newValue_ = newValue;
	error_ = error;
	errorText_ = errorText;
  }

  /**
  * Gets the paramater of the designer function 'External$()'.
  */
  public String getContents()
  {
    return contents_;
  }
  
  /**
  * Tells you, if the contents have to evaluate or only a syntax-test have to do.
  */
  public boolean getEvaluate()
  {
    return evaluate_;
  }
  
  /**
  * Sets the String value for the new value for this callback in List & Label.
  *
  * @param newValue String for the new value. Hint: The String is limited to 16385 characters including null-termination!
  */
  public void setNewValue(String newValue)
  {
    newValue_ = newValue;
  }
  
  /**
  * Sets the String value for the error text for this callback in List & Label.
  *
  * @param errorText String for the error text. Hint: The String is limited to 128 characters including null-termination!
  */
  public void setErrorText(String errorText)
  {
    errorText_ = errorText;
  }
  
  /**
  * Sets the boolean value for indicating an error occurs for this callback in List & Label.
  *
  * @param error Boolean for indicating if an error occurs.
  */
  public void setError(boolean error)
  {
    error_ = error;
  }
}
