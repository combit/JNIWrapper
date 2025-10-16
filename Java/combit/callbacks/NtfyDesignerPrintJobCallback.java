
// package
package combit.callbacks;

// imports
import combit.CmbtLL31;

/**
* Description: Via this callback List & Label informs you about the task that has to be performed. 
* This callback will always be called up in the context of the designer thread (this is the thread, from which LlDefineLayout() was called).
* 
* @author Copyright (c) combit Software GmbH
* @version 31.0
*/

public class NtfyDesignerPrintJobCallback extends CallbackInfo
{

  /**
   * Value you set LL_OPTION_DESIGNERPREVIEWPARAMETER to or assigned LL_OPTION_DESIGNEREXPORTPARAMETER to.
   */
  public final int userParam_;

  /**
   * Name of the project to print. This parameter is only valid with the command "START", otherwise NULL.
   */
  public final String projectFileName_;

  /**
   * Name of the original project. This parameter is only valid with the command "START", otherwise NULL. It is necessary, so that 
   * relative paths and the function ProjectPath$() are correctly evaluated by List & Label.
   */
  public final String originalProjectFileName_;

  /**
   * Maximum number of pages to be output. If the value is "0", this means, that the print should not be limited. 
   */
  public final int pages_;

  /**
   * Operations to be performed. There are four different operations: 
   * Start, Break, Finalize and Status query. As there are two groups of operation (EXPORT and PREVIEW), this gives 8 constants: 
   * LL_DESIGNERPRINTCALLBACK_PREVIEW_START
   * LL_DESIGNERPRINTCALLBACK_PREVIEW_ABORT
   * LL_DESIGNERPRINTCALLBACK_PREVIEW_FINALIZE
   * LL_DESIGNERPRINTCALLBACK_PREVIEW_QUEST_JOBSTATE 
   * LL_DESIGNERPRINTCALLBACK_EXPORT_START 
   * LL_DESIGNERPRINTCALLBACK_EXPORT_ABORT 
   * LL_DESIGNERPRINTCALLBACK_EXPORT_FINALIZE 
   * LL_DESIGNERPRINTCALLBACK_EXPORT_QUEST_JOBSTATE
   */
  public final int function_;

  /**
   * Window handle.
   */
  public final int hWnd_;

  /**
   * Event handle, needed for communication and synchronization of your application with List & Label.
   */
  public final int hEvent_;

  /**
   * 
   * Preselected export format (required in Ribbon mode only). 
   */
  public final String pszExportFormat_;

  /**
   * Print/export without dialog (required in Ribbon mode only).
   */
  public final boolean bWithoutDialog_;

  /**
   * Return LL_DESIGNERPRINTTHREAD_STATE_RUNNING, if your thread is working otherwise LL_DESIGNERPRINTTHREAD_STATE_STOPPED.
   */
  private int lResult_;

  /**
  * Constructs the callback object with specified information from List & Label.
  * <p>Hint: The constructor will be called by JNI.</p>
  *
  * @param hLlJob List & Label Job-Handle.<br><br>
  * @param userParam <br><br>
  * @param projectFileName <br><br>
  * @param originalProjectFileName <br><br>
  * @param pages <br><br>
  * @param function <br><br>
  * @param hWnd <br><br>
  * @param hEvent <br><br>
  * @param pszExportFormat <br><br>
  * @param bWithoutDialog <br><br>
  */
  public NtfyDesignerPrintJobCallback(int hLlJob, int userParam, String projectFileName, String originalProjectFileName,
   int pages, int function, int hWnd, int hEvent, String pszExportFormat, boolean bWithoutDialog)
  {
    super(hLlJob, CmbtLL31.LL_NTFY_DESIGNERPRINTJOB);
  	userParam_ = userParam;
  	projectFileName_ = projectFileName;
  	originalProjectFileName_ = originalProjectFileName;
  	pages_ = pages;
  	function_ = function;
  	hWnd_ = hWnd;
  	hEvent_ = hEvent;
  	pszExportFormat_ = pszExportFormat;
  	bWithoutDialog_ = bWithoutDialog;
  	lResult_ = 0;
  }

  /**
   * Sets the return value for this callback in List & Label.
   * @param result
   */
  public void setCallbackResult(int result)
  {
    lResult_ = result;
  }

}
