
// package
package combit.callbacks;

// imports
import combit.CmbtLL28;

/**
* Description: Allows the programmer to place additional output on the page. This is useful for printing labels, for example, as in this way you can "paint" additional information onto a page (page number, printout time, "demo" text, individual watermarks etc...).
* <p>Hints:
* <br><br>In this callback no List & Label function may be called which will produce output as a result (LlPrint(), etc.)! Functions like LlPrintGetCurrentPage(), LlPrintGetOption() or LlPrintEnableObject() are allowed.
* <br><br>This function is called twice per page, once with preDraw_ = true, then with preDraw_ = false.
* <br><br>The page size can be determined by the function GetWindowExt(). Don't forget: use the 'refDC_'!
* <br><br>If you change the window origin of the 'refDC_' for preDraw_ = true with SetWindowOrg(), this affects the whole page. In this way you can define a different margin for even/odd pages. This relocation only affects the WYSIWYG viewer and printout, not the Designer preview.
* </p>
*
* @author Copyright (c) combit Software GmbH
* @version 28.0
*/

public final class PageCallback extends CallbackInfo
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
  * Holds the device context for references.
  */
  public final int refDC_;

  /**
  * Holds the device context for the print.
  */
  public final int paintDC_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param designerPreview true if the call takes place from the Designer preview and false if the call takes place during the WYSIWYG-preview or print.<br><br>
  * @param preDraw true for a call before List & Label draws the page. false for a call after List & Label has drawn the page.<br><br>
  * @param refDC Device context for references.<br><br>
  * @param paintDC Device context for the print.<br><br>
  */
  public PageCallback(int hLlJob, boolean designerPreview, boolean preDraw, int refDC, int paintDC)
  {
    super(hLlJob, CmbtLL28.LL_CMND_PAGE);
    designerPreview_ = designerPreview;
    preDraw_ = preDraw;
    refDC_ = refDC;
    paintDC_ = paintDC;
  }
}
