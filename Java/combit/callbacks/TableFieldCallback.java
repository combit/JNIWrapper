
// package
package combit.callbacks;

// imports
import combit.CmbtLL26;
import java.awt.*; // important for the Rectangle in rcPaint

/**
* Description: Enables the programmer to modify the coloring of individual table fields.
* <p>Hints:
* <br><br>Activate with LlSetOption(hJob, LL_OPTION_TABLE_COLORING, LL_COLORING_PROGRAM):<br>
* In this way, the control of the coloring in tables is left to your program (the corresponding settings in the table characteristic dialog of the Designer won't appear).
* <br><br>Or activate with LlSetOption(hJob, LL_OPTION_TABLE_COLORING,LL_COLORING_DONTCARE):<br>
* With this command, List & Label lets your program draw the background first of all, then it draws the background again (if allowed) with the field pattern defined in the Designer. This allows a kind of cooperation between the programmer and the user.
* </p>
*
* @author Copyright (c) combit Software GmbH
* @version 26.0
*/

public class TableFieldCallback extends CallbackInfo
{
  /**
  * Holds the type of field. Possible values could be:<br>
  * <br>LL_TABLE_FIELD_HEADER (Field is in the header line)
  * <br>LL_TABLE_FIELD_BODY (Field is in the data line)
  * <br>LL_TABLE_FIELD_GROUP (Field is in group header line)
  * <br>LL_TABLE_FIELD_GROUPFOOTER (Field is in group footer line)
  * <br>LL_TABLE_FIELD_FILL (Field is the filling area when the table has a fixed size and there is some free space below the last data line)
  * <br>LL_TABLE_FIELD_FOOTER (Field is in the footer line)
  */
  public final int type_;

  /**
  * Holds the device context for the print and in the following callback definitions.
  */
  public final int paintDC_;

  /**
  * Holds the device context for the references.
  */
  public final int refDC_;

  /**
  * Holds the rectangle for cell distances.
  */
  public final Rectangle spacing_;

  /**
  * Holds the field index, 0-based (the first column has the index 0, the second 1, etc.).
  */
  public final int index_;

  /**
  * Holds the number of line definition to be drawn.
  */
  public final int lineDef_;
  
  /**
  * Holds the content of the currently printed field.
  */
  public final String content_;

  /**
  * Holds the rectangle in which the table field is drawn.
  */
  private Rectangle paint_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param type Type of field.<br><br>
  * @param paintDC Device context for the print and in the following callback definitions.<br><br>
  * @param refDC Device context for the references.<br><br>
  * @param paint Rectangle in which the field is to be drawn. The mapping mode is in the normal drawing units, mm/10, inch/100 or inch/1000.<br><br>
  * @param lineDef Number of line definition to be drawn.<br><br>
  * @param index Field index, 0-based (the first column has the index 0, the second 1, etc.).<br><br>
  * @param spacing Cell distances.<br><br>
  * @param content Content of the field.<br><br>
  */
  public TableFieldCallback(int hLlJob, int type, int paintDC, int refDC, Rectangle paint, int lineDef, int index, String content, Rectangle spacing)
  {
    super(hLlJob, CmbtLL26.LL_CMND_TABLEFIELD);
    type_ = type;
    paintDC_ = paintDC;
    refDC_ = refDC;
    paint_ = paint;
    spacing_ = spacing;
    index_ = index;
    lineDef_ = lineDef;
    content_ = content;
  }

  /**
  * Sets the rectangle value in which the field is drawn for this callback in List & Label.
  *
  * @param rect Rectangle in which the field is drawn.
  */
  public void setRectangle(Rectangle rect)
  {
    paint_ = rect;
  }
}
