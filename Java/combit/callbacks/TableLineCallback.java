
// package
package combit.callbacks;

// imports
import combit.CmbtLL26;
import java.awt.*; // important for the Rectangle in rcPaint

/**
* Description: Enables the programmer to modify the coloring of individual table lines, e.g. to produce your own zebra mode (every other line).
* <p>Hints:
* <br><br>Activate with LlSetOption(hJob, LL_OPTION_TABLE_COLORING, LL_COLORING_PROGRAM):<br>
* In this way the control of the coloring in tables is left to your program (the corresponding setting possibilities won't appear).
* <br><br>Or activate with LlSetOption(hJob, LL_OPTION_TABLE_COLORING,LL_COLORING_DONTCARE):<br>
* With this command, List & Label lets your program draw the background first of all, then it draws the background with the field background defined in the Designer, when required again. This allows a kind of cooperation between the programmer and the user.
* <br><br>Make sure to set the LL_CB_TABLELINE flag via LL_OPTION_CALLBACKMASK in order to receive this notification.
* <br><br>In this callback no List & Label function may be called which will produce output (LlPrint(), etc.)! See: Hints on the use of GDI-objects.
* </p>
*
* @author Copyright (c) combit Software GmbH
* @version 26.0
*/

public class TableLineCallback extends CallbackInfo
{
  /**
  * Holds the type of line. Possible values could be:<br>
  * <br>LL_TABLE_LINE_HEADER (Header line)
  * <br>LL_TABLE_LINE_BODY (Data line)
  * <br>LL_TABLE_LINE_GROUP (Group header)
  * <br>LL_TABLE_LINE_GROUPFOOTER (Group footer)
  * <br>LL_TABLE_LINE_FILL (Filling area when the table has a fixed size and there is some free space below the last data line)
  * <br>LL_TABLE_LINE_FOOTER (Footer line)
  */
  public final int type_;

  /**
  * Holds the device context for the printout.
  */
  public final int paintDC_;

  /**
  * Holds the device context for references.
  */
  public final int refDC_;

  /**
  * Holds the rectangle for cell distances.
  */
  public final Rectangle spacing_;

  /**
  * Holds the line index. Marks the 0-based line number on this page.
  */
  public final int pageLine_;

  /**
  * Holds the line index. Marks the 0-based line number of the line in the whole print.
  */
  public final int line_;

  /**
  * Holds the number of line definition to be drawn.
  */
  public final int lineDef_;

  /**
  * Holds the zebra mode in the Designer.
  */
  public final boolean zebra_;

  /**
  * Holds the rectangle in which the table line is drawn.
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
  * @param pageLine Line index. Marks the 0-based line number on this page.<br><br>
  * @param line Line index. Marks the 0-based line number of the line in the whole print.<br><br>
  * @param lineDef Number of line definition to be drawn.<br><br>
  * @param zebra true, when the user chooses zebra mode in the Designer.<br><br>
  * @param spacing Cell distances.<br><br>
  */
  public TableLineCallback(int hLlJob, int type, int paintDC, int refDC, Rectangle paint, int pageLine, int line, int lineDef, boolean zebra, Rectangle spacing)
  {
    super(hLlJob, CmbtLL26.LL_CMND_TABLELINE);
    type_ = type;
    paintDC_ = paintDC;
    refDC_ = refDC;
    paint_ = paint;
    spacing_ = spacing;
    pageLine_ = pageLine;
    line_ = line;
    lineDef_ = lineDef;
    zebra_ = zebra;
  }

  /**
  * Sets the rectangle value in which the line is drawn for this callback in List & Label.
  *
  * @param rect Rectangle in which the line is drawn.
  */
  public void setRectangle(Rectangle rect)
  {
    paint_ = rect;
  }
}
