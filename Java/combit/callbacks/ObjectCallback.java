
// package
package combit.callbacks;

// imports
import combit.CmbtLL29;
import java.awt.*; // important for the Rectangle in rcPaint

/**
* Enables the programmer to draw something before or after List & Label into or near the object rectangle or to hide the object during printing. This function allows many modifications to objects and is the so-called "do-it-all" for object representations.
* <p>Hints:
* <br><br>In this callback no List & Label function may be called which will produce output (LlPrint(), etc.)! Functions like LlPrintGetCurrentPage() or LlPrintGetOption() are allowed. See: Hints on the use of GDI objects.
* <br><br>This function is called twice per object, once with preDraw_ = true, then with preDraw_ = false.
* <br><br>'paint_' may vary between these calls if the object size becomes smaller (text, table object) or the appearance condition does not match!
* <br><br>preDraw_ = true:<br>
* Use: you can draw an individual background or hide the object.
* <br><br>If you change 'paint_', these modifications will have consequences for the size of the object, as the object is drawn by List & Label in the given rectangle.
* <br><br>preDraw_ = false:<br>
* Use: you can draw an individual background and/or shade, as only then is the true size of the object known.
* <br><br>The rectangle 'paint_' is the correct object rectangle. If you change 'paint_' then this affects the linked objects, as the data from 'paint_' is used as object rectangle, which might influence the coordinates of spatially linked objects!
* </p>
*
* @author Copyright (c) combit Software GmbH
* @version 29.0
*/

public class ObjectCallback extends CallbackInfo
{
  /**
  * Holds the type of object. Possible values could be:<br>
  * <br>LL_OBJ_TEXT (Text)
  * <br>LL_OBJ_RECT (Rectangle)
  * <br>LL_OBJ_LINE (Line object)
  * <br>LL_OBJ_BARCODE (Barcode object)
  * <br>LL_OBJ_DRAWING (Drawing object)
  * <br>LL_OBJ_TABLE (Table)
  * <br>LL_OBJ_RTF RTF (object)
  * <br>LL_OBJ_TEMPLATE (Template bitmap)
  * <br>LL_OBJ_ELLIPSE (Ellipse/Circle)
  */
  public final int type_;

  /**
  * Holds the name of the object. Either the name given in the Designer or a text like "TABLE (<Rectangle measures>)" - the text which is printed in the status line of the Designer for this object if it is selected.
  */
  public final String name_;

  /**
  * Holds the drawing state of object.
  * <br>true: Call before List & Label draws the object.
  * <br>false: Call after List & Label has drawn the object.
  */
  public final boolean preDraw_;

  /**
  * Holds the device context for the print.
  */
  public final int paintDC_;

  /**
  * Holds the device context for references.
  */
  public final int reftDC_;

  /**
  * Holds the rectangle in which the object is drawn.
  */
  private Rectangle paint_;

  /**
  * Holds the return value for this callback in List & Label.
  */
  private int lResult_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param type Type of object.<br><br>
  * @param name Name of the object. Either the name given in the Designer or a text like "TABLE (<Rectangle measures>)" - the text which is printed in the status line of the Designer for this object if it is selected.<br><br>
  * @param preDraw true for a call before List & Label draws the object. false for a call after List & Label has drawn the object.<br><br>
  * @param paintDC Device context for the print.<br><br>
  * @param refDC Device context for references.<br><br>
  * @param paint Rectangle in which the object is drawn. The mapping mode is in the normal drawing units, mm/10, inch/100 or inch/1000.<br><br>
  */
  public ObjectCallback(int hLlJob, int type, String name, boolean preDraw, int paintDC, int refDC, Rectangle paint)
  {
    super(hLlJob, CmbtLL29.LL_CMND_OBJECT);
    type_ = type;
    name_ = name;
    preDraw_ = preDraw;
    paintDC_ = paintDC;
    reftDC_ = refDC;
    paint_ = paint;
    lResult_ = 0;
  }

  /**
  * Sets the rectangle value in which the object is drawn for this callback in List & Label.
  *
  * @param rect Rectangle in which the object is drawn.
  */
  public void setRectangle(Rectangle rect)
  {
    paint_ = rect;
  }

  /**
  * Sets the return value for this callback in List & Label.
  *
  * @param result Possible values are (pending on 'preDraw_'):
  * <br>0 = okay (default)</p>
  * <br>1 = object is not to be drawn (in this case hidden)<br><br>
  * For more information about the result value see the Programmer's Manual.
  */
  public void setCallbackResult(int result)
  {
    lResult_ = result;
  }
}
