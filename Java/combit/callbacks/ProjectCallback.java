
// package
package combit.callbacks;

// imports
import combit.CmbtLL26;
import java.awt.*; // important for the Rectangle in rcPaint

/**
* Description: Enables the programmer to place additional drawings in a label or file card project (an individual label, for example). This callback only occurs with label and file card projects. With list objects, it would be identical to LL_CMND_PAGE.
* <p>Hints:
* <br><br>In this callback no List & Label function may be called which will produce output (LlPrint(), etc.)! Functions like LlPrintGetCurrentPage(), LlPrintGetOption() or LlPrintEnableObject() are allowed. See: Hints on the use of GDI-objects.
* <br><br>This function is called twice per page, once with preDraw_ = true, then with preDraw_ = false.
* </p>
*
* @author Copyright (c) combit Software GmbH
* @version 26.0
*/

public class ProjectCallback extends CallbackInfo
{
  /**
  * Holds the preview state of page.
  * <br>true: The call takes place from the Designer preview.
  * <br>false: The call takes place during the WYSIWYG-preview or print.
  */
  public final boolean designerPreview_;

  /**
  * Holds the drawing state of page.
  * <br>true: Call before List & Label draws the page.
  * <br>false: Call after List & Label has finished the page.
  */
  public final boolean preDraw_;

  /**
  * Holds the device context for the print.
  */
  public final int paintDC_;

  /**
  * Holds the device context for references.
  */
  public final int refDC_;

  /**
  * Holds the rectangle in which the object is drawn.
  */
  private Rectangle paint_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param designerPreview true if the call takes place from the Designer preview and false if the call takes place during the WYSIWYG-preview or print.<br><br>
  * @param preDraw true for a call before List & Label draws the page. false for a call after List & Label has drawn the page.<br><br>
  * @param paintDC Device context for the print.<br><br>
  * @param refDC Device context for references.<br><br>
  * @param paint Rectangle in which the object is drawn. The mapping mode is in the normal drawing units, mm/10, inch/100 or inch/1000.<br><br>
  */
  public ProjectCallback(int hLlJob, boolean designerPreview, boolean preDraw, int paintDC, int refDC, Rectangle paint)
  {
    super(hLlJob, CmbtLL26.LL_CMND_PROJECT);
    designerPreview_ = designerPreview;
    preDraw_ = preDraw;
    paintDC_ = paintDC;
    refDC_ = refDC;
    paint_ = paint;
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
}
