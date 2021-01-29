//
// Java Declaration File
// constants and function definitions for combit List & Label 26
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 26.001
//

package combit;

import combit.x86.*;
import combit.x64.*;

public final class CmbtLL26
  {
  // language constants
  public final static int CMBTLANG_DEFAULT     = -1;
  public final static int CMBTLANG_GERMAN      = 0;
  public final static int CMBTLANG_ENGLISH     = 1;
  public final static int CMBTLANG_ARABIC      = 2;
  public final static int CMBTLANG_AFRIKAANS   = 3;
  public final static int CMBTLANG_ALBANIAN    = 4;
  public final static int CMBTLANG_BASQUE      = 5;
  public final static int CMBTLANG_BULGARIAN   = 6;
  public final static int CMBTLANG_BYELORUSSIAN= 7;
  public final static int CMBTLANG_CATALAN     = 8;
  public final static int CMBTLANG_CHINESE     = 9;
  public final static int CMBTLANG_CROATIAN    = 10;
  public final static int CMBTLANG_CZECH       = 11;
  public final static int CMBTLANG_DANISH      = 12;
  public final static int CMBTLANG_DUTCH       = 13;
  public final static int CMBTLANG_ESTONIAN    = 14;
  public final static int CMBTLANG_FAEROESE    = 15;
  public final static int CMBTLANG_FARSI       = 16;
  public final static int CMBTLANG_FINNISH     = 17;
  public final static int CMBTLANG_FRENCH      = 18;
  public final static int CMBTLANG_GREEK       = 19;
  public final static int CMBTLANG_HEBREW      = 20;
  public final static int CMBTLANG_HUNGARIAN   = 21;
  public final static int CMBTLANG_ICELANDIC   = 22;
  public final static int CMBTLANG_INDONESIAN  = 23;
  public final static int CMBTLANG_ITALIAN     = 24;
  public final static int CMBTLANG_JAPANESE    = 25;
  public final static int CMBTLANG_KOREAN      = 26;
  public final static int CMBTLANG_LATVIAN     = 27;
  public final static int CMBTLANG_LITHUANIAN  = 28;
  public final static int CMBTLANG_NORWEGIAN   = 29;
  public final static int CMBTLANG_POLISH      = 30;
  public final static int CMBTLANG_PORTUGUESE  = 31;
  public final static int CMBTLANG_ROMANIAN    = 32;
  public final static int CMBTLANG_RUSSIAN     = 33;
  public final static int CMBTLANG_SLOVAK      = 34;
  public final static int CMBTLANG_SLOVENIAN   = 35;
  public final static int CMBTLANG_SERBIAN     = 36;
  public final static int CMBTLANG_SPANISH     = 37;
  public final static int CMBTLANG_SWEDISH     = 38;
  public final static int CMBTLANG_THAI        = 39;
  public final static int CMBTLANG_TURKISH     = 40;
  public final static int CMBTLANG_UKRAINIAN   = 41;
  public final static int CMBTLANG_SERBIAN_LATIN = 42;
  public final static int CMBTLANG_CHINESE_TRADITIONAL = 48;
  public final static int CMBTLANG_PORTUGUESE_BRAZILIAN = 129;
  public final static int CMBTLANG_SPANISH_COLOMBIA = 130;
  public final static int CMBTLANG_UNSPECIFIED = 255;

  // other constant declarations
  public final static int WM_USER			   	 = 1024;
  public final static int LL_LINK_HPOS_NONE                        = 0x0000; //
  public final static int LL_LINK_HPOS_START                       = 0x0001; //
  public final static int LL_LINK_HPOS_END                         = 0x0002; //
  public final static int LL_LINK_HPOS_ABS                         = 0x0003; //
  public final static int LL_LINK_HPOS_MASK                        = 0x0007; //
  public final static int LL_LINK_VPOS_NONE                        = 0x0000; //
  public final static int LL_LINK_VPOS_START                       = 0x0010; //
  public final static int LL_LINK_VPOS_END                         = 0x0020; //
  public final static int LL_LINK_VPOS_ABS                         = 0x0030; //
  public final static int LL_LINK_VPOS_MASK                        = 0x0070; //
  public final static int LL_LINK_HSIZE_NONE                       = 0x0000; //
  public final static int LL_LINK_HSIZE_PROP                       = 0x0100; //
  public final static int LL_LINK_HSIZE_INV                        = 0x0200; //
  public final static int LL_LINK_HSIZE_MASK                       = 0x0300; //
  public final static int LL_LINK_VSIZE_NONE                       = 0x0000; //
  public final static int LL_LINK_VSIZE_PROP                       = 0x1000; //
  public final static int LL_LINK_VSIZE_INV                        = 0x2000; //
  public final static int LL_LINK_VSIZE_MASK                       = 0x3000; //
  public final static int LL_LINK_SIZEPOS_MASK                     = 0x3377; //
  public final static int LL_LINK_SIZEOFPARENT                     = 0x4000; //
  public final static int LL_DESIGNERPRINTCALLBACK_PREVIEW_START   = 1; //
  public final static int LL_DESIGNERPRINTCALLBACK_PREVIEW_ABORT   = 2; //
  public final static int LL_DESIGNERPRINTCALLBACK_PREVIEW_FINALIZE = 3; //
  public final static int LL_DESIGNERPRINTCALLBACK_PREVIEW_QUEST_JOBSTATE = 4; //
  public final static int LL_DESIGNERPRINTCALLBACK_EXPORT_START    = 5; //
  public final static int LL_DESIGNERPRINTCALLBACK_EXPORT_ABORT    = 6; //
  public final static int LL_DESIGNERPRINTCALLBACK_EXPORT_FINALIZE = 7; //
  public final static int LL_DESIGNERPRINTCALLBACK_EXPORT_QUEST_JOBSTATE = 8; //
  public final static int LL_DESIGNERPRINTTHREAD_STATE_STOPPED     = 0; //
  public final static int LL_DESIGNERPRINTTHREAD_STATE_SUSPENDED   = 1; //
  public final static int LL_DESIGNERPRINTTHREAD_STATE_RUNNING     = 2; //
  public final static int LL_INVOKEACTION_FLAG_SAVE_NO_PROJECTDESCRIPTIONCHECK = 0x0001; // in HIWORD in LlDesignerInvokeAction
  public final static int LL_DRILLDOWN_START                       = 1; //
  public final static int LL_DRILLDOWN_FINALIZE                    = 2; //
  public final static int LL_PRINTJOB_FINALIZE = 3;
  public final static int LL_JOBOPENFLAG_NOLLXPRELOAD              = 0x00001000; //
  public final static int LL_JOBOPENFLAG_ONLYEXACTLANGUAGE         = 0x00002000; // do not look for '@@' LNG file
  public final static int LL_DEBUG_CMBTLL                          = 0x0001; // debug CMBTLLnn.DLL
  public final static int LL_DEBUG_CMBTDWG                         = 0x0002; // debug CMBTDWnn.DLL
  public final static int LL_DEBUG_CMBTLL_NOCALLBACKS              = 0x0004; //
  public final static int LL_DEBUG_CMBTLL_NOSTORAGE                = 0x0008; //
  public final static int LL_DEBUG_CMBTLL_NOWAITDLG                = 0x0010; //
  public final static int LL_DEBUG_CMBTLL_NOSYSINFO                = 0x0020; //
  public final static int LL_DEBUG_CMBTLL_LOGTOFILE                = 0x0040; //
  public final static int LL_DEBUG_CMBTLS                          = 0x0080; // debug CMBTLSnn.DLL
  public final static int LL_DEBUG_PRNINFO							= 0x0100; // issue basic printer operations
  public final static int LL_DEBUG_CMBTLL_OBJECTSTATES = 0x0400; // issue object states after drawing = realdata printing only)
  public final static int LL_DEBUG_NOPRIVACYDATA = 0x0800; // suppress field contents = useful if they might contain private data)
  public final static int LL_DEBUG_FORCE_SYSINFO = 0x1000; // issue sysinfo even though it has been issued once already
  public final static int LL_DEBUG_EVAL2HOSTEXPRESSION = 0x2000; // debug Eval2HostExpr processing
  public final static int LL_DEBUG_EXTENDED_DEBWINFLAGS = 0x80000000; // internal usage
  public final static int LL_VERSION_MAJOR                         = 1; // direct return of major version = f.ex. 1)
  public final static int LL_VERSION_MINOR                         = 2; // direct return of minor version = f.ex. 13)
  public final static int LL_CMND_DRAW_USEROBJ                     = 0; // callback for LL_DRAWING_USEROBJ
  public final static int LL_CMND_EDIT_USEROBJ                     = 1; // callback for LL_DRAWING_USEROBJ_DLG
  public final static int LL_CMND_GETSIZE_USEROBJ                  = 2; //
  public final static int LL_CMND_GETSIZE_USEROBJ_SCM              = 3; //
  public final static int LL_CMND_GETSIZE_USEROBJ_PIXEL = 4; 
  public final static int LL_CMND_TABLELINE                        = 10; // callback for LL_CB_TABLELINE
  public final static int LL_TABLE_LINE_HEADER                     = 0; //
  public final static int LL_TABLE_LINE_BODY                       = 1; //
  public final static int LL_TABLE_LINE_FOOTER                     = 2; //
  public final static int LL_TABLE_LINE_FILL                       = 3; //
  public final static int LL_TABLE_LINE_GROUP                      = 4; //
  public final static int LL_TABLE_LINE_GROUPFOOTER                = 5; //
  public final static int LL_CMND_TABLEFIELD                       = 11; // callback for LL_CB_TABLEFIELD
  public final static int LL_TABLE_FIELD_HEADER                    = 0; //
  public final static int LL_TABLE_FIELD_BODY                      = 1; //
  public final static int LL_TABLE_FIELD_FOOTER                    = 2; //
  public final static int LL_TABLE_FIELD_FILL                      = 3; //
  public final static int LL_TABLE_FIELD_GROUP                     = 4; //
  public final static int LL_TABLE_FIELD_GROUPFOOTER               = 5; //
  public final static int LL_CMND_EVALUATE                         = 12; // callback for "External$" function
  public final static int LL_CMND_OBJECT                           = 20; // callback of LL_CB_OBJECT
  public final static int LL_CMND_PAGE                             = 21; // callback of LL_CB_PAGE
  public final static int LL_CMND_PROJECT                          = 22; // callback of LL_CB_PROJECT
  public final static int LL_CMND_DRAW_GROUP_BEGIN                 = 23; // callback for LlPrintBeginGroup
  public final static int LL_CMND_DRAW_GROUP_END                   = 24; // callback for LlPrintEndGroup
  public final static int LL_CMND_DRAW_GROUPLINE                   = 25; // callback for LlPrintGroupLine
  public final static int LL_RSP_GROUP_IMT                         = 0; //
  public final static int LL_RSP_GROUP_NEXTPAGE                    = 1; //
  public final static int LL_RSP_GROUP_OK                          = 2; //
  public final static int LL_RSP_GROUP_DRAWFOOTER                  = 3; //
  public final static int LL_CMND_HELP                             = 30; // lParam: HIWORD=HELP_xxx, LOWORD=Context #
  public final static int LL_CMND_ENABLEMENU                       = 31; // undoc: lParam/LOWORD(lParam) = HMENU
  public final static int LL_CMND_MODIFYMENU                       = 32; // undoc: lParam/LOWORD(lParam) = HMENU
  public final static int LL_CMND_SELECTMENU                       = 33; // undoc: lParam=ID = return TRUE if processed)
  public final static int LL_CMND_GETVIEWERBUTTONSTATE             = 34; // HIWORD(lParam)=ID, LOWORD(lParam)=state
  public final static int LL_CMND_VARHELPTEXT                      = 35; // lParam=LPSTR(Name), returns LPSTR(Helptext)
  public final static int LL_INFO_METER                            = 37; // lParam = addr(scLlMeterInfo)
  public final static int LL_METERJOB_LOAD                         = 1; //
  public final static int LL_METERJOB_SAVE                         = 2; //
  public final static int LL_METERJOB_CONSISTENCYCHECK             = 3; //
  public final static int LL_METERJOB_PASS2                        = 4; //
  public final static int LL_METERJOB_PASS3                        = 5; //
  public final static int LL_NTFY_FAILSFILTER                      = 1000; // data set fails filter expression
  public final static int LL_NTFY_VIEWERBTNCLICKED                 = 38; // user presses a preview button = action will be done). lParam=ID. result: 0=allowed, 1=not allowed
  public final static int LL_CMND_DLGEXPR_VARBTN                   = 39; // lParam: @scLlDlgExprVarExt, return: IDOK for ok
  public final static int LL_CMND_HOSTPRINTER                      = 40; // lParam: scLlPrinter
  public final static int LL_PRN_CREATE_DC                         = 1; // scLlPrinter._nCmd values
  public final static int LL_PRN_DELETE_DC                         = 2; //
  public final static int LL_PRN_SET_ORIENTATION                   = 3; //
  public final static int LL_PRN_GET_ORIENTATION                   = 4; //
  public final static int LL_PRN_EDIT                              = 5; // unused
  public final static int LL_PRN_GET_DEVICENAME                    = 6; //
  public final static int LL_PRN_GET_DRIVERNAME                    = 7; //
  public final static int LL_PRN_GET_PORTNAME                      = 8; //
  public final static int LL_PRN_RESET_DC                          = 9; //
  public final static int LL_PRN_COMPARE_PRINTER                   = 10; //
  public final static int LL_PRN_GET_PHYSPAGE                      = 11; //
  public final static int LL_PRN_SET_PHYSPAGE                      = 12; //
  public final static int LL_PRN_GET_PAPERFORMAT                   = 13; // fill _nPaperFormat
  public final static int LL_PRN_SET_PAPERFORMAT                   = 14; // _nPaperFormat, _xPaperSize, _yPaperSize
  public final static int LL_OEM_TOOLBAR_START                     = 41; //
  public final static int LL_OEM_TOOLBAR_END                       = 50; //
  public final static int LL_NTFY_EXPRERROR                        = 51; // lParam = LPCSTR(error text)
  public final static int LL_CMND_CHANGE_DCPROPERTIES_CREATE       = 52; // lParam = addr(scLlPrinter), _hDC is valid
  public final static int LL_CMND_CHANGE_DCPROPERTIES_DOC          = 53; // lParam = addr(scLlPrinter), _hDC is valid
  public final static int LL_CMND_CHANGE_DCPROPERTIES_PAGE         = 54; // lParam = addr(scLlPrinter), _hDC is valid
  public final static int LL_CMND_CHANGE_DCPROPERTIES_PREPAGE      = 56; // lParam = addr(scLlPrinter), _hDC and _pszBuffer( DEVMODE* ) are valid
  public final static int LL_CMND_MODIFY_METAFILE                  = 57; // lParam = handle of metafile = 32 bit: enh. metafile)
  public final static int LL_INFO_PRINTJOBSUPERVISION              = 58; // lParam = addr(scLlPrintJobInfo)
  public final static int LL_CMND_DELAYEDVALUE                     = 59; // lParam = addr(scLlDelayedValue)
  public final static int LL_CMND_SUPPLY_USERDATA                  = 60; // lParam = addr(scLlProjectUserData)
  public final static int LL_CMND_SAVEFILENAME                     = 61; // lParam = LPCTSTR(Filename)
  public final static int LL_QUERY_IS_VARIABLE_OR_FIELD            = 62; // lParam = addr(scLlDelayDefineFieldOrVariable), must be enabled by CB mask. If returns TRUE, the var must be defined in the callback...
  public final static int LL_NTFY_PROJECTLOADED                    = 63; // lParam = 0
  public final static int LL_QUERY_DESIGNERACTIONSTATE             = 64; //
  public final static int LL_NTFY_DESIGNERREADY                    = 65; // lParam = 0
  public final static int LL_NTFY_DESIGNERPRINTJOB                 = 66; //
  public final static int LL_NTFY_VIEWERDRILLDOWN                  = 67; //
  public final static int LL_NTFY_QUEST_DRILLDOWNDENIED            = 68; // see LS_VIEWERCONTROL_QUEST_DRILLDOWNDENIED
  public final static int LL_QUERY_DRILLDOWN_ADDITIONAL_BASETABLES_FOR_VARIABLES = 69; // lParam = scLlDDFilterInfo*
  public final static int LL_QUERY_DRILLDOWN_ADDITIONAL_TABLES = 70; // lParam = scLlDDFilterInfo*
  public final static int LL_NTFY_DRILLDOWN_DESIGNERACTION = 71; // lParam = scLlDDDesignerActionW*
  public final static int LL_NTFY_INPLACEDESIGNER_START = 72;
  public final static int LL_NTFY_INPLACEDESIGNER_END = 73;
  public final static int LL_QUERY_OWN_MENU = 74; // lParam = HMENU -> return 1 if uses own menu
  public final static int LL_CMND_UPDATE_MENU = 75;
  public final static int LL_NTFY_FRAMEHANDLE = 76; // lParam -> handle of layout window = "L&LFrame")
  public final static int LL_QUERY_DEFAULTPROJECTSTREAM = 77; // lParam -> IStream**. Return NONZERO when stream contains data
  public final static int LL_NTFY_QUEST_RP_REALDATAJOBDENIED = 78;
  public final static int LL_NTFY_QUEST_EXPANDABLEREGIONSJOBDENIED = 79;
  public final static int LL_NTFY_QUEST_INTERACTIVESORTINGJOBDENIED = 80;
  public final static int LL_QUERY_EXPR2HOSTEXPRESSION = 81; // lParam = LLEXPR2HOSTEXPR*, return 0 for FAIL, 1 for OPTIMAL, 2 for INEXACT
  public final static int LL_NTFY_REPORTPARAMETERS_COLLECTED = 82; // lParam = &scNtfyReportparametersCollected, return LL_ERR_USER_ABORTED to abort, 0x01 to get RP stream, 0x02 to get RP contents, 0 to leave processing
  public final static int LL_NTFY_EXPORTERPAGEFINISHED = 83; // lParam = &scNtfyExporterPageFinished
  public final static int LL_NTFY_HYPERLINK = 84; // lParam = &scNtfyHyperlink
  public final static int LL_NTFY_SAVEREPORTSTATEITEM = 85; // lParam = &scLLNtfyReportStateItem
  public final static int LL_NTFY_RESTOREREPORTSTATEITEM = 86; // lParam = &scLLNtfyReportStateItem
  public final static int LL_NTFY_PROGRESS = 87; // lParam -> percentage of current progress
  public final static int LL_NTFY_TRIGGEREDJOBINUITHREAD = 88; // lParam -> user data
  public final static int LL_NTFY_PLEASE_TRANSLATE = 89; // lParam=BSTR*
  public final static int LL_NTFY_PREVIEW_PRINT_START = 99; // lParam = &scViewerControlPrintData, return 1 to abort print
  public final static int LL_NTFY_PREVIEW_PRINT_PAGE = 100; // lParam = &scViewerControlPrintData, return 1 to abort loop
  public final static int LL_NTFY_PREVIEW_PRINT_END = 101; // lParam = &scViewerControlPrintData
  public final static int LL_NTFY_EMF_PAGE = 102; // lParam = &scLLNtfyEMF
  public final static int LL_QUERY_FILENAME_FOR_EXPORTJOB = 103; // lParam = VARIANT* = in: old filename, out:new filename)
  public final static int LL_QUERY_OBJECT_NOT_SUPPORTED = 104; // lParam = &scLLQueryObjectAllowed
  public final static int LL_QUERY_REPLACE_FILESYSTEMITEM = 105; // lParam = &scLLQueryFilenameReplacement -> return 1 if replaced
  public final static int LL_QUERY_HOSTIMPORT = 106; // lParam = &scLlNtfyHostImport -> return 1 if LL's internal routine is superseded
  public final static int LL_NTFY_PREVIEW_ACTIONRESULT = 107; // see LS_VIEWERCONTROL_NTFY_ACTIONRESULT - for RealDataPreview
  public final static int LL_NTFY_DATA_LOSS = 108; // lParam = LL_NTFYDATALOSS_XXX
  public final static int LL_NTFYDATALOSS_RTFDETECTION_NOT_ENOUGH_SPACE = 1;
  public final static int LL_NTFY_REPORTPARAMETERS_COLLECTION_FINISHED = 109; // lParam and result: see LL_NTFY_REPORTPARAMETERS_COLLECTED
  public final static int LL_NTFY_EXPRERROR_EX = 110; // lParam = @scLlNtfyExprErrorEx
  public final static int LL_NTFY_EXPORTERPAGECOUNT = 111; // lParam = &scLLNtfyExporterPageCount
  public final static int LL_NTFY_FIND_AND_REPLACE = 112; // lParam = &scLLNtfyFindAndReplace, returns: 0 to replace, 1 to skip, 2 to cancel search globally
  public final static int LL_NTFY_PROJECTLOAD_EX = 113; // lParam = &scLLNtfyProjectLoadEx, called before a project is loaded. SetErrortext to abort loading.
  public final static int LL_NTFY_JOBWILLCHANGE = 114; // internal
  public final static int LL_NTFY_COMBINATIONPRINTSTEP = 115; // lParam = &scLlCombinationPrintStep, return 0 on OK, error code on error
  public final static int OBJECT_LABEL                             = 1; // old - please do not use any more
  public final static int OBJECT_LIST                              = 2; //
  public final static int OBJECT_CARD                              = 3; //
  public final static int LL_PROJECT_LABEL                         = 1; // new names...
  public final static int LL_PROJECT_LIST                          = 2; //
  public final static int LL_PROJECT_CARD                          = 3; //
  public final static int LL_PROJECT_TOC                 			= 4;
  public final static int LL_PROJECT_IDX                 			= 5;
  public final static int LL_PROJECT_GTC                 			= 6;
  public final static int LL_PROJECT_LAST 							= 6;
  public final static int LL_PROJECT_MASK                          = 0x000f; //
  public final static int LL_OBJ_MARKER                            = 0; // internal use only
  public final static int LL_OBJ_TEXT                              = 1; // the following are used in the object callback
  public final static int LL_OBJ_RECT                              = 2; //
  public final static int LL_OBJ_LINE                              = 3; //
  public final static int LL_OBJ_BARCODE                           = 4; //
  public final static int LL_OBJ_DRAWING                           = 5; //
  public final static int LL_OBJ_TABLE                             = 6; //
  public final static int LL_OBJ_TEMPLATE                          = 7; //
  public final static int LL_OBJ_ELLIPSE                           = 8; //
  public final static int LL_OBJ_GROUP                             = 9; // internal use only
  public final static int LL_OBJ_RTF                               = 10; //
  public final static int LL_OBJ_LLX                               = 11; //
  public final static int LL_OBJ_INPUT                             = 12; //
  public final static int LL_OBJ_LAST                              = 12; // last object type = for loops as upper bound) - if this is changed, change the contants in object.c too!
  public final static int LL_OBJ_REPORTCONTAINER 		= 253; // for exporter
  public final static int LL_OBJ_PROJECT                           = 254; // for exporter
  public final static int LL_OBJ_PAGE                              = 255; // for exporter
  public final static int LL_DELAYEDVALUE                          = 0x80000000; //
  public final static int LL_TYPEMASK                              = 0x7ff00000; //
  public final static int LL_TABLE_FIELDTYPEMASK = 0x0000f800;// internal use
  public final static int LL_SUBTYPEMASK = 0x000003ff;
  public final static int LL_TYPEFLAGS = 0x8000f800;
  public final static int LL_HANDLESTREAM_TYPE_MASK = 0x00000400;
  public final static int LL_HANDLESTREAM_BLOB = 0x00000000; // binary data = images only)
  public final static int LL_HANDLESTREAM_UTF8 = 0x00000000; // UTF8-encoded string = non-images only)
  public final static int LL_HANDLESTREAM_UTF16 = 0x00000400; // UTF16-encoded string = non-images only)
  public final static int LL_TABLE_FOOTERFIELD                     = 0x00008000; // 'or'ed for footline-only fields // reserved also for Variables = see "$$xx$$")!!!!
  public final static int LL_TABLE_GROUPFIELD                      = 0x00004000; // 'or'ed for groupline-only fields
  public final static int LL_TABLE_HEADERFIELD                     = 0x00002000; // 'or'ed for headline-only fields
  public final static int LL_TABLE_BODYFIELD                       = 0x00001000; // 'or'ed for headline-only fields
  public final static int LL_TABLE_GROUPFOOTERFIELD                = 0x00000800; // 'or'ed for group-footer-line-only fields
  public final static int LL_BARCODE                               = 0x40000000; //
  public final static int LL_BARCODE_METHODMASK = 0x000000ff;
  public final static int LL_BARCODE_WITHTEXT = 0x00000100;
  public final static int LL_BARCODE_WITHOUTTEXT = 0x00000200;
  public final static int LL_BARCODE_TEXTDONTCARE = 0x00000000;
  public final static int LL_BARCODE_EAN13                         = 0x40000000; //
  public final static int LL_BARCODE_EAN8                          = 0x40000001; //
  public final static int LL_BARCODE_GTIN13 = 0x40000000;
  public final static int LL_BARCODE_GTIN8 = 0x40000001;
  public final static int LL_BARCODE_UPCA                          = 0x40000002; //
  public final static int LL_BARCODE_UPCE                          = 0x40000003; //
  public final static int LL_BARCODE_3OF9                          = 0x40000004; //
  public final static int LL_BARCODE_25INDUSTRIAL                  = 0x40000005; //
  public final static int LL_BARCODE_25INTERLEAVED                 = 0x40000006; //
  public final static int LL_BARCODE_25DATALOGIC                   = 0x40000007; //
  public final static int LL_BARCODE_25MATRIX                      = 0x40000008; //
  public final static int LL_BARCODE_POSTNET                       = 0x40000009; //
  public final static int LL_BARCODE_FIM                           = 0x4000000A; //
  public final static int LL_BARCODE_CODABAR                       = 0x4000000B; //
  public final static int LL_BARCODE_EAN128                        = 0x4000000C; //
  public final static int LL_BARCODE_GS1_128 						= 0x4000000C;
  public final static int LL_BARCODE_CODE128                       = 0x4000000D; //
  public final static int LL_BARCODE_DP_LEITCODE                   = 0x4000000E; //
  public final static int LL_BARCODE_DP_IDENTCODE                  = 0x4000000F; //
  public final static int LL_BARCODE_GERMAN_PARCEL                 = 0x40000010; //
  public final static int LL_BARCODE_CODE93                        = 0x40000011; //
  public final static int LL_BARCODE_MSI                           = 0x40000012; //
  public final static int LL_BARCODE_CODE11                        = 0x40000013; //
  public final static int LL_BARCODE_MSI_10_CD                     = 0x40000014; //
  public final static int LL_BARCODE_MSI_10_10                     = 0x40000015; //
  public final static int LL_BARCODE_MSI_11_10                     = 0x40000016; //
  public final static int LL_BARCODE_MSI_PLAIN                     = 0x40000017; //
  public final static int LL_BARCODE_EAN14                         = 0x40000018; //
  public final static int LL_BARCODE_GTIN14						 = 0x40000018;
  public final static int LL_BARCODE_UCC14                         = 0x40000019; //
  public final static int LL_BARCODE_CODE39                        = 0x4000001A; //
  public final static int LL_BARCODE_CODE39_CRC43                  = 0x4000001B; //
  public final static int LL_BARCODE_PZN                           = 0x4000001C; //
  public final static int LL_BARCODE_CODE39_EXT                    = 0x4000001D; //
  public final static int LL_BARCODE_JAPANESE_POSTAL               = 0x4000001E; //
  public final static int LL_BARCODE_RM4SCC                        = 0x4000001F; //
  public final static int LL_BARCODE_RM4SCC_CRC                    = 0x40000020; //
  public final static int LL_BARCODE_SSCC                          = 0x40000021; //
  public final static int LL_BARCODE_ISBN                          = 0x40000022; //
  public final static int LL_BARCODE_GS1 = 0x40000023;
  public final static int LL_BARCODE_GS1_TRUNCATED = 0x40000024;
  public final static int LL_BARCODE_GS1_STACKED = 0x40000025;
  public final static int LL_BARCODE_GS1_STACKED_OMNI = 0x40000026;
  public final static int LL_BARCODE_GS1_LIMITED = 0x40000027;
  public final static int LL_BARCODE_GS1_EXPANDED = 0x40000028;
  public final static int LL_BARCODE_INTELLIGENT_MAIL = 0x40000029;
  public final static int LL_BARCODE_PZN8 = 0x4000002A;
  public final static int LL_BARCODE_CODE128_FULL = 0x4000002B;
  public final static int LL_BARCODE_EAN128_FULL = 0x4000002C;
  public final static int LL_BARCODE_CODABLOCK_F = 0x4000002D;
  public final static int LL_BARCODE_LLXSTART                      = 0x40000040; //
  public final static int LL_BARCODE_PDF417                        = 0x40000040; //
  public final static int LL_BARCODE_MAXICODE                      = 0x40000041; //
  public final static int LL_BARCODE_MAXICODE_UPS                  = 0x40000042; //
  public final static int LL_BARCODE_DATAMATRIX                    = 0x40000044; //
  public final static int LL_BARCODE_AZTEC                         = 0x40000045; //
  public final static int LL_BARCODE_QRCODE                        = 0x40000046; //
  public final static int LL_BARCODE_DATAMATRIX_PREMIUMADRESS = 0x40000047;
  public final static int LL_BARCODE_MICROPDF417 = 0x40000048;
  public final static int LL_DRAWING                               = 0x20000000; //
  public final static int LL_DRAWING_HMETA                         = 0x20000001; //
  public final static int LL_DRAWING_USEROBJ                       = 0x20000002; //
  public final static int LL_DRAWING_USEROBJ_DLG                   = 0x20000003; //
  public final static int LL_DRAWING_HBITMAP                       = 0x20000004; //
  public final static int LL_DRAWING_HICON                         = 0x20000005; //
  public final static int LL_DRAWING_HEMETA                        = 0x20000006; //
  public final static int LL_DRAWING_HDIB                          = 0x20000007; // global handle to BITMAPINFO and bits
  public final static int LL_DRAWING_METHODMASK                    = 0x000000ff; //
  public final static int LL_META_MAXX                             = 10000; //
  public final static int LL_META_MAXY                             = 10000; //
  public final static int LL_TEXT                                  = 0x10000000; //
  public final static int LL_TEXT_ALLOW_WORDWRAP                   = 0x10000000; //
  public final static int LL_TEXT_DENY_WORDWRAP                    = 0x10000001; //
  public final static int LL_TEXT_FORCE_WORDWRAP                   = 0x10000002; //
  public final static int LL_NUMERIC                               = 0x08000000; //
  public final static int LL_NUMERIC_LOCALIZED                     = 0x08000001; //
  public final static int LL_NUMERIC_INTEGER                       = 0x08000002; // flag
  public final static int LL_DATE                                  = 0x04000000; // LL's own julian
  public final static int LL_DATE_DELPHI_1                         = 0x04000001; //
  public final static int LL_DATE_DELPHI                           = 0x04000002; // DELPHI 2, 3, 4: OLE DATE
  public final static int LL_DATE_MS                               = 0x04000002; // MS C/Basic: OLE DATE
  public final static int LL_DATE_OLE                              = 0x04000002; // generic: OLE DATE
  public final static int LL_DATE_VFOXPRO                          = 0x04000003; // nearly LL's own julian, has an offset of 1!
  public final static int LL_DATE_DMY                              = 0x04000004; // <d><sep><m><sep><yyyy>. Year MUST be 4 digits!
  public final static int LL_DATE_MDY                              = 0x04000005; // <m><sep><d><sep><yyyy>. Year MUST be 4 digits!
  public final static int LL_DATE_YMD                              = 0x04000006; // <yyyy><sep><m><sep><d>. Year MUST be 4 digits!
  public final static int LL_DATE_YYYYMMDD                         = 0x04000007; // <yyyymmdd>
  public final static int LL_DATE_LOCALIZED                        = 0x04000008; // localized = automatic VariantConversion)
  public final static int LL_DATE_JULIAN                           = 0x04000009; // variant 'date' is a julian date
  public final static int LL_DATE_CLARION                          = 0x0400000a; // days since 1800-12-28 = what's so special about that day?)
  public final static int LL_DATE_YMD_AUTO                         = 0x04000010; // wither DMY, MDY or YMD, automatically detected
  public final static int LL_DATE_METHODMASK                       = 0x000000ff; //
  public final static int LL_BOOLEAN                               = 0x02000000; //
  public final static int LL_RTF                                   = 0x01000000; //
  public final static int LL_HTML                                  = 0x00800000; //
  public final static int LL_PDF 										= 0x00400000;
  public final static int LL_INPUTOBJECT 						= 0x00200000; // internal use only
  public final static int LL_LLXOBJECT                             = 0x00100000; // internal use only
  public final static int LL_SUBTABLELIST = 0x00080000; // internal use only
  public final static int LL_RETURN_ERROR_IF_FILE_NOT_FOUND = 0x00010000;
  public final static int LL_FIXEDNAME                             = 0x8000; //
  public final static int LL_NOSAVEAS                              = 0x4000; //
  public final static int LL_DESIGNER_OVER_CHILD 			= 0x00002000;
  public final static int LL_EXPRCONVERTQUIET                      = 0x1000; // convert to new expressions without warning box
  public final static int LL_NONAMEINTITLE                         = 0x0800; // no file name appended to title
  public final static int LL_PRVOPT_PRN_USEDEFAULT                 = 0x00000000; //
  public final static int LL_PRVOPT_PRN_ASKPRINTERIFNEEDED         = 0x00000001; //
  public final static int LL_PRVOPT_PRN_ASKPRINTERALWAYS           = 0x00000002; //
  public final static int LL_PRVOPT_PRN_ALWAYSUSEDEFAULT           = 0x00000003; //
  public final static int LL_PRVOPT_PRN_ASSIGNMASK                 = 0x00000003; // used by L&L
  public final static int LL_PRVOPT_FLAG_STANDALONEVIEWER = 0x00000010;
  public final static int LL_OPTION_COPIES                         = 0; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_OPTION_STARTPAGE                      = 1; // compatibility only, please use LL_PRNOPT_PAGE
  public final static int LL_OPTION_PAGE                           = 1; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_OPTION_OFFSET                         = 2; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_OPTION_COPIES_SUPPORTED               = 3; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_OPTION_FIRSTPAGE                      = 5; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_OPTION_LASTPAGE                       = 6; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_OPTION_JOBPAGES                       = 7; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_OPTION_PRINTORDER                     = 8; // compatibility only, please use LL_PRNOPT_...
  public final static int LL_PRNOPT_COPIES                         = 0; //
  public final static int LL_COPIES_HIDE                           = -32768; // anything negative...
  public final static int LL_PRNOPT_STARTPAGE                      = 1; //
  public final static int LL_PRNOPT_PAGE                           = 1; // alias; please do not use STARTPAGE any more...
  public final static int LL_PAGE_HIDE                             = -32768; // must be exactly this value!
  public final static int LL_PRNOPT_OFFSET                         = 2; //
  public final static int LL_PRNOPT_COPIES_SUPPORTED               = 3; //
  public final static int LL_PRNOPT_UNITS                          = 4; // r/o
  public final static int LL_UNITS_MM_DIV_10                       = 0; // for LL_PRNOPT_UNITS, LL_OPTION_UNITS and LL_OPTION_UNITS_DEFAULT
  public final static int LL_UNITS_INCH_DIV_100                    = 1; //
  public final static int LL_UNITS_INCH_DIV_1000                   = 2; //
  public final static int LL_UNITS_SYSDEFAULT_LORES                = 3; // mm/10, in/100 = depending on regional settings of the system)
  public final static int LL_UNITS_SYSDEFAULT                      = 4; // mm/100, in/1000 = depending on regional settings of the system)
  public final static int LL_UNITS_MM_DIV_100                      = 5; //
  public final static int LL_UNITS_MM_DIV_1000                     = 6; //
  public final static int LL_UNITS_SYSDEFAULT_HIRES                = 7; // mm/100, in/1000 = depending on regional settings of the system)
  public final static int LL_PRNOPT_FIRSTPAGE                      = 5; //
  public final static int LL_PRNOPT_LASTPAGE                       = 6; //
  public final static int LL_PRNOPT_JOBPAGES                       = 7; //
  public final static int LL_PRNOPT_PRINTORDER                     = 8; //
  public final static int LL_PRINTORDER_HORZ_LTRB                  = 0; //
  public final static int LL_PRINTORDER_VERT_LTRB                  = 1; //
  public final static int LL_PRINTORDER_HORZ_RBLT                  = 2; //
  public final static int LL_PRINTORDER_VERT_RBLT                  = 3; //
  public final static int LL_PRNOPT_DEFPRINTERINSTALLED            = 11; // returns 0 for no default printer, 1 for default printer present
  public final static int LL_PRNOPT_PRINTDLG_DESTMASK              = 12; // any combination of the ones below... Default: all. Outdated, please use LL_OPTIONSTR_EXPORTS_ALLOWED
  public final static int LL_DESTINATION_PRN                       = 1; //
  public final static int LL_DESTINATION_PRV                       = 2; //
  public final static int LL_DESTINATION_FILE                      = 4; //
  public final static int LL_DESTINATION_EXTERN                    = 8; //
  public final static int LL_DESTINATION_MSFAX                     = 16; // reserved
  public final static int LL_PRNOPT_PRINTDLG_DEST                  = 13; // default destination; outdated, please use LL_PRNOPTSTR_EXPORT
  public final static int LL_PRNOPT_PRINTDLG_ONLYPRINTERCOPIES     = 14; // show copies option in dialog only if they are supported by the printer. default: FALSE
  public final static int LL_PRNOPT_JOBID                          = 17; //
  public final static int LL_PRNOPT_PAGEINDEX                      = 18; //
  public final static int LL_PRNOPT_USES2PASS                      = 19; // r/o
  public final static int LL_PRNOPT_PAGERANGE_USES_ABSOLUTENUMBER  = 20; // default: FALSE
  public final static int LL_PRNOPT_USEMEMORYMETAFILE              = 22; // default: false
  public final static int LL_PRNOPT_PARTIALPREVIEW                 = 23; // default: false
  public final static int LL_PRNOPT_ADDITIONALPAGES_FOR_TOTAL = 24; // internal
  public final static int LL_PRNOPT_HAS_TOTALPAGES = 25; // internal
  public final static int LL_PRNOPT_COUNT_OF_ITEMS = 26; // labels/cards
  public final static int LL_PRNOPT_IS_PREPROCESSING = 27;
  public final static int LL_PRNOPT_PRINTDLG_ALLOW_NUMBER_OF_FIRST_PAGE = 28;
  public final static int LL_PRNOPT_NEXT_INDEX = 29;
  public final static int LL_PRNOPTSTR_PRINTDST_FILENAME           = 0; // print to file: default filename = LlGet/SetPrintOptionString)
  public final static int LL_PRNOPTSTR_EXPORTDESCR                 = 1; // r/o, returns the description of the export chosen
  public final static int LL_PRNOPTSTR_EXPORT                      = 2; // sets default exporter to use / returns the name of the export chosen
  public final static int LL_PRNOPTSTR_PRINTJOBNAME                = 3; // set name to be given to StartDoc() = lpszMessage of LlPrintWithBoxStart()
  public final static int LL_PRNOPTSTR_PRESTARTDOCESCSTRING        = 4; // sent before StartDoc()
  public final static int LL_PRNOPTSTR_POSTENDDOCESCSTRING         = 5; // sent after EndDoc()
  public final static int LL_PRNOPTSTR_PRESTARTPAGEESCSTRING       = 6; // sent before StartPage()
  public final static int LL_PRNOPTSTR_POSTENDPAGEESCSTRING        = 7; // sent after EndPage()
  public final static int LL_PRNOPTSTR_PRESTARTPROJECTESCSTRING    = 8; // sent before first StartPage() of project
  public final static int LL_PRNOPTSTR_POSTENDPROJECTESCSTRING     = 9; // sent after last EndPage() of project
  public final static int LL_PRNOPTSTR_PAGERANGES                  = 10; //
  public final static int LL_PRNOPTSTR_ISSUERANGES = 11;
  public final static int LL_PRNOPTSTR_PREVIEWTITLE = 12; // default: language dependent
  public final static int LL_PRNOPTSTR_NEXT_INDEX = 13;
  public final static int LL_PRINT_V1POINTX                        = 0x00000000; //
  public final static int LL_PRINT_NORMAL                          = 0x00000100; //
  public final static int LL_PRINT_PREVIEW                         = 0x00000200; //
  public final static int LL_PRINT_STORAGE                         = 0x00000200; // same as LL_PRINT_PREVIEW
  public final static int LL_PRINT_FILE                            = 0x00000400; //
  public final static int LL_PRINT_USERSELECT                      = 0x00000800; //
  public final static int LL_PRINT_EXPORT                          = 0x00000800; // same as LL_PRINT_USERSELECT
  public final static int LL_PRINT_MODEMASK                        = 0x00000f00; //
  public final static int LL_PRINT_MULTIPLE_JOBS                   = 0x00001000; //
  public final static int LL_PRINT_KEEPJOB                         = 0x00002000; //
  public final static int LL_PRINT_IS_DOM_CALLER                   = 0x00004000; // internal
  public final static int LL_PRINT_DOM_NOCREATEDC                  = 0x00010000; // internal
  public final static int LL_PRINT_DOM_NOOBJECTLOAD = 0x00020000; // internal
  public final static int LL_PRINT_REMOVE_UNUSED_VARS              = 0x00008000; // optimization flag
  public final static int LL_BOXTYPE_BOXTYPEMASK = 0x000000ff;
  public final static int LL_BOXTYPE_NONE                          = -1; //
  public final static int LL_BOXTYPE_FLAG_ALLOWSUSPEND = 0x40000000;
  public final static int LL_BOXTYPE_FLAG_USEMARQUEE = 0x80000000;
  public final static int LL_BOXTYPE_NORMALMETER                   = 0; //
  public final static int LL_BOXTYPE_BRIDGEMETER                   = 1; //
  public final static int LL_BOXTYPE_NORMALWAIT                    = 2; //
  public final static int LL_BOXTYPE_BRIDGEWAIT                    = 3; //
  public final static int LL_BOXTYPE_EMPTYWAIT                     = 4; //
  public final static int LL_BOXTYPE_EMPTYABORT                    = 5; //
  public final static int LL_BOXTYPE_STDWAIT                       = 6; //
  public final static int LL_BOXTYPE_STDABORT                      = 7; //
  public final static int LL_BOXTYPE_MAX                           = 7; //
  public final static int LL_FILE_ALSONEW                          = 0x8000; //
  public final static int LL_SELECTFILEDLGTITLE_USE_OSFILENAME = 0x00010000;
  public final static int LL_FILE_FORCE_OS_DIALOG = 0x00020000;
  public final static int LL_FCTPARATYPE_DOUBLE                    = 0x01; //
  public final static int LL_FCTPARATYPE_DATE                      = 0x02; //
  public final static int LL_FCTPARATYPE_STRING                    = 0x04; //
  public final static int LL_FCTPARATYPE_BOOL                      = 0x08; //
  public final static int LL_FCTPARATYPE_DRAWING                   = 0x10; //
  public final static int LL_FCTPARATYPE_BARCODE                   = 0x20; //
  public final static int LL_FCTPARATYPE_ALL                       = 0x3f; //
  public final static int LL_FCTPARATYPE_PARA1                     = 0x8001; //
  public final static int LL_FCTPARATYPE_PARA2                     = 0x8002; //
  public final static int LL_FCTPARATYPE_PARA3                     = 0x8003; //
  public final static int LL_FCTPARATYPE_PARA4                     = 0x8004; //
  public final static int LL_FCTPARATYPE_SAME                      = 0x803f; //
  public final static int LL_FCTPARATYPE_MASK                      = 0x8fff; //
  public final static int LL_FCTPARATYPEFLAG_NONULLCHECK           = 0x10000; //
  public final static int LL_FCTPARATYPEFLAG_MULTIDIM_ALLOWED = 0x00020000; // internal
  public final static int LL_FCTPARATYPEFLAG_RAW = 0x00080000; // parameter passed as string without evaluation
  public final static int LL_FCTPARATYPEFLAG_RAW_WITH_SYNTAXCHECK = 0x00040000; // parameter passed as string without evaluation
  public final static int LL_FCTPARATYPEFLAG_KEEP_LINEBREAKS = 0x00100000;
  public final static int LL_FCTPARATYPEFLAG_EXECUTE_ON_SYNTAXCHECK_AT_LOADTIME = 0x00200000;
  public final static int LL_EXPRTYPE_DOUBLE                       = 1; //
  public final static int LL_EXPRTYPE_DATE                         = 2; //
  public final static int LL_EXPRTYPE_STRING                       = 3; //
  public final static int LL_EXPRTYPE_BOOL                         = 4; //
  public final static int LL_EXPRTYPE_DRAWING                      = 5; //
  public final static int LL_EXPRTYPE_BARCODE                      = 6; //
  public final static int LL_OPTION_NEWEXPRESSIONS                 = 0; // default: TRUE
  public final static int LL_OPTION_ONLYONETABLE                   = 1; // default: FALSE
  public final static int LL_OPTION_TABLE_COLORING                 = 2; // default: LL_COLORING_LL
  public final static int LL_COLORING_LL                           = 0; //
  public final static int LL_COLORING_PROGRAM                      = 1; //
  public final static int LL_COLORING_DONTCARE                     = 2; //
  public final static int LL_OPTION_SUPERVISOR                     = 3; // default: FALSE
  public final static int LL_OPTION_UNITS                          = 4; // default: see LL_OPTION_METRIC
  public final static int LL_OPTION_TABSTOPS                       = 5; // default: LL_TABS_DELETE
  public final static int LL_TABS_DELETE                           = 0; //
  public final static int LL_TABS_EXPAND                           = 1; //
  public final static int LL_OPTION_CALLBACKMASK                   = 6; // default: 0x00000000
  public final static int LL_CB_PAGE                               = 0x40000000; // callback for each page
  public final static int LL_CB_PROJECT                            = 0x20000000; // callback for each label
  public final static int LL_CB_OBJECT                             = 0x10000000; // callback for each object
  public final static int LL_CB_HELP                               = 0x08000000; // callback for HELP = F1/Button)
  public final static int LL_CB_TABLELINE                          = 0x04000000; // callback for table line
  public final static int LL_CB_TABLEFIELD                         = 0x02000000; // callback for table field
  public final static int LL_CB_QUERY_IS_VARIABLE_OR_FIELD         = 0x01000000; // callback for delayload = LL_QUERY_IS_VARIABLE_OR_FIELD)
  public final static int LL_OPTION_CALLBACKPARAMETER              = 7; // default: 0
  public final static int LL_OPTION_HELPAVAILABLE                  = 8; // default: TRUE
  public final static int LL_OPTION_SORTVARIABLES                  = 9; // default: TRUE
  public final static int LL_OPTION_SUPPORTPAGEBREAK               = 10; // default: TRUE
  public final static int LL_OPTION_SHOWPREDEFVARS                 = 11; // default: TRUE
  public final static int LL_OPTION_USEHOSTPRINTER                 = 13; // default: FALSE // use host printer via callback
  public final static int LL_OPTION_EXTENDEDEVALUATION             = 14; // allows expressions in chevrons = amwin mode)
  public final static int LL_OPTION_TABREPRESENTATIONCODE          = 15; // default: 247 = 0xf7)
  public final static int LL_OPTION_SHOWSTATE            = 16; // r/o, 
  public final static int LL_OPTION_METRIC                         = 18; // default: depends on Windows defaults
  public final static int LL_OPTION_ADDVARSTOFIELDS                = 19; // default: FALSE
  public final static int LL_OPTION_MULTIPLETABLELINES             = 20; // default: TRUE
  public final static int LL_OPTION_CONVERTCRLF                    = 21; // default: FALSE
  public final static int LL_OPTION_WIZ_FILENEW                    = 22; // default: FALSE
  public final static int LL_OPTION_RETREPRESENTATIONCODE          = 23; // default: LL_CHAR_NEWLINE = 182)
  public final static int LL_OPTION_PRVZOOM_PERC                   = 25; // initial preview zoom
  public final static int LL_OPTION_PRVRECT_LEFT                   = 26; // initial preview position
  public final static int LL_OPTION_PRVRECT_TOP                    = 27; //
  public final static int LL_OPTION_PRVRECT_WIDTH                  = 28; //
  public final static int LL_OPTION_PRVRECT_HEIGHT                 = 29; //
  public final static int LL_OPTION_STORAGESYSTEM                  = 30; // 0=LX4-compatible, 1=STORAGE
  public final static int LL_STG_COMPAT4                           = 0; //
  public final static int LL_STG_STORAGE                           = 1; //
  public final static int LL_OPTION_COMPRESSSTORAGE                = 31; // 0, 1, 10..17
  public final static int LL_STG_COMPRESS_THREADED                 = 0x00008000; //
  public final static int LL_STG_COMPRESS_UNTHREADED               = 0x00010000; //
  public final static int LL_OPTION_NOPARAMETERCHECK               = 32; // you need a bit more speed?
  public final static int LL_OPTION_NONOTABLECHECK                 = 33; // don't check on "NO_TABLEOBJECT" error. Default TRUE = don't check)
  public final static int LL_OPTION_DRAWFOOTERLINEONPRINT          = 34; // delay footerline printing to LlPrint(). Default FALSE
  public final static int LL_OPTION_PRVZOOM_LEFT                   = 35; // initial preview position in percent of screen
  public final static int LL_OPTION_PRVZOOM_TOP                    = 36; //
  public final static int LL_OPTION_PRVZOOM_WIDTH                  = 37; //
  public final static int LL_OPTION_PRVZOOM_HEIGHT                 = 38; //
  public final static int LL_OPTION_SPACEOPTIMIZATION              = 40; // default: TRUE
  public final static int LL_OPTION_REALTIME                       = 41; // default: FALSE
  public final static int LL_OPTION_AUTOMULTIPAGE                  = 42; // default: TRUE
  public final static int LL_OPTION_USEBARCODESIZES                = 43; // default: FALSE
  public final static int LL_OPTION_MAXRTFVERSION                  = 44; // default: 0xff00
  public final static int LL_OPTION_VARSCASESENSITIVE              = 46; // default: FALSE
  public final static int LL_OPTION_DELAYTABLEHEADER               = 47; // default: TRUE
  public final static int LL_OPTION_OFNDIALOG_EXPLORER             = 48; // default: Win16: FALSE, WIN32: NewShell present
  public final static int LL_OPTION_OFN_NOPLACESBAR                = 0x40000000; //
  public final static int LL_OPTION_EMFRESOLUTION                  = 49; // default: 100 for 1/100 mm
  public final static int LL_OPTION_SETCREATIONINFO                = 50; // default: TRUE
  public final static int LL_OPTION_XLATVARNAMES                   = 51; // default: TRUE
  public final static int LL_OPTION_LANGUAGE                       = 52; // returns current language = r/o)
  public final static int LL_OPTION_PHANTOMSPACEREPRESENTATIONCODE = 54; // default: LL_CHAR_PHANTOMSPACE
  public final static int LL_OPTION_LOCKNEXTCHARREPRESENTATIONCODE = 55; // default: LL_CHAR_LOCK
  public final static int LL_OPTION_EXPRSEPREPRESENTATIONCODE      = 56; // default: LL_CHAR_EXPRSEP
  public final static int LL_OPTION_DEFPRINTERINSTALLED            = 57; // r/o
  public final static int LL_OPTION_CALCSUMVARSONINVISIBLELINES    = 58; // default: FALSE - only default value if no preferences in project
  public final static int LL_OPTION_NOFOOTERPAGEWRAP               = 59; // default: FALSE - only default value if no preferences in project
  public final static int LL_OPTION_IMMEDIATELASTPAGE              = 64; // default: FALSE
  public final static int LL_OPTION_LCID                           = 65; // default: LOCALE_USER_DEFAULT
  public final static int LL_OPTION_TEXTQUOTEREPRESENTATIONCODE    = 66; // default: 1
  public final static int LL_OPTION_SCALABLEFONTSONLY              = 67; // default: TRUE
  public final static int LL_OPTION_NOTIFICATIONMESSAGEHWND        = 68; // default: NULL = parent window handle)
  public final static int LL_OPTION_DEFDEFFONT                     = 69; // default: GetStockObject(ANSI_VAR_FONT)
  public final static int LL_OPTION_CODEPAGE                       = 70; // default: CP_ACP; set codepage to use for conversions.
  public final static int LL_OPTION_FORCEFONTCHARSET               = 71; // default: FALSE; set font's charset to the codepage according to LL_OPTION_LCID. Default: FALSE
  public final static int LL_OPTION_COMPRESSRTF                    = 72; // default: TRUE; compress RTF text > 1024 bytes in project file
  public final static int LL_OPTION_ALLOW_LLX_EXPORTERS            = 74; // default: TRUE; allow ILlXExport extensions
  public final static int LL_OPTION_SUPPORTS_PRNOPTSTR_EXPORT      = 75; // default: FALSE: hides "set to default" button in "export option" tab in designer
  public final static int LL_OPTION_DEBUGFLAG                      = 76; //
  public final static int LL_OPTION_SKIPRETURNATENDOFRTF           = 77; // default: FALSE
  public final static int LL_OPTION_INTERCHARSPACING               = 78; // default: FALSE: allows character interspacing in case of block justify
  public final static int LL_OPTION_INCLUDEFONTDESCENT             = 79; // default: TRUE
  public final static int LL_OPTION_RESOLUTIONCOMPATIBLETO9X       = 80; // default: FALSE = on NT/2K, else TRUE)
  public final static int LL_OPTION_USECHARTFIELDS                 = 81; // default: FALSE
  public final static int LL_OPTION_OFNDIALOG_NOPLACESBAR          = 82; // default: FALSE; do not use "Places" bar in NT2K?
  public final static int LL_OPTION_SKETCH_COLORDEPTH              = 83; // default: 1
  public final static int LL_OPTION_FINAL_TRUE_ON_LASTPAGE         = 84; // default: FALSE: internal use
  public final static int LL_OPTION_INTERCHARSPACING_FORCED        = 86; // default: FALSE: forces character interspacing calculation in TEXT objects = possibly dangerous and slow)
  public final static int LL_OPTION_RTFAUTOINCREMENT               = 87; // default: FALSE, to increment RTF char pointer if nothing can be printed
  public final static int LL_OPTION_UNITS_DEFAULT                  = 88; // default: LL_OPTION_UNITS_SYSDEFAULT. Use for contols that query the units, where we need to return "sysdefault" also
  public final static int LL_OPTION_NO_MAPI                        = 89; // default: FALSE. Inhibit MAPI load for preview
  public final static int LL_OPTION_TOOLBARSTYLE                   = 90; // default: LL_OPTION_TOOLBARSTYLE_STANDARD|LL_OPTION_TOOLBARSTYLEFLAG_DOCKABLE
  public final static int LL_OPTION_TOOLBARSTYLE_STANDARD          = 0; // OFFICE97 alike style
  public final static int LL_OPTION_TOOLBARSTYLE_OFFICEXP          = 1; // DOTNET/OFFICE_XP alike style
  public final static int LL_OPTION_TOOLBARSTYLE_OFFICE2003        = 2; //
  public final static int LL_OPTION_TOOLBARSTYLEMASK               = 0x0f; //
  public final static int LL_OPTION_TOOLBARSTYLEFLAG_GRADIENT      = 0x80; // starting with XP, use gradient style
  public final static int LL_OPTION_TOOLBARSTYLEFLAG_DOCKABLE      = 0x40; // dockable toolbars?
  public final static int LL_OPTION_TOOLBARSTYLEFLAG_CANCLOSE      = 0x20; // internal use only
  public final static int LL_OPTION_TOOLBARSTYLEFLAG_SHRINK_TO_FIT = 0x10; // internal use only 
  public final static int LL_OPTION_MENUSTYLE                      = 91; // default: LL_OPTION_MENUSTYLE_STANDARD
  public final static int LL_OPTION_MENUSTYLE_STANDARD_WITHOUT_BITMAPS = 0; // values: see CTL
  public final static int LL_OPTION_MENUSTYLE_STANDARD             = 1; //
  public final static int LL_OPTION_MENUSTYLE_OFFICEXP             = 2; //
  public final static int LL_OPTION_MENUSTYLE_OFFICE2003           = 3; //
  public final static int LL_OPTION_RULERSTYLE                     = 92; // default: LL_OPTION_RULERSTYLE_FLAT
  public final static int LL_OPTION_RULERSTYLE_FLAT                = 0x10; //
  public final static int LL_OPTION_RULERSTYLE_GRADIENT            = 0x80; //
  public final static int LL_OPTION_STATUSBARSTYLE                 = 93; //
  public final static int LL_OPTION_STATUSBARSTYLE_STANDARD        = 0; //
  public final static int LL_OPTION_STATUSBARSTYLE_OFFICEXP        = 1; //
  public final static int LL_OPTION_STATUSBARSTYLE_OFFICE2003      = 2; //
  public final static int LL_OPTION_TABBARSTYLE                    = 94; //
  public final static int LL_OPTION_TABBARSTYLE_STANDARD           = 0; //
  public final static int LL_OPTION_TABBARSTYLE_OFFICEXP           = 1; //
  public final static int LL_OPTION_TABBARSTYLE_OFFICE2003         = 2; //
  public final static int LL_OPTION_DROPWINDOWSTYLE                = 95; //
  public final static int LL_OPTION_DROPWINDOWSTYLE_STANDARD       = 0; //
  public final static int LL_OPTION_DROPWINDOWSTYLE_OFFICEXP       = 1; //
  public final static int LL_OPTION_DROPWINDOWSTYLE_OFFICE2003     = 2; //
  public final static int LL_OPTION_DROPWINDOWSTYLEMASK            = 0x0f; //
  public final static int LL_OPTION_DROPWINDOWSTYLEFLAG_CANCLOSE   = 0x20; //
  public final static int LL_OPTION_INTERFACEWRAPPER               = 96; // returns IL<n>*
  public final static int LL_OPTION_FONTQUALITY                    = 97; // LOGFONT.lfQuality, default: DEFAULT_QUALITY
  public final static int LL_OPTION_FONTPRECISION                  = 98; // LOGFONT.lfOutPrecision, default: OUT_STRING_PRECIS
  public final static int LL_OPTION_UISTYLE                        = 99; // UI collection, w/o
  public final static int LL_OPTION_UISTYLE_STANDARD               = 0; // 90=0x40, 91=1, 92=0x10, 93=0, 94=0, 95=0x20
  public final static int LL_OPTION_UISTYLE_OFFICEXP               = 1; // 90=0x41, 91=2, 92=0x10, 93=1, 94=1, 95=0x21
  public final static int LL_OPTION_UISTYLE_OFFICE2003             = 2; // 90=0x42, 91=3, 92=0x10, 93=2, 94=2, 95=0x22
  public final static int LL_OPTION_NOFILEVERSIONUPGRADEWARNING    = 100; // default: FALSE
  public final static int LL_OPTION_UPDATE_FOOTER_ON_DATALINEBREAK_AT_FIRST_LINE = 101; // default: FALSE
  public final static int LL_OPTION_ESC_CLOSES_PREVIEW             = 102; // shall ESC close the preview window = default: FALSE)
  public final static int LL_OPTION_VIEWER_ASSUMES_TEMPFILE        = 103; // shall the viewer assume that the file is a temporary file = and not store values in it)? default TRUE
  public final static int LL_OPTION_CALC_USED_VARS                 = 104; // default: TRUE
  public final static int LL_OPTION_BOTTOMALIGNMENT_WIN9X_UNLIKE_NT = 105; // default: TRUE
  public final static int LL_OPTION_NOPRINTJOBSUPERVISION          = 106; // default: TRUE
  public final static int LL_OPTION_CALC_SUMVARS_ON_PARTIAL_LINES  = 107; // default: FALSE
  public final static int LL_OPTION_BLACKNESS_SCM                  = 108; // default: 0
  public final static int LL_OPTION_PROHIBIT_USERINTERACTION       = 109; // default: FALSE
  public final static int LL_OPTION_PERFMON_INSTALL                = 110; // w/o, TRUE to install, FALSE to uninstall
  public final static int LL_OPTION_RESERVED111                    = 111; //
  public final static int LL_OPTION_VARLISTBUCKETCOUNT             = 112; // applied to future jobs only, default 1000
  public final static int LL_OPTION_MSFAXALLOWED                   = 113; // global flag - set at start of LL! Will allow/prohibit fax detection. Default: TRUE
  public final static int LL_OPTION_AUTOPROFILINGTICKS             = 114; // global flag - set at start of LL! Activates LL's thread profiling
  public final static int LL_OPTION_PROJECTBACKUP                  = 115; // default: TRUE
  public final static int LL_OPTION_ERR_ON_FILENOTFOUND            = 116; // default: FALSE
  public final static int LL_OPTION_NOFAXVARS                      = 117; // default: FALSE
  public final static int LL_OPTION_NOMAILVARS                     = 118; // default: FALSE
  public final static int LL_OPTION_PATTERNRESCOMPATIBILITY        = 119; // default: FALSE
  public final static int LL_OPTION_NODELAYEDVALUECACHING          = 120; // default: FALSE
  public final static int LL_OPTION_FEATURE                        = 1000; //
  public final static int LL_OPTION_FEATURE_CLEARALL               = 0; //
  public final static int LL_OPTION_FEATURE_SUPPRESS_JPEG_DISPLAY  = 1; //
  public final static int LL_OPTION_FEATURE_SUPPRESS_JPEG_CREATION = 2; //
  public final static int LL_OPTION_VARLISTDISPLAY                 = 121; // default: LL_OPTION_VARLISTDISPLAY_VARSORT_DECLARATIONORDER | LL_OPTION_VARLISTDISPLAY_FOLDERPOS_DECLARATIONORDER, see also LL_OPTION_SORTVARIABLES
  public final static int LL_OPTION_VARLISTDISPLAY_VARSORT_DECLARATIONORDER = 0x0000; //
  public final static int LL_OPTION_VARLISTDISPLAY_VARSORT_ALPHA   = 0x0001; //
  public final static int LL_OPTION_VARLISTDISPLAY_VARSORT_MASK    = 0x000f; //
  public final static int LL_OPTION_VARLISTDISPLAY_FOLDERPOS_DECLARATIONORDER = 0x0000; //
  public final static int LL_OPTION_VARLISTDISPLAY_FOLDERPOS_ALPHA = 0x0010; // only if LL_OPTION_VARLISTDISPLAY_VARSORT_ALPHA is set
  public final static int LL_OPTION_VARLISTDISPLAY_FOLDERPOS_TOP   = 0x0020; //
  public final static int LL_OPTION_VARLISTDISPLAY_FOLDERPOS_BOTTOM = 0x0030; //
  public final static int LL_OPTION_VARLISTDISPLAY_FOLDERPOS_MASK  = 0x00f0; //
  public final static int LL_OPTION_VARLISTDISPLAY_LLFOLDERPOS_BOTTOM = 0x0100;
  public final static int LL_OPTION_VARLISTDISPLAY_INITSCROLLPOS_TOP = 0x0200;
  public final static int LL_OPTION_VARLISTDISPLAY_ALPHASORT_RESPECT_NUMBERS = 0x0400;
  public final static int LL_OPTION_WORKAROUND_RTFBUG_EMPTYFIRSTPAGE = 122; //
  public final static int LL_OPTION_FORMULASTRINGCOMPARISONS_CASESENSITIVE = 123; // default: TRUE
  public final static int LL_OPTION_FIELDS_IN_PROJECTPARAMETERS    = 124; // default: FALSE
  public final static int LL_OPTION_CHECKWINDOWTHREADEDNESS        = 125; // default: FALSE
  public final static int LL_OPTION_ISUSED_WILDCARD_AT_START       = 126; // default: FALSE
  public final static int LL_OPTION_ROOT_MUST_BE_MASTERTABLE       = 127; // default: FALSE
  public final static int LL_OPTION_DLLTYPE                        = 128; // r/o
  public final static int LL_OPTION_DLLTYPE_32BIT                  = 0x0001; //
  public final static int LL_OPTION_DLLTYPE_64BIT                  = 0x0002; //
  public final static int LL_OPTION_DLLTYPE_BITMASK                = 0x000f; //
  public final static int LL_OPTION_DLLTYPE_SDBCS                  = 0x0010; //
  public final static int LL_OPTION_DLLTYPE_UNICODE                = 0x0020; //
  public final static int LL_OPTION_DLLTYPE_CHARSET                = 0x00f0; //
  public final static int LL_OPTION_HLIBRARY                       = 129; // r/o
  public final static int LL_OPTION_INVERTED_PAGEORIENTATION       = 130; // default: FALSE
  public final static int LL_OPTION_ENABLE_STANDALONE_DATACOLLECTING_OBJECTS = 131; // default: FALSE
  public final static int LL_OPTION_USERVARS_ARE_CODESNIPPETS      = 132; // default: FALSE
  public final static int LL_OPTION_STORAGE_ADD_SUMMARYINFORMATION = 133; // default: FALSE
  public final static int LL_OPTION_INCREMENTAL_PREVIEW            = 135; // default: TRUE
  public final static int LL_OPTION_RELAX_AT_SHUTDOWN              = 136; // default: FALSE
  public final static int LL_OPTION_NOPRINTERPATHCHECK             = 137; // default: FALSE
  public final static int LL_OPTION_SUPPORT_HUGESTORAGEFS          = 138; // default: FALSE
  public final static int LL_OPTION_NOAUTOPROPERTYCORRECTION       = 139; // default: FALSE
  public final static int LL_OPTION_NOVARLISTRESET_ON_RESETPROJECTSTATE = 140; // default: FALSE;
  public final static int LL_OPTION_DESIGNERPREVIEWPARAMETER       = 141; // default: NULL
  public final static int LL_OPTION_RESERVED142                    = 142; //
  public final static int LL_OPTION_DESIGNEREXPORTPARAMETER        = 143; // default: NULL
  public final static int LL_OPTION_DESIGNERPRINT_SINGLETHREADED   = 144; // default: FALSE
  public final static int LL_OPTION_ALLOW_COMMENTS_IN_FORMULA      = 145; // default: TRUE = still only available in LL13 in pro/enterprise version)
  public final static int LL_OPTION_USE_MLANG_LINEBREAKALGORITHM   = 146; // default: FALSE = would use MLANG to calculate the line break algorithm)
  public final static int LL_OPTION_USE_JPEG_OPTIMIZATION          = 147; // default: TRUE
  public final static int LL_OPTION_ENABLE_IMAGESMOOTHING          = 148; // default: TRUE = uses GDIPLUS - no smoothing on Win2000/98 if not GDIPLUS installed! Right now, applies only to JPEG.)
  public final static int LL_OPTION_MAXRTFVERSION_AVAILABLE        = 159; // r/o
  public final static int LL_OPTION_CONDREPRESENTATIONCODES_LIKE_ANSI = 160; // default: FALSE
  public final static int LL_OPTION_NULL_IS_NONDESTRUCTIVE         = 161; // default: FALSE
  public final static int LL_OPTION_DRILLDOWNPARAMETER             = 162; // default: NULL
  public final static int LL_OPTION_ROUNDINGSTRATEGY               = 163; // default: LL_ROUNDINGSTRATEGY_BANKERSROUNDING
  public final static int LL_ROUNDINGSTRATEGY_BANKERSROUNDING      = 0; //
  public final static int LL_ROUNDINGSTRATEGY_ARITHMETIC_SYMMETRIC = 1; //
  public final static int LL_OPTION_RESERVED164                    = 164; //
  public final static int LL_OPTION_RESERVED165                    = 165; //
  public final static int LL_OPTION_PICTURE_TRANSPARENCY_IS_WHITE  = 166; // default: false = transparent)
  public final static int LL_OPTION_FLOATPRECISION                 = 167; // global = not job specific!). Default 0 = double)
  public final static int LL_OPTION_SUPPRESS_LRUENTRY              = 168; //
  public final static int LL_OPTION_FORCEFIRSTGROUPHEADER          = 169; // default: false = group match string is an empty string)
  public final static int LL_OPTION_SUPPORT_PDFINPUTFIELDS = 170; // PDF 3.0 supports text objects and check boxes as input objects - default: true
  public final static int LL_OPTION_ENHANCED_SKIPRETURNATENDOFRTF = 171; // default: false.
  public final static int LL_OPTION_HIERARCHICALDATASOURCE = 172; // default: false
  public final static int LL_OPTION_FORCE_HEADER_EVEN_ON_LARGE_FOOTERLINES = 173; // default: false
  public final static int LL_OPTION_PRINTERDEVICEOPTIMIZATION = 174; // default: true
  public final static int LL_OPTION_RTFHEIGHTSCALINGPERCENTAGE = 175; // default: 100
  public final static int LL_OPTION_FORCE_DEFAULT_PRINTER_IN_PREVIEW = 176; // default: false
  public final static int LL_OPTION_SAVE_PROJECT_IN_UTF8 = 178; // BOOL, default 0 = meaning: project is saved as UNICODE if A API is not used)
  public final static int LL_DRILLDOWNFILTERSTRATEGY_ALLOW_ONLY_SUBTABLES = 0;
  public final static int LL_DRILLDOWNFILTERSTRATEGY_ALLOW_ALL_TABLES = 1;
  public final static int LL_DRILLDOWNFILTERSTRATEGY_ALLOW_SUBTABLES_AND_UNRELATED = 2;
  public final static int LL_DRILLDOWNFILTERSTRATEGY_ALLOW_SUBTABLES_AND_USERDEFINED = 3;
  public final static int LL_DRILLDOWNFILTERSTRATEGY_MASK = 0x0f;
  public final static int LL_DRILLDOWNFILTERFLAG_OFFER_BASERECORD_AS_VARIABLES = 0x10;
  public final static int LL_OPTION_DRILLDOWN_DATABASEFILTERING = 179; // default: 0 = filter all except subtables of the base table: LL_DRILLDOWNFILTERSTRATEGY_ALLOW_ONLY_SUBTABLES)
  public final static int LL_OPTION_SUPPRESS_TASKBARBUTTON_PROGRESSSTATE = 180; // default: false
  public final static int LL_OPTION_PRINTDLG_DEVICECHANGE_KEEPS_DEVMODESETTINGS = 181; // default: true
  public final static int LL_OPTION_DRILLDOWN_SUPPORTS_EMBEDDING = 182; // default: true
  public final static int LL_VARLISTCLEARSTRATEGY_EMPTY_LIST = 0;
  public final static int LL_VARLISTCLEARSTRATEGY_SET_NULL = 1;
  public final static int LL_VARLISTCLEARSTRATEGY_SET_DEFAULT = 2;
  public final static int LL_OPTION_VARLISTCLEARSTRATEGY_ON_DEFINE_START = 183; // default: LL_VARLISTCLEARSTRATEGY_EMPTY_LIST
  public final static int LL_OPTION_RESERVED184 = 184;
  public final static int LL_OPTION_KEEP_EMPTY_SUM_VARS = 185; // default: false
  public final static int LL_OPTION_RESERVED187 = 187; // internal test flag
  public final static int LL_OPTION_DEFAULTDECSFORSTR = 188; // default: 5. Sets the default number of decimals for Str$
  public final static int LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_PRINTJOB = 189; // default: false
  public final static int LL_OPTION_DEFINEXXXSTART_COMPATIBLE_TO_PRE15 = 190;
  public final static int LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_DC = 191; // default: true
  public final static int LL_OPTION_BITMAP_RESOLUTION_FOR_PREVIEW = 192; // default: 0 = leave original size), suggestions are 300 or 600. -1 to use device default.
  public final static int LL_OPTION_DRAW_EMPTY_CHARTOBJECTS = 193; // default: false
  public final static int LL_OPTION_PREVIOUS_DEFAULTS_TO_NULL = 194; // default: false = for compatibility). Previous() returns NULL on first record if TRUE, otherwise some default value for the given datatype.
  public final static int LL_OPTION_FORCE_IMAGEEMBEDDING = 195; // default: false. Images added via the image dialog are always embedded.
  public final static int LL_OPTION_VARKEY_MAP_SHARP_S_TO_SS = 196; // default: false
  public final static int LL_OPTION_NO_LAYERED_WINDOWS = 197; // default: false
  public final static int LL_OPTION_SCALED_PERCENTAGEFORMATTER = 198; // default: false = 0.1="0.1%", true: 0.1="10%")
  public final static int LL_OPTION_USE_ANTIALIAS = 199; // default: true
  public final static int LL_OPTION_FORCETABLELINECALLBACK = 200; // LL_CMND_TABLE_LINE is called even when COLORINGMODE_LL ist set, default: false
  public final static int LL_OPTION_EXPORTCONSUMER = 201; // internal use only
  public final static int LL_OPTION_TOC_IDX_ITEMID = 202; // internal use only
  public final static int LL_OPTION_FORCED2PASSMODE = 203; // default: false
  public final static int LL_OPTION_SETVAR_ONLY_SETS_IF_CONTAINER_PRINTS = 204; // default: false
  public final static int LL_OPTION_SHOW_PREVIEW_AFTER_PRINT_END = 206; // "Export-ShowResult" sets this for PRV...
  public final static int LL_OPTION_PROPLIST_COMBOBOX_SCROLL_WRAPS = 207; // default: FALSE
  public final static int LL_OPTION_ALWAYS_CALC_GROUPCHANGE_CONDITION = 208; // default: false
  public final static int LL_OPTION_NULLHANDLING_SUPPORTED_IN_ENHMODE = 209; // default: false 
  public final static int LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_PREVIEWJOB = 210; // default: true
  public final static int LL_OPTION_USE_LEGACY_WORDWRAPPINGALGORITHM = 211; // default: false
  public final static int LL_OPTION_PREVIEW_USES_PRINTTHREAD = 212; // default: true
  public final static int LL_OPTION_LL_SUPPLIES_MESSAGELOOP_WHILE_PRINTING_TO_PREVIEW = 213; // default: true
  public final static int LL_OPTION_PRINTERDCCACHE_TIMEOUT_SEC = 214; // default: 60 = 0 -> no cache)
  public final static int LL_OPTION_DESIGNER_RIBBONBACKGROUNDCOLOR = 215; // default: undefined = system default)
  public final static int LL_OPTION_INTERNAL_EMFCLEANUP = 216; // no comment -> internal!
  public final static int LL_OPTION_RIBBON_DEFAULT_ENABLEDSTATE = 217; // default: true
  public final static int LL_OPTION_PRVFILEVERSION = 218; // default: 0 = 2 would be an optimized version, supported since LL18, usually a bit faster if printing > 5000 pages)
  public final static int LL_OPTION_TRY_REDUCE_BMPSIZE_BY_CONVERTING_TO_PNG_OR_JPEG = 219; // default: false
  public final static int LL_OPTION_NO_IMAGEFILEOPTIMIZATION = 220; // default: false. Set this to TRUE if you know you're replacing an image file during printing that is used in a project using its file name
  public final static int LL_OPTION_NO_ENFORCED_GROUPFOOTERPRIORITY_FOR_LAST_GROUPFOOTER = 221; // default: false. Compatibility to LL 16.008.
  public final static int LL_OPTION_ALLOW_COMBINED_COLLECTING_OF_DATA_FOR_COLLECTIONCONTROLS = 222; // default: true
  public final static int LL_OPTION_SUPPRESS_LOADERRORMESSAGES = 223; // default: false. Please take care that this is a reference counted flag, so add = true) and subtract = false) the same number of calls! [ChK]
  public final static int LL_OPTION_IGNOREFORMULARESULTMISMATCH_AT_LOADTIME = 224; // default: false. Switches the r8117 = err #3535) change back to the old behavior
  public final static int LL_OPTION_MAX_SIZE_OF_PROJECTINFOCACHE = 225; // default: 1000
  public final static int LL_OPTION_NO_CORRECTION_OF_UNICODE_RTF = 226; // default: false
  public final static int LL_OPTION_MAY_RELEASE_UNNECESSARY_PROPS_AT_PRINTTIME = 227; // default: false
  public final static int LL_OPTION_DO_NOT_RESTORE_PREVSTATE_ON_FILTER_MISMATCH = 228; // default: false = LL17: implicitly TRUE until 17.006)
  public final static int LL_OPTION_SUPPORT_USERDEFINED_REPORTPAGELAYOUT = 229; // default: false
  public final static int LL_OPTION_DESIGNER_RIBBONTEXTCOLOR = 230; // default: undefined = system default)
  public final static int LL_PARTSHARINGFLAG_VARIABLES_TOC = 0x01;
  public final static int LL_PARTSHARINGFLAG_VARIABLES_IDX = 0x02;
  public final static int LL_PARTSHARINGFLAG_VARIABLES_GTC = 0x04;
  public final static int LL_OPTION_PARTSHARINGFLAGS = 231; // default: 0xff
  public final static int LL_OPTION_PIECHARTORDER_COMPATIBLE_TO_PRE19 = 232; // default: 1 = LL18), 0 = >= LL19)
  public final static int LL_OPTION_DATABASESTRUCTURE_SORT_DECLARATIONORDER = 233; // default: false = sorted alphabetically)
  public final static int LL_OPTION_REPORT_PARAMETERS_REALDATAJOBPARAMETER = 234; // default: NULL
  public final static int LL_OPTION_EXPANDABLE_REGIONS_REALDATAJOBPARAMETER = 235; // default: NULL
  public final static int LL_OPTION_IMPROVED_TABLELINEANCHORING = 236; // default: FALSE
  public final static int LL_OPTION_INTERACTIVESORTING_REALDATAJOBPARAMETER = 237; // default: NULL
  public final static int LL_OPTION_TEMPFILESTRATEGY = 238; // default: LL_TEMPFILESTRATEGY_SPEED
  public final static int LL_TEMPFILESTRATEGY_SPEED = 0;
  public final static int LL_TEMPFILESTRATEGY_SIZE = 1;
  public final static int LL_TEMPFILESTRATEGY_SECURITY = 2;
  public final static int LL_OPTION_RTF_WHITE_BACKGROUND_IS_TRANSPARENT = 239; // default: TRUE = !)
  public final static int LL_OPTION_NO_DOTTED_LINE_ON_SECONDARY_AXIS = 240; // default: FALSE
  public final static int LL_OPTION_NO_PREVIOUS_VARLIST = 241;
  public final static int LL_OPTION_COMMIT_FILE_ON_SAVE = 242; // default: false
  public final static int LL_OPTION_DO_NOT_RTRIM_CELLTEXT = 243; // default: false
  public final static int LL_OPTION_ALLOW_FCT_TEXTWIDTH = 244; // default: false
  public final static int LL_OPTION_PASTEOBJECTS_TO_FIRST_VISIBLE_LAYER = 245; // default: false
  public final static int LL_OPTION_EMPTY_FILE_TRIGGERS_PROJECT_WIZARD = 246; // default: false
  public final static int LL_OPTION_DELAY_UPDATE_REMAININGTABLESPACE = 247; // default: false 
  public final static int LL_OPTION_WIZARD_ADDS_ORGNAME_TO_UI = 248; // default: false
  public final static int LL_OPTION_PROHIBIT_EXTERNAL_FILES = 249; // default: false
  public final static int LL_OPTION_DRAWINGS_INLINED     = 250; // default: 0 = 1 = inlined, 2 = leave as is, but no BLOBs - for GTC)
  public final static int LL_OPTION_SERIALIZE_PRINTAPI   = 251; // default: false
  public final static int LL_OPTION_PROJECTFILELOCKTIMEOUT_IN_MS = 252; // default: 10000
  public final static int LL_OPTION_ILLDATAPROVIDER      = 253;
  public final static int LL_OPTION_RTF_SUPPORTS_PARABREAKOPTIONS = 254; // default: false
  public final static int LL_OPTION_FORCE_PDFEMBEDDING   = 255; // default: false. PDF documents added via the pdf dialog are always embedded
  public final static int LL_OPTION_IGNORE_NONSCALEABLEFONTPROPERTIES = 256; // default: false. PDF documents added via the pdf dialog are always embedded
  public final static int LL_DATAPROVIDERTHREADNESS_NONE = 0;
  public final static int LL_DATAPROVIDERTHREADNESS_ONE_INSTANCE_PER_THREAD = 1;
  public final static int LL_DATAPROVIDERTHREADNESS_DONTCARE = 2; // default 
  public final static int LL_OPTION_DATAPROVIDER_THREADEDNESS = 257;
  public final static int LL_OPTION_SUBREPORT_BASE       = 258;
  public final static int LL_OPTION_SUBREPORT_CLIENT     = 259;
  public final static int LL_OPTION_NO_IPICTURE_SUPPORT  = 260; // default: false
  public final static int LL_OPTION_FORCE_JPEG_RECOMPRESSION = 261; // default: false
  public final static int LL_OPTION_TEXTWRAP_TOLERANCE_PERC = 262; // default: 0 = no tolerance)
  public final static int LL_OPTION_NO_USERVARCHECK_ON_LOAD = 263; // default: false
  public final static int LL_OPTION_TOC_IDX_PAGE         = 264; // internal use only
  public final static int LL_OPTION_RTF_TAB_KEY_IS_TAB_FORMATTER = 265; // default: false
  public final static int LL_OPTION_VARLISTDISPLAY_LL_FOLDER_AT_END = 266; // default: false
  public final static int LL_OPTION_DOM_DO_NOT_KILL_EMPTY_TABLE = 267; // default: false
  public final static int LL_OPTION_ENABLE_INPUTOBJECTS_IN_TABLES = 268; // default: true
  public final static int LL_OPTION_MAX_ENTRIES_FOR_AUTOCOMPLETE = 269; // default: 200
  public final static int LL_OPTION_DEFAULT_FOR_SHADOWPAGEWRAP = 270; // default: true
  public final static int LL_OPTION_MAX_UNDO_STEPS       = 271; // default: 10
  public final static int LL_OPTION_HTML_USE_MAILFORMAT  = 272; // default: false
  public final static int LL_OPTION_CLIP_LABELS_TO_PROJECTAREA = 273; // default: false = may paint beyond the border not to lose any data)
  public final static int LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_EXPORTJOB = 274;
  public final static int LL_OPTION_SCRIPTENGINE_ENABLED = 276; // default: false
  public final static int LL_OPTION_SCRIPTENGINE_TIMEOUTMS = 277; // default: 10000
  public final static int LL_OPTION_SCRIPTENGINE_AUTOEXECUTE = 278; // default: false
  public final static int LL_OPTION_SHAPEFILE_TIMEOUTMS  = 279; // default: 1000 
  public final static int LL_OPTION_COUNTALLPRINTEDDATA_LASTPRINT = 280; // r/o
  public final static int LL_OPTION_SAVE_AS_ACTS_AS_EXPORT = 281; // default: false
  public final static int LL_OPTION_RESETPROJECTSTATE_TRIGGERS_NEW_SHEET = 282; // default: true
  public final static int LL_OPTION_HIDE_EXPORT_TAB_FROM_LAYOUT_CONFIG = 283; // default: false
  public final static int LL_OPTION_USE_VARLIST_NAMESORTINDEXCACHE = 284; // should be defined for job -1
  public final static int LL_OPTION_NOCONTRASTOPTIMIZATION = 285; // default: false
  public final static int LL_OPTION_AUTORECOVERY_DISABLED = 286; // default: false
  public final static int LL_OPTION_AUTORECOVERY_SAVEOPTIONS = 287; // default: LL_AUTORECOVERY_SAVEOPTIONS_NEWFILE = value might be combination of following)
  public final static int LL_AUTORECOVERY_SAVEOPTIONS_NEWFILE = 1;
  public final static int LL_AUTORECOVERY_SAVEOPTIONS_OVERWRITE = 2;
  public final static int LL_OPTION_LINK_PRINTERQUEUES   = 288; // default: false, does not work yet
  public final static int LL_OPTION_FORCE_RTFMERGING     = 289; // default: false, forces to merge RTF contents even if there is just one part to load, compatibility switch
  public final static int LL_OPTION_W201512300001        = 290; // do not check on empty bodylines for "ActivateNextLine" - sort of "I know what I am doing in my print loop"
  public final static int LL_OPTION_CALCLINEHEIGHT_COMPATIBLE_TO_19 = 291; // LL19 had a wrong line height calculation, force compatible mode. Default: false.
  public final static int LL_OPTION_FORCE_UNIQUE_PARAMETERUISTRING = 292; // Report parameter UI strings will be forced as unique. Default: false.
  public final static int LL_OPTION_AUTOMATICFOOTER      = 293; // Creates automatically footer-line in table-line wizard. Default: true.
  public final static int LL_OPTION_SUPPORT_PREDEFINED_COLORS = 294; // default: for design/print job: always true. Otherwise false.
  public final static int LL_OPTION_FAVORITE_SETTINGS    = 295; // default: display button and use registry settings
  public final static int LL_FAVORITES_ENABLE_FAVORITES_BY_DEFAULT = 0x0001;
  public final static int LL_FAVORITES_HIDE_FAVORITES_BUTTON = 0x0002;
  public final static int LL_OPTION_NEWMODE_EXPRSTARTREPRESENTATIONCODE = 296; // default: 0xab
  public final static int LL_OPTION_NEWMODE_EXPRENDREPRESENTATIONCODE = 297; // default: 0xbb
  public final static int LL_OPTION_RESERVED_298         = 298; // outdated, not used any more
  public final static int LL_OPTION_ILLREPOSITORY        = 299; // host repository
  public final static int LL_OPTION_VARLISTLOOKUP_ALLOWS_GLOBALNAME = 300; // default: 0
  public final static int LL_OPTION_FORCESAVEDESIGNSCHEME = 301; // default: false
  public final static int LL_OPTION_REPOSITORY_SINGLEPROJECTMODE = 302; // default: false
  public final static int LL_OPTION_ANIMATIONS_DISABLED  = 303; // default: 0
  public final static int LL_OPTION_ANIMATIONS_DISABLED_DISABLEALL = 0x01;
  public final static int LL_OPTION_ANIMATIONS_DISABLED_HIDE_STD = 0x02;
  public final static int LL_OPTION_ANIMATIONS_DISABLED_HIDE_HTML = 0x04; //   
  public final static int LL_OPTION_UPDATE_INTERACTIONINFO_PER_PAGE = 304; // default: false. "true" means some overhead per page
  public final static int LL_OPTION_IS_REPORTSERVERDESIGNER = 305; // internal
  public final static int LL_OPTION_IMPROVED_FRAMEDRAWING = 306; // default: false
  public final static int LL_OPTION_POSTPAINT_TABLESEPARATORS = 307; // default: true
  public final static int LL_OPTION_CROSSTAB_USE_CELLVALUE_INSTEAD_OF_DISPLAYVALUE = 308; // default: false;
  public final static int LL_OPTION_SUPPORT_DELAYEDFIELDDEFINITION = 309; // default: false
  public final static int LL_OPTION_SUPPRESS_REALDATAPREVIEW_IN_DESIGNER = 310; // default: false
  public final static int LL_OPTION_MAX_RTFCONTROLS_IN_CACHE = 311; // default: 50
  public final static int LL_OPTION_RDPEXPORT_CREATEMPFILEUNTILSAVEDONCE = 312; // internal
  public final static int LL_OPTION_CRC32_ONLY_FOR_RTFDATA_ABOVE = 313; // limit of RTF stream size = in KB) up to which RTF text and BLOBs are compared using MD5 - above, it's CRC32 only. Default: 100 KB
  public final static int LL_OPTION_PRINTER_FILE_SUPERSEDES_EXPORT_OPTIONS = 314; // settings in printer file supersede explicit export options
  public final static int LL_OPTION_TRANSLATIONFLAGS     = 315; // default: both directions. Right now, only the omittance of _SAVE works.
  public final static int LL_TRANSLATION_LOAD            = 0x01;
  public final static int LL_TRANSLATION_SAVE            = 0x02;
  public final static int LL_OPTION_PREVIEW_SCALES_RELATIVE_TO_PHYSICAL_SIZE = 316; // needs >= Windows 8.1. Stored in preview file to modify behaviour in viewer
  public final static int LL_PREVIEW_SCALE_PHYSICAL_DESIGNERPREVIEW = 0x01;
  public final static int LL_PREVIEW_SCALE_PHYSICAL_PREVIEW = 0x02;
  public final static int LL_OPTION_NODEFAULTFONTOVERRIDE = 317; // default: false
  public final static int LL_OPTION_TREEVIEWFILTER_VISIBILITYFLAGS = 318; // default: LL_TREEVIEWFILTER_IN_ALL_TREES
  public final static int LL_TREEVIEWFILTER_IN_VARTREE   = 0x0001;
  public final static int LL_TREEVIEWFILTER_IN_FCTWIZARD_VARTREE = 0x0002;
  public final static int LL_TREEVIEWFILTER_IN_ALL_TREES = 0xffff;
  public final static int LL_OPTION_COMPAT_ALLOW_INVALID_CHARS_IN_SINGLEFIELDFORMULA = 319; // default: FALSE
  public final static int LL_OPTION_TREEVIEWFILTER_MAXIMUM_RECURSION_SEARCH_DEPTH = 320; // default: 10
  public final static int LL_OPTION_USER_ABORT_CANCELS_POSTPRINTPROCESSING = 321; // default: false
  public final static int LL_OPTION_NOTOCRESET_ON_RESETPROJECTSTATE = 322; // default: false
  public final static int LL_OPTION_NOIDXRESET_ON_RESETPROJECTSTATE = 323; // default: false
  public final static int LL_OPTION_SUPPRESS_FORMULASUBITEMS_IN_VARTREE = 324; // default: false
  public final static int LL_OPTION_TEMPLATE_OVERRIDES_USER_DESIGNSCHEME = 325; // default: true
  public final static int LL_OPTION_ALLOW_ASSUMPTION_PRINTERS_CAN_PRINT_MULTIPLE_JOBS_IN_ONE_HDC = 326; // default: true
  public final static int LL_OPTION_PERSISTENT_PRINTER_USE_FOR_OUTPUT = 327; // default: false
  public final static int LL_OPTION_GET_CURRENT_PROJECTTYPE = 328; // R/O
  public final static int LL_OPTION_DELAY_CALC_OF_USED_VARS = 329; // default: false
  public final static int LL_OPTION_USE_FONT_SIZE_AS_MAXIMUM_SIZE_FOR_TEXTFITTING = 330; // default: false
  public final static int LL_OPTION_CLIP_FIELDS_EXCEEDING_TABLE_WIDTH = 331; // default: 0
  public final static int LL_CLIP_FIELDS_VISUALLY        = 1;
  public final static int LL_CLIP_FIELDS_FIT_AT_LOAD_TIME = 2;
  public final static int LL_CLIP_FIELDS_FIT_AT_LOAD_TIME_PRINTING_ONLY = 3;
  public final static int LL_CLIP_FIELDS_FIT_COMPAT      = 4;
  public final static int LL_CLIP_FIELDS_METHOD_MASK     = 0x0f;
  public final static int LL_CLIP_FIELDS_FLAG_IGNORE_APPEARANCE_CONDITION = 0x10;
  public final static int LL_CLIP_FIELDS_FLAG_INCLUDE_NONCONST_WIDTH = 0x20;
  public final static int LL_OPTION_COMPAT_ALLOW_FIELDS_IN_PROJECT_FILTER = 332; // default: false
  public final static int LL_OPTION_SUPPRESS_CELLCLIPPING_TO_REPORTCONTAINER = 333; // default: false
  public final static int LL_OPTION_RSCRIPT_MULTIJOBEXECUTION = 334; // default: 0
  public final static int LL_OPTION_RETRIES_FOR_STARTDOC = 335; // INT, default: 1
  public final static int LL_OPTION_PRN_FORCE_PROJECTSIZE_AS_PAPERSIZE = 336; // default: 0 = 1: if "ForcePaperFormat"=TRUE, do not iterate available paper formats and look up a matching one, just put the selected size in the DEVMODE structure and hope for the printer to accept it. 3: )
  public final static int LL_OPTION_IS_PRINTING          = 337; // r/o, returns if there's an active print job for the current job
  public final static int LL_OPTION_IDLEITERATIONCHECK_MAX_ITERATIONS = 338; // 0 = no check. default: 0
  public final static int LL_REPOSITORYTHREADNESS_NONE   = 0;
  public final static int LL_REPOSITORYTHREADNESS_DONTCARE = 1; // default 
  public final static int LL_REPOSITORYTHREADNESS_QUERY  = 2;
  public final static int LL_OPTION_REPOSITORY_THREADEDNESS = 339;
  public final static int LL_OPTION_ALLOW_EMPTY_STRING_IN_XLAT = 340; // default: false
  public final static int LL_OPTION_GTC_LASTPOSITION_CONSIDER_INDEX = 341; // default: false
  public final static int LL_OPTION_DESIGNERACTIONMESSAGE = 342; // r/o - joba handle can be any value, this is global
  public final static int LL_DESIGNERACTION_REFRESH_VARTREE = 1;
  public final static int LL_OPTION_DESIGNERFRAME_HWND   = 343; // r/o
  public final static int LL_OPTION_MULTISECTIONPRINT_MERGE = 344; // r/o
  public final static int LL_OPTION_COMPAT_ALLOW_FIELDS_IN_STATIC_TABLE = 345; // default: FALSE
  public final static int LL_OPTION_COMPAT_GROUPHEADER_SAME_PAGE_LOCAL_ONLY = 346; // default: false = must be set to true to behave as LL24)
  public final static int LL_OPTION_RESERVED_348         = 348; // see #37979
  public final static int LL_OPTION_COMPAT_PROHIBITFILTERRELATIONS = 349; // default: FALSE
  public final static int LL_OPTION_ONLY_SHOW_EXISTING_PAPERSIZES_FOR_PRINTER = 350; // default: false... do not add system defined papers to the ist of the printer's paper sizes unless the driver does not return any
  public final static int LL_OPTION_DEFAULT_DECIMALS     = 351; // default: settings from registry/2. ATTENTION: global option
  public final static int LL_OPTION_ILLPREPRINTTEXTPROCESSOR = 353; // ILLPrePrintTextProcessor
  public final static int LL_OPTION_USERVAR_TRACKTEMPLATEOVERRIDE = 354; // default: false
  public final static int LL_OPTION_PROJECTVAR_IGNOREEMPTY = 355; // default: false
  public final static int LL_OPTION_SUPPRESS_FUNCTION_POPUP = 356; // default: false
  public final static int LL_OPTION_SUPPRESS_SYMBOLFONTMAPPING = 357; // default: false - attn: global option!
  public final static int LL_OPTION_COMPAT_ENABLE_FORCEWRAP_ON_EXPORT = 358; // default: false
  public final static int LL_OPTION_SORTINDEX_LCMAP_INITFLAGVALUE = 359; // default: 0x1400
  public final static int LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE = 360; // default: 0
  public final static int LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE_NEUTRAL = 0; // default 
  public final static int LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE_OPEN = 1;
  public final static int LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE_CLOSE = 2;
  public final static int LL_OPTION_COMPAT_NULL_IN_COND_ARG1_YIELDS_NULL = 361; // default: false
  public final static int LL_OPTION_SUPPRESSCROSSTHREADEDWARNING = 362; // default: 0
  public final static int LL_OPTION_ALLOWSUBREPORTS      = 363; // default: 1
  public final static int LL_OPTION_INTERNALRELOADOPERATION = 364; // default: 0
  public final static int LL_INTERNALRELOADOPERATION_NEUTRAL = 0; // default 
  public final static int LL_INTERNALRELOADOPERATION_LOAD = 1;
  public final static int LL_INTERNALRELOADOPERATION_ERRORLIST = 2;
  public final static int LL_OPTION_COMPAT_BODYLINE_CELL_MAY_WRAP_EMPTY_ON_FIRST_PRINT = 365; // default: false
  public final static int LL_OPTION_RTFEDITOR_SUPPRESS_KEYBOARDAUTOSWITCH = 366; // default: false
  public final static int LL_OPTION_BUILDTREERECURSEOPTIONS = 367; // default: 32 threshold for active stacksize based formula evaluation recursion detection
  public final static int LL_OPTION_GROUPFOOTERS_ARE_IMMUTABLE = 368; // default: false
  public final static int LL_OPTIONSTR_LABEL_PRJEXT                = 0; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_LABEL_PRVEXT                = 1; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_LABEL_PRNEXT                = 2; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_CARD_PRJEXT                 = 3; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_CARD_PRVEXT                 = 4; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_CARD_PRNEXT                 = 5; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_LIST_PRJEXT                 = 6; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_LIST_PRVEXT                 = 7; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_LIST_PRNEXT                 = 8; // internal... = compatibility to L6)
  public final static int LL_OPTIONSTR_LLXPATHLIST                 = 12; //
  public final static int LL_OPTIONSTR_SHORTDATEFORMAT             = 13; //
  public final static int LL_OPTIONSTR_DECIMAL                     = 14; // decimal point, default: system
  public final static int LL_OPTIONSTR_THOUSAND                    = 15; // thousands separator, default: system
  public final static int LL_OPTIONSTR_CURRENCY                    = 16; // currency symbol, default: system
  public final static int LL_OPTIONSTR_EXPORTS_AVAILABLE           = 17; // r/o
  public final static int LL_OPTIONSTR_EXPORTS_ALLOWED             = 18; //
  public final static int LL_OPTIONSTR_DEFDEFFONT                  = 19; // in "{(r,g,b),size,<logfont>}"
  public final static int LL_OPTIONSTR_EXPORTFILELIST              = 20; //
  public final static int LL_OPTIONSTR_VARALIAS                    = 21; // "<local>=<global>"
  public final static int LL_OPTIONSTR_MAILTO                      = 24; // default TO: address for mailing from viewer
  public final static int LL_OPTIONSTR_MAILTO_CC                   = 25; // default CC: address for mailing from viewer
  public final static int LL_OPTIONSTR_MAILTO_BCC                  = 26; // default BCC: address for mailing from viewer
  public final static int LL_OPTIONSTR_MAILTO_SUBJECT              = 27; // default subject for mailing from viewer
  public final static int LL_OPTIONSTR_SAVEAS_PATH                 = 28; // default filename for saving the LL file from viewer
  public final static int LL_OPTIONSTR_LABEL_PRJDESCR              = 29; // "Etikett" ...
  public final static int LL_OPTIONSTR_CARD_PRJDESCR               = 30; //
  public final static int LL_OPTIONSTR_LIST_PRJDESCR               = 31; //
  public final static int LL_OPTIONSTR_LLFILEDESCR                 = 32; // "Vorschau-Datei"
  public final static int LL_OPTIONSTR_PROJECTPASSWORD             = 33; // w/o, of course :)
  public final static int LL_OPTIONSTR_FAX_RECIPNAME               = 34; //
  public final static int LL_OPTIONSTR_FAX_RECIPNUMBER             = 35; //
  public final static int LL_OPTIONSTR_FAX_QUEUENAME               = 36; //
  public final static int LL_OPTIONSTR_FAX_SENDERNAME              = 37; //
  public final static int LL_OPTIONSTR_FAX_SENDERCOMPANY           = 38; //
  public final static int LL_OPTIONSTR_FAX_SENDERDEPT              = 39; //
  public final static int LL_OPTIONSTR_FAX_SENDERBILLINGCODE       = 40; //
  public final static int LL_OPTIONSTR_FAX_AVAILABLEQUEUES         = 42; // r/o = Tab-separated) [job can be -1 or a valid job]
  public final static int LL_OPTIONSTR_LOGFILEPATH                 = 43; //
  public final static int LL_OPTIONSTR_LICENSINGINFO               = 44; // w/o, SERNO to define licensing state
  public final static int LL_OPTIONSTR_PRINTERALIASLIST            = 45; // multiple "PrnOld=PrnNew1[;PrnNew2[;...]]", erase with NULL or ""
  public final static int LL_OPTIONSTR_PREVIEWFILENAME             = 46; // path of preview file = directory will be overridden by LlSetPrinterDefaultsDir(), if given)
  public final static int LL_OPTIONSTR_EXPORTS_ALLOWED_IN_PREVIEW  = 47; // set in preview file
  public final static int LL_OPTIONSTR_HELPFILENAME                = 48; //
  public final static int LL_OPTIONSTR_NULLVALUE                   = 49; // string which represents the NULL value
  public final static int LL_OPTIONSTR_DEFAULT_EXPORT              = 50; // default export medium for new projects
  public final static int LL_OPTIONSTR_ORIGINALPROJECTFILENAME     = 51; // fixup project path for relative paths in realdata preview/export in designer
  public final static int LL_OPTIONSTR_HIERARCHICALDATASOURCE_ROOT = 52; // internal use only
  public final static int LL_OPTIONSTR_PRINTERDEFINITIONFILENAME = 53; // override for P file name
  public final static int LL_OPTIONSTR_DOCINFO_DATATYPE  = 54; // DOCINFO.lpszDatatype
  public final static int LL_OPTIONSTR_IDX_PRJEXT        = 55;
  public final static int LL_OPTIONSTR_IDX_PRVEXT        = 56;
  public final static int LL_OPTIONSTR_IDX_PRNEXT        = 57;
  public final static int LL_OPTIONSTR_TOC_PRJDESCR      = 58;
  public final static int LL_OPTIONSTR_IDX_PRJDESCR      = 59;
  public final static int LL_OPTIONSTR_TOC_PRJEXT        = 60;
  public final static int LL_OPTIONSTR_TOC_PRVEXT        = 61;
  public final static int LL_OPTIONSTR_TOC_PRNEXT        = 62;
  public final static int LL_OPTIONSTR_DEFAULTSCHEME     = 63; // default: empty = COMBIT)
  public final static int LL_OPTIONSTR_DEFAULTPROJECTNAME = 64; // DOCINFO.lpszDatatype
  public final static int LL_OPTIONSTR_GTC_PRJEXT        = 65;
  public final static int LL_OPTIONSTR_GTC_PRVEXT        = 66;
  public final static int LL_OPTIONSTR_GTC_PRNEXT        = 67;
  public final static int LL_OPTIONSTR_GTC_PRJDESCR      = 68;
  public final static int LL_OPTIONSTR_ERRORTEXT_FROM_EXPORT = 69; // r/o
  public final static int LL_OPTIONSTR_DEFAULTPRJDESCR   = 70; // default: empty = localized version of 'List & Label project file')
  public final static int LL_OPTIONSTR_DEFAULTPRINTER    = 71; // if set, this printer is used instead of the system's default printer = applies to ALL JOBS, so job ID must be "-1"!)
  public final static int LL_OPTIONSTR_QUERY_LICENSINGINFO = 72; // r/o, returns serial number in return value
  public final static int LL_OPTIONSTR_RESERVED73        = 73;
  public final static int LL_OPTIONSTR_REPRESENTATION_BOOL_TRUE = 74;
  public final static int LL_OPTIONSTR_REPRESENTATION_BOOL_FALSE = 75;
  public final static int LL_OPTIONSTR_DEFAULT_FILENAME_FOR_SAVEAS = 76; // if set, this filename is used as a default name when "Save as" is chosen from the menu
  public final static int LL_OPTIONSTR_LABEL_PRJDESCR_SINGULAR = 77;
  public final static int LL_OPTIONSTR_LIST_PRJDESCR_SINGULAR = 78;
  public final static int LL_OPTIONSTR_CARD_PRJDESCR_SINGULAR = 79;
  public final static int LL_OPTIONSTR_TOC_PRJDESCR_SINGULAR = 80;
  public final static int LL_OPTIONSTR_IDX_PRJDESCR_SINGULAR = 81;
  public final static int LL_OPTIONSTR_GTC_PRJDESCR_SINGULAR = 82;
  public final static int LL_OPTIONSTR_DEFAULTIMAGEPATH  = 83;
  public final static int LL_OPTIONSTR_EMBEDDED_EXPORTS  = 84; // ';' separated list of exports, for example "DOCX;XLSX;PDF". default: none. NOT COMPATIBLE WITH LL_QUERY_FILENAME_FOR_EXPORTJOB = !)
  public final static int LL_OPTIONSTR_DRILLDOWN_ROOT    = 85; // internal
  public final static int LL_OPTIONSTR_LEGACY_EXPORTERS_ALLOWED = 86; // ';' separated list of legacy exporters = JQM, HTML) to be allowed. Default is empty.
  public final static int LL_SYSCOMMAND_MINIMIZE                   = -1; //
  public final static int LL_SYSCOMMAND_MAXIMIZE                   = -2; //
  public final static int LL_PHFG_AGGREGATE              = 0x01;
  public final static int LL_PHFG_PRINT                  = 0x02;
  public final static int LL_PHFG_CROSSTAB               = 0x04;
  public final static int LL_PHFG_OTHERS                 = 0x08;
  public final static int LL_PHFG_ALL                    = 0xFF;
  public final static int LL_DLGBOXMODE_3DBUTTONS                  = 0x8000; // 'or'ed
  public final static int LL_DLGBOXMODE_3DFRAME2                   = 0x4000; // 'OR'ed
  public final static int LL_DLGBOXMODE_3DFRAME                    = 0x1000; // 'OR'ed
  public final static int LL_DLGBOXMODE_NOBITMAPS                  = 0x2000; // 'or'ed
  public final static int LL_DLGBOXMODE_DONTCARE                   = 0x0000; // load from INI
  public final static int LL_DLGBOXMODE_SAA                        = 0x0001; //
  public final static int LL_DLGBOXMODE_ALT1                       = 0x0002; //
  public final static int LL_DLGBOXMODE_ALT2                       = 0x0003; //
  public final static int LL_DLGBOXMODE_ALT3                       = 0x0004; //
  public final static int LL_DLGBOXMODE_ALT4                       = 0x0005; //
  public final static int LL_DLGBOXMODE_ALT5                       = 0x0006; //
  public final static int LL_DLGBOXMODE_ALT6                       = 0x0007; //
  public final static int LL_DLGBOXMODE_ALT7                       = 0x0008; //
  public final static int LL_DLGBOXMODE_ALT8                       = 0x0009; // Win95
  public final static int LL_DLGBOXMODE_ALT9                       = 0x000A; // Win98
  public final static int LL_DLGBOXMODE_ALT10                      = 0x000B; // Win98 with gray/color button bitmaps like IE4
  public final static int LL_DLGBOXMODE_TOOLTIPS98                 = 0x0800; // 'OR'ed - sliding tooltips
  public final static int LL_CTL_ADDTOSYSMENU                      = 0x00000004; // from CTL
  public final static int LL_CTL_ALSOCHILDREN                      = 0x00000010; //
  public final static int LL_CTL_CONVERTCONTROLS                   = 0x00010000; //
  public final static int LL_GROUP_ALWAYSFOOTER                    = 0x40000000; //
  public final static int LL_PRINTERCONFIG_SAVE                    = 1; //
  public final static int LL_PRINTERCONFIG_RESTORE                 = 2; //
  public final static int LL_PRJTYPE_OPTION_FORCEDEFAULTSETTINGS = 0x8000;
  public final static int LL_PRJTYPE_OPTION_CREATEPARTSFROMPROJECT = 0x4000;
  public final static int LL_PRJTYPE_OPTION_NOMERGEPRINTERSETTINGS = 0x2000;
  public final static int LL_RTFTEXTMODE_RTF                       = 0x0000; //
  public final static int LL_RTFTEXTMODE_PLAIN                     = 0x0001; //
  public final static int LL_RTFTEXTMODE_EVALUATED                 = 0x0000; //
  public final static int LL_RTFTEXTMODE_RAW                       = 0x0002; //
  public final static int LL_RTFTEXTFLAG_ALL             = 0x0000;
  public final static int LL_RTFTEXTFLAG_SELECTION       = 0x0004;
  public final static int LL_ENUMFLAG_INCLUDE_INTERNAL   = 1; // include internal variables/fields
  public final static int LL_ERR_BAD_JOBHANDLE                     = -1; // bad jobhandle
  public final static int LL_ERR_TASK_ACTIVE                       = -2; // LlDefineLayout() only once in a job
  public final static int LL_ERR_BAD_OBJECTTYPE                    = -3; // nObjType must be one of the allowed values = obsolete constant)
  public final static int LL_ERR_BAD_PROJECTTYPE                   = -3; // nObjType must be one of the allowed values
  public final static int LL_ERR_PRINTING_JOB                      = -4; // print job not opened, no print object
  public final static int LL_ERR_NO_BOX                            = -5; // LlPrintSetBoxText(...) called when no abort box exists!
  public final static int LL_ERR_ALREADY_PRINTING                  = -6; // the current operation cannot be performed while a print job is open
  public final static int LL_ERR_NOT_YET_PRINTING                  = -7; // LlPrintGetOptionString...
  public final static int LL_ERR_NO_PROJECT                        = -10; // object with requested name does not exist = former ERR_NO_OBJECT)
  public final static int LL_ERR_NO_PRINTER                        = -11; // printer couldn't be opened
  public final static int LL_ERR_PRINTING                          = -12; // error while printing
  public final static int LL_ERR_EXPORTING                         = -13; // error while exporting
  public final static int LL_ERR_NEEDS_VB                          = -14; // '11...' needs VB.EXE
  public final static int LL_ERR_BAD_PRINTER                       = -15; // PrintOptionsDialog(): no printer available
  public final static int LL_ERR_NO_PREVIEWMODE                    = -16; // Preview functions: not in preview mode
  public final static int LL_ERR_NO_PREVIEWFILES                   = -17; // PreviewDisplay(): no file found
  public final static int LL_ERR_PARAMETER                         = -18; // bad parameter = usually NULL pointer)
  public final static int LL_ERR_BAD_EXPRESSION                    = -19; // bad expression in LlExprEvaluate() and LlExprType()
  public final static int LL_ERR_BAD_EXPRMODE                      = -20; // bad expression mode = LlSetExpressionMode())
  public final static int LL_ERR_NO_TABLE                          = -21; // not used
  public final static int LL_ERR_CFGNOTFOUND                       = -22; // on LlPrintStart(), LlPrintWithBoxStart() [not found]
  public final static int LL_ERR_EXPRESSION                        = -23; // on LlPrintStart(), LlPrintWithBoxStart()
  public final static int LL_ERR_CFGBADFILE                        = -24; // on LlPrintStart(), LlPrintWithBoxStart() [read error, bad format]
  public final static int LL_ERR_BADOBJNAME                        = -25; // on LlPrintEnableObject() - not a ':' at the beginning
  public final static int LL_ERR_NOOBJECT                          = -26; // on LlPrintEnableObject() - "*" and no object in project
  public final static int LL_ERR_UNKNOWNOBJECT                     = -27; // on LlPrintEnableObject() - object with that name not existing
  public final static int LL_ERR_NO_TABLEOBJECT                    = -28; // LlPrint...Start() and no list in Project, or:
  public final static int LL_ERR_NO_OBJECT                         = -29; // LlPrint...Start() and no object in project
  public final static int LL_ERR_NO_TEXTOBJECT                     = -30; // LlPrintGetTextCharsPrinted() and no printable text in Project!
  public final static int LL_ERR_UNKNOWN                           = -31; // LlPrintIsVariableUsed(), LlPrintIsFieldUsed()
  public final static int LL_ERR_BAD_MODE                          = -32; // LlPrintFields(), LlPrintIsFieldUsed() called on non-OBJECT_LIST
  public final static int LL_ERR_CFGBADMODE                        = -33; // on LlDefineLayout(), LlPrint...Start(): file is in wrong expression mode
  public final static int LL_ERR_ONLYWITHONETABLE                  = -34; // on LlDefinePageSeparation(), LlDefineGrouping()
  public final static int LL_ERR_UNKNOWNVARIABLE                   = -35; // on LlGetVariableContents()
  public final static int LL_ERR_UNKNOWNFIELD                      = -36; // on LlGetFieldContents()
  public final static int LL_ERR_UNKNOWNSORTORDER                  = -37; // on LlGetFieldContents()
  public final static int LL_ERR_NOPRINTERCFG                      = -38; // on LlPrintCopyPrinterConfiguration() - no or bad file
  public final static int LL_ERR_SAVEPRINTERCFG                    = -39; // on LlPrintCopyPrinterConfiguration() - file could not be saved
  public final static int LL_ERR_NOVALIDPAGES                      = -41; // could also be that 16 bit Viewer tries to open 32bit-only storage
  public final static int LL_ERR_NOTINHOSTPRINTERMODE              = -42; // cannot be done in Host Printer Mode = LlSetPrinterInPrinterFile())
  public final static int LL_ERR_NOTFINISHED                       = -43; // appears when a project reset() is done, but the table not finished
  public final static int LL_ERR_BUFFERTOOSMALL                    = -44; // LlXXGetOptionStr()
  public final static int LL_ERR_BADCODEPAGE                       = -45; // LL_OPTION_CODEPAGE
  public final static int LL_ERR_CANNOTCREATETEMPFILE              = -46; // cannot create temporary file
  public final static int LL_ERR_NODESTINATION                     = -47; // no valid export destination
  public final static int LL_ERR_NOCHART                           = -48; // no chart control present
  public final static int LL_ERR_TOO_MANY_CONCURRENT_PRINTJOBS     = -49; // WebServer: not enough print process licenses
  public final static int LL_ERR_BAD_WEBSERVER_LICENSE             = -50; // WebServer: bad license file
  public final static int LL_ERR_NO_WEBSERVER_LICENSE              = -51; // WebServer: no license file
  public final static int LL_ERR_INVALIDDATE                       = -52; // LlSystemTimeFromLocaleString(): date not valid!
  public final static int LL_ERR_DRAWINGNOTFOUND                   = -53; // only if LL_OPTION_ERR_ON_FILENOTFOUND set
  public final static int LL_ERR_NOUSERINTERACTION                 = -54; // a call is used which would show a dialog, but LL is in Webserver mode
  public final static int LL_ERR_BADDATABASESTRUCTURE              = -55; // the project that is loading has a table that is not supported by the database
  public final static int LL_ERR_UNKNOWNPROPERTY                   = -56; //
  public final static int LL_ERR_INVALIDOPERATION                  = -57; //
  public final static int LL_ERR_PROPERTY_ALREADY_DEFINED          = -58; //
  public final static int LL_ERR_CFGFOUND                          = -59; // on LlPrjOpen() with CREATE_NEW disposition, or of project file is r/o and access flag is r/w
  public final static int LL_ERR_SAVECFG                           = -60; // error while saving = LlProjectSave())
  public final static int LL_ERR_WRONGTHREAD                       = -61; // internal = .NET)
  public final static int LL_ERR_NO_SUCH_INFORMATION     = -62;
  public final static int LL_ERR_SINK_ALREADY_PRESENT    = -63;
  public final static int LL_ERR_SINK_NOT_PRESENT        = -64;
  public final static int LL_ERR_ACCESS_DENIED           = -65;
  public final static int LL_ERR_IDLEITERATION_DETECTED  = -66;
  public final static int LL_ERR_USER_ABORTED                      = -99; // user aborted printing
  public final static int LL_ERR_BAD_DLLS                          = -100; // DLLs not up to date = CTL, DWG, UTIL)
  public final static int LL_ERR_NO_LANG_DLL                       = -101; // no or out-of-date language resource DLL
  public final static int LL_ERR_NO_MEMORY                         = -102; // out of memory
  public final static int LL_ERR_EXCEPTION                         = -104; // there was a GPF during the API execution. Any action that follows might cause problems!
  public final static int LL_ERR_LICENSEVIOLATION                  = -105; // your license does not allow this call = see LL_OPTIONSTR_LICENSINGINFO)
  public final static int LL_ERR_NOT_SUPPORTED_IN_THIS_OS          = -106; // the OS does not support this function
  public final static int LL_ERR_NO_MORE_DATA            = -107;
  public final static int LL_WRN_FIRSTWARNING            = -900;
  public final static int LL_WRN_REPORTPARAMETERS_COLLECTION_FINISHED = -994; // internal use
  public final static int LL_WRN_ISNULL                            = -995; // LlExprEvaluate[Var]()
  public final static int LL_WRN_TABLECHANGE                       = -996; //
  public final static int LL_WRN_PRINTFINISHED                     = -997; // LlRTFDisplay()
  public final static int LL_WRN_REPEAT_DATA                       = -998; // notification: page is full, prepare for next page
  public final static int LL_CHAR_TEXTQUOTE                        = 1; //
  public final static int LL_CHAR_PHANTOMSPACE                     = 2; //
  public final static int LL_CHAR_LOCK                             = 3; //
  public final static int LL_CHAR_NEWLINE                          = 182; // "¶"
  public final static int LL_CHAR_EXPRSEP                          = 164; // "¤"
  public final static int LL_CHAR_TAB                              = 247; // "÷"
  public final static int LL_CHAR_EAN128NUL                        = 255; //
  public final static int LL_CHAR_EAN128FNC1                       = 254; //
  public final static int LL_CHAR_EAN128FNC2                       = 253; //
  public final static int LL_CHAR_EAN128FNC3                       = 252; //
  public final static int LL_CHAR_EAN128FNC4                       = 251; //
  public final static int LL_CHAR_CODE93NUL                        = 255; //
  public final static int LL_CHAR_CODE93EXDOLLAR                   = 254; //
  public final static int LL_CHAR_CODE93EXPERC                     = 253; //
  public final static int LL_CHAR_CODE93EXSLASH                    = 252; //
  public final static int LL_CHAR_CODE93EXPLUS                     = 251; //
  public final static int LL_CHAR_CODE39NUL                        = 255; //
  public final static int LL_DLGEXPR_VAREXTBTN_ENABLE              = 0x00000001; // callback for simple Wizard extension
  public final static int LL_DLGEXPR_VAREXTBTN_DOMODAL             = 0x00000002; //
  public final static int LL_LLX_EXTENSIONTYPE_EXPORT              = 1; //
  public final static int LL_LLX_EXTENSIONTYPE_BARCODE             = 2; //
  public final static int LL_LLX_EXTENSIONTYPE_OBJECT              = 3; // nyi
  public final static int LL_LLX_EXTENSIONTYPE_WIZARD              = 4; // nyi
  public final static int LL_LLX_EXTENSIONTYPEFLAG_FORCE_PUBLIC = 0x00010000;
  public final static int LL_LLX_EXTENSIONTYPEFLAG_FORCE_PRIVATE = 0x00020000;
  public final static int LL_LLX_EXTENSIONTYPE_TYPEMASK  = 0x0000000f;
  public final static int LL_DECLARECHARTROW_FOR_OBJECTS           = 0x00000001; //
  public final static int LL_DECLARECHARTROW_FOR_TABLECOLUMNS      = 0x00000002; // body only
  public final static int LL_DECLARECHARTROW_FOR_TABLECOLUMNS_FOOTERS = 0x00000004; //
  public final static int LL_GETCHARTOBJECTCOUNT_CHARTOBJECTS      = 1; //
  public final static int LL_GETCHARTOBJECTCOUNT_CHARTOBJECTS_BEFORE_TABLE = 2; //
  public final static int LL_GETCHARTOBJECTCOUNT_CHARTCOLUMNS      = 3; // body only
  public final static int LL_GETCHARTOBJECTCOUNT_CHARTCOLUMNS_FOOTERS = 4; //
  public final static int LL_VARIANTFLAG_NEUTRAL         = 0x00000000;
  public final static int LL_VARIANTFLAG_USE_JULIAN_DATE = 0x00000001;
  public final static int LL_GRIPT_DIM_SCM                         = 1; //
  public final static int LL_GRIPT_DIM_PERC                        = 2; //
  public final static int LL_PARAMETERFLAG_PUBLIC                  = 0x00000000; //
  public final static int LL_PARAMETERFLAG_SAVEDEFAULT             = 0x00010000; //
  public final static int LL_PARAMETERFLAG_PRIVATE                 = 0x40000000; //
  public final static int LL_PARAMETERFLAG_FORMULA                 = 0x00000000; //
  public final static int LL_PARAMETERFLAG_VALUE                   = 0x20000000; //
  public final static int LL_PARAMETERFLAG_GLOBAL                  = 0x00000000; //
  public final static int LL_PARAMETERFLAG_LOCAL                   = 0x10000000; //
  public final static int LL_PARAMETERFLAG_MASK                    = 0xffff0000; //
  public final static int LL_PARAMETERTYPE_USER                    = 0; //
  public final static int LL_PARAMETERTYPE_FAX                     = 1; //
  public final static int LL_PARAMETERTYPE_MAIL                    = 2; //
  public final static int LL_PARAMETERTYPE_LLINTERNAL              = 4; //
  public final static int LL_PARAMETERTYPE_MASK                    = 0x0000000f; //
  public final static int LL_LOCCONVERSION_LCID          = 0;
  public final static int LL_LOCCONVERSION_COUNTRYPREFIX = 1;
  public final static int LL_LOCCONVERSION_COUNTRYISONAME = 2;
  public final static int LL_LOCCONVERSION_DIALPREFIX    = 3; // Not yet implemented
  public final static int LL_PRJOPEN_AM_READWRITE                  = 0x40000000; //
  public final static int LL_PRJOPEN_AM_READONLY                   = 0x00000000; // default
  public final static int LL_PRJOPEN_AM_MASK                       = 0x40000000; //
  public final static int LL_PRJOPEN_CD_OPEN_EXISTING              = 0x00000000; // fails if it does not exist - default
  public final static int LL_PRJOPEN_CD_CREATE_ALWAYS              = 0x10000000; // open = but do not read contents) if exists, create if not
  public final static int LL_PRJOPEN_CD_CREATE_NEW                 = 0x20000000; // fails if already exists
  public final static int LL_PRJOPEN_CD_OPEN_ALWAYS                = 0x30000000; // open = and load) if exists, create if not
  public final static int LL_PRJOPEN_CD_MASK                       = 0x30000000; // fails if it does not exist
  public final static int LL_PRJOPEN_EM_IGNORE_FORMULAERRORS       = 0x08000000; //
  public final static int LL_PRJOPEN_EM_MASK                       = 0x08000000; //
  public final static int LL_PRJOPEN_FLG_NOINITPRINTER             = 0x04000000; //
  public final static int LL_PRJOPEN_FLG_NOOBJECTLOAD    = 0x02000000;
  public final static int LL_PRJOPEN_FLG_RESERVED        = 0x01000000; // internal use
  public final static int LL_ASSOCIATEPREVIEWCONTROLFLAG_DELETE_ON_CLOSE = 0x0001; //
  public final static int LL_ASSOCIATEPREVIEWCONTROLFLAG_HANDLE_IS_ATTACHINFO = 0x0002; //
  public final static int LL_ASSOCIATEPREVIEWCONTROLFLAG_PRV_REPLACE = 0x0000;
  public final static int LL_ASSOCIATEPREVIEWCONTROLFLAG_PRV_ADD_TO_CONTROL_STACK = 0x0004;
  public final static int LL_ASSOCIATEPREVIEWCONTROLFLAG_PRV_ADD_TO_CONTROL_IN_TAB = 0x0008;
  public final static int LL_ASSOCIATEPREVIEWCONTROLMASK_ATTACHLOCATION = 0x003c;
  public final static int LL_DESFILEOPEN_OPEN_EXISTING             = 0x00000000; // fails if it does not exist - default
  public final static int LL_DESFILEOPEN_CREATE_ALWAYS             = 0x10000000; // open = but do not read contents) if exists, create if not
  public final static int LL_DESFILEOPEN_CREATE_NEW                = 0x20000000; // fails if already exists
  public final static int LL_DESFILEOPEN_OPEN_ALWAYS               = 0x30000000; // open = and load) if exists, create if not
  public final static int LL_DESFILEOPEN_OPEN_IMPORT               = 0x40000000; // fails if it does not exist - only imports data
  public final static int LL_DESFILEOPEN_OPENMASK                  = 0x70000000; //
  public final static int LL_DESFILEOPENFLAG_SUPPRESS_SAVEDIALOG   = 0x00000001; //
  public final static int LL_DESFILEOPENFLAG_SUPPRESS_SAVE         = 0x00000002; //
  public final static int LL_DESFILESAVE_DEFAULT                   = 0x00000000; // default
  public final static int LLDESADDACTIONFLAG_ADD_TO_TOOLBAR        = 0x20000000; //
  public final static int LLDESADDACTION_MENUITEM_APPEND           = 0x00000000; //
  public final static int LLDESADDACTION_MENUITEM_INSERT           = 0x10000000; //
  public final static int LLDESADDACTION_MENUITEM_POSITIONMASK     = 0x10000000; //
  public final static int LLDESADDACTION_ACCEL_CONTROL             = 0x00010000; //
  public final static int LLDESADDACTION_ACCEL_SHIFT               = 0x00020000; //
  public final static int LLDESADDACTION_ACCEL_ALT                 = 0x00040000; //
  public final static int LLDESADDACTION_ACCEL_VIRTKEY             = 0x00080000; //
  public final static int LLDESADDACTION_ACCEL_KEYMODIFIERMASK     = 0x000f0000; //
  public final static int LLDESADDACTION_ACCEL_KEYCODEMASK         = 0x0000ffff; //
  public final static int LL_DESIGNEROPTSTR_PROJECTFILENAME			= 1; //
  public final static int LL_DESIGNEROPTSTR_WORKSPACETITLE			= 2; //
  public final static int LL_DESIGNEROPTSTR_PROJECTDESCRIPTION  = 3; //
  public final static int LL_USEDIDENTIFIERSFLAG_VARIABLES			= 0x0001; //
  public final static int LL_USEDIDENTIFIERSFLAG_FIELDS					= 0x0002; //
  public final static int LL_USEDIDENTIFIERSFLAG_CHARTFIELDS		= 0x0004; //
  public final static int LL_USEDIDENTIFIERSFLAG_TABLES					= 0x0008; //
  public final static int LL_USEDIDENTIFIERSFLAG_RELATIONS			= 0x0010; //
  public final static int LL_USEDIDENTIFIERSFLAG_FILES   = 0x0020;
  public final static int LL_TEMPFILENAME_DEFAULT							= 0x0000; //
  public final static int LL_TEMPFILENAME_ENSURELONGPATH				= 0x0001; //
  public final static int LL_DICTIONARY_TYPE_STATIC      = 1;
  public final static int LL_DICTIONARY_TYPE_IDENTIFIER  = 2;
  public final static int LL_DICTIONARY_TYPE_TABLE       = 3;
  public final static int LL_DICTIONARY_TYPE_RELATION    = 4;
  public final static int LL_DICTIONARY_TYPE_SORTORDER   = 5;
  public final static int LL_DICTIONARY_TYPE_ALL         = 0; // only valid for NULL, NULL to clear all dictionaries in one run
  public final static int LL_UILANGUAGETYPE_NORMAL       = 0x00000001;
  public final static int LL_UILANGUAGETYPE_TRIAL        = 0x00000002;
  public final static int LL_ADDTABLEOPT_SUPPORTSSTACKEDSORTORDERS = 0x00000001;
  public final static int LL_ADDTABLEOPT_SUPPORTSADVANCEDFILTERING = 0x00000002;
  public final static int LL_ADDTABLEOPT_1TO1_RELATION_ONLY = 0x00000004;
  public final static int LL_INPLACEDESIGNERINTERACTION_QUERY_CANCLOSE = 1; // wParam = 0, lParam = &BOOL
  public final static int LL_JOBSTATEFLAG_VARLIST        = 0x00000001;
  public final static int LL_JOBSTATEFLAG_FIELDLIST      = 0x00000002;
  public final static int LL_JOBSTATEFLAG_CHARTFIELDLIST = 0x00000004;
  public final static int LL_JOBSTATEFLAG_DATABASESTRUCT = 0x00000008;
  public final static int LL_JOBSTATEFLAG_DICTIONARIES   = 0x00000010;
  public final static int LL_JOBSTATEFLAG_JOBSETTINGS    = 0x00000020;
  public final static int LL_JOBSTATEFLAG_ALL            = 0x0000003F;
  public final static int LL_EXPRXLATRESULT_OPTIMAL      = 0x00000000;
  public final static int LL_EXPRXLATRESULT_PARTIAL      = 0x00000001;
  public final static int LL_EXPRXLATRESULT_FAIL         = 0x00000002;
  public final static int LL_EXPRXLATRESULT_MASK         = 0x00000007; // some reserve
  public final static int LLSTGTESTSTGCMP_MASK_PAGECOUNT = 0x000000ff;
  public final static int LLSTGTESTSTGCMP_FLAG_PRVSINGLEPAGE = 0x00000100;
  public final static int LLSTGTESTSTGCMP_FLAG_EXCLUDE_EMBEDDEDSTORAGES = 0x00000200;
  public final static int LLSRTRIGGEREXPORT_DISCARD_EXPANDABLE_REGIONS = 1;
  public final static int LLJOBOPENCOPYEXFLAG_NO_COPY_FIELDLIST = 0x0001;
  public final static int LLJOBOPENCOPYEXFLAG_NO_COPY_DBSTRUCTS = 0x0002;
  public final static int LLJOBOPENCOPYEXFLAG_NO_COPY_XLATTABLES = 0x0004;
  public final static int LLJOBOPENCOPYEXFLAG_NO_COPY_LLXPARAMETERS = 0x0008;
  public final static int LL_DOM_CURRENT_OBJECT_LEVEL_OBJECT = 0;
  public final static int LL_DOM_CURRENT_OBJECT_LEVEL_CONTAINERITEM = 1;
  public final static int LL_DOM_CURRENT_OBJECT_LEVEL_FIELD = 2;
  public final static int LL_FIND_AND_REPLACE_FLAG_CASEINSENSITIVE = 0;
  public final static int LL_FIND_AND_REPLACE_FLAG_CASESENSITIVE = 1;

  private CmbtLL2632 LL26_32 = null;
  private CmbtLL2664 LL26_64 = null;
  
  public int LlJobOpen
	(
	int                  Language
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlJobOpen(Language);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlJobOpen(Language);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlJobOpenLCID
	(
	int                  LCID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlJobOpenLCID(LCID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlJobOpenLCID(LCID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlJobClose
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlJobClose(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlJobClose(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlSetDebug
	(
	int                  OnOff
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlSetDebug(OnOff);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlSetDebug(OnOff);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetVersion
	(
	int                  Cmd
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetVersion(Cmd);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetVersion(Cmd);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetNotificationMessage
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetNotificationMessage(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetNotificationMessage(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSetNotificationMessage
	(
	int                  LlJob,
	int                  Message
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetNotificationMessage(LlJob, Message);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetNotificationMessage(LlJob, Message);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineField
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineField(LlJob, VarName, Contents);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineField(LlJob, VarName, Contents);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineFieldExt
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents,
	int                  Para,
	long                 Ptr
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineFieldExt(LlJob, VarName, Contents, Para, (int)Ptr);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineFieldExt(LlJob, VarName, Contents, Para, Ptr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineFieldExtHandle
	(
	int                  LlJob,
	final String         VarName,
	long                 Contents,
	int                  Para,
	long                 Ptr
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineFieldExtHandle(LlJob, VarName, (int)Contents, Para, (int)Ptr);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineFieldExtHandle(LlJob, VarName, Contents, Para, Ptr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlDefineFieldStart
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlDefineFieldStart(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlDefineFieldStart(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineVariable
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineVariable(LlJob, VarName, Contents);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineVariable(LlJob, VarName, Contents);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineVariableExt
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents,
	int                  Para,
	long                 Ptr
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineVariableExt(LlJob, VarName, Contents, Para, (int)Ptr);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineVariableExt(LlJob, VarName, Contents, Para, Ptr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineVariableExtHandle
	(
	int                  LlJob,
	final String         VarName,
	long                 Contents,
	int                  Para,
	long                 Ptr
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineVariableExtHandle(LlJob, VarName, (int)Contents, Para, (int)Ptr);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineVariableExtHandle(LlJob, VarName, Contents, Para, Ptr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineVariableName
	(
	int                  LlJob,
	final String         VarName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineVariableName(LlJob, VarName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineVariableName(LlJob, VarName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlDefineVariableStart
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlDefineVariableStart(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlDefineVariableStart(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineSumVariable
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineSumVariable(LlJob, VarName, Contents);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineSumVariable(LlJob, VarName, Contents);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineLayout
	(
	int                  LlJob,
	long                 Wnd,
	final String         Title,
	int                  ObjType,
	final String         ObjName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineLayout(LlJob, (int)Wnd, Title, ObjType, ObjName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineLayout(LlJob, Wnd, Title, ObjType, ObjName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDlgEditLine
	(
	int                  LlJob,
	long                 Wnd,
	StringBuffer         Buf
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDlgEditLine(LlJob, (int)Wnd, Buf);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDlgEditLine(LlJob, Wnd, Buf);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDlgEditLineEx
	(
	int                  LlJob,
	long                 Wnd,
	StringBuffer         Buffer,
	int                  ParaTypes,
	final String         Title,
	boolean              Table,
	long                 Reserved
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDlgEditLineEx(LlJob, (int)Wnd, Buffer, ParaTypes, Title, Table, (int)Reserved);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDlgEditLineEx(LlJob, Wnd, Buffer, ParaTypes, Title, Table, Reserved);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPreviewSetTempPath
	(
	int                  LlJob,
	final String         Path
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPreviewSetTempPath(LlJob, Path);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPreviewSetTempPath(LlJob, Path);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPreviewDeleteFiles
	(
	int                  LlJob,
	final String         ObjName,
	final String         Path
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPreviewDeleteFiles(LlJob, ObjName, Path);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPreviewDeleteFiles(LlJob, ObjName, Path);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPreviewDisplay
	(
	int                  LlJob,
	final String         ObjName,
	final String         Path,
	long                 Wnd
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPreviewDisplay(LlJob, ObjName, Path, (int)Wnd);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPreviewDisplay(LlJob, ObjName, Path, Wnd);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPreviewDisplayEx
	(
	int                  LlJob,
	final String         ObjName,
	final String         Path,
	long                 Wnd,
	int                  Options,
	long                 Reserved
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPreviewDisplayEx(LlJob, ObjName, Path, (int)Wnd, Options, (int)Reserved);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPreviewDisplayEx(LlJob, ObjName, Path, Wnd, Options, Reserved);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrint
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrint(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrint(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintAbort
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintAbort(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintAbort(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public boolean LlPrintCheckLineFit
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintCheckLineFit(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintCheckLineFit(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintEnd
	(
	int                  LlJob,
	int                  Pages
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintEnd(LlJob, Pages);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintEnd(LlJob, Pages);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintFields
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintFields(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintFields(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintFieldsEnd
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintFieldsEnd(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintFieldsEnd(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetCurrentPage
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetCurrentPage(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetCurrentPage(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetItemsPerPage
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetItemsPerPage(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetItemsPerPage(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetItemsPerTable
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetItemsPerTable(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetItemsPerTable(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetRemainingItemsPerTable
	(
	int                  LlJob,
	final String         Field
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetRemainingItemsPerTable(LlJob, Field);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetRemainingItemsPerTable(LlJob, Field);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetRemItemsPerTable
	(
	int                  LlJob,
	final String         Field
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetRemItemsPerTable(LlJob, Field);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetRemItemsPerTable(LlJob, Field);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlPrintGetOption
	(
	int                  LlJob,
	int                  Index
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetOption(LlJob, Index);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetOption(LlJob, Index);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetPrinterInfo
	(
	int                  LlJob,
	StringBuffer         Prn,
	StringBuffer         Port
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetPrinterInfo(LlJob, Prn, Port);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetPrinterInfo(LlJob, Prn, Port);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintOptionsDialog
	(
	int                  LlJob,
	long                 Wnd,
	final String         Text
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintOptionsDialog(LlJob, (int)Wnd, Text);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintOptionsDialog(LlJob, Wnd, Text);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintSelectOffsetEx
	(
	int                  LlJob,
	long                 Wnd
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintSelectOffsetEx(LlJob, (int)Wnd);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintSelectOffsetEx(LlJob, Wnd);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintSetBoxText
	(
	int                  LlJob,
	final String         Text,
	int                  Percentage
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintSetBoxText(LlJob, Text, Percentage);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintSetBoxText(LlJob, Text, Percentage);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintSetOption
	(
	int                  LlJob,
	int                  Index,
	long                 Value
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintSetOption(LlJob, Index, (int)Value);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintSetOption(LlJob, Index, Value);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintUpdateBox
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintUpdateBox(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintUpdateBox(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintStart
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName,
	int                  PrintOptions,
	int                  dummy
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintStart(LlJob, ObjType, ObjName, PrintOptions, dummy);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintStart(LlJob, ObjType, ObjName, PrintOptions, dummy);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintWithBoxStart
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName,
	int                  PrintOptions,
	int                  BoxType,
	long                 Wnd,
	final String         Title
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintWithBoxStart(LlJob, ObjType, ObjName, PrintOptions, BoxType, (int)Wnd, Title);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintWithBoxStart(LlJob, ObjType, ObjName, PrintOptions, BoxType, Wnd, Title);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrinterSetup
	(
	int                  LlJob,
	long                 Wnd,
	int                  ObjType,
	final String         ObjName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrinterSetup(LlJob, (int)Wnd, ObjType, ObjName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrinterSetup(LlJob, Wnd, ObjType, ObjName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSelectFileDlgTitleEx
	(
	int                  LlJob,
	long                 Wnd,
	final String         Title,
	int                  ObjType,
	StringBuffer         ObjName,
	long                 Reserved
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSelectFileDlgTitleEx(LlJob, (int)Wnd, Title, ObjType, ObjName, (int)Reserved);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSelectFileDlgTitleEx(LlJob, Wnd, Title, ObjType, ObjName, Reserved);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlSetDlgboxMode
	(
	int                  Mode
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlSetDlgboxMode(Mode);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlSetDlgboxMode(Mode);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetDlgboxMode
	(
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetDlgboxMode();
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetDlgboxMode();
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlExprParse
	(
	int                  LlJob,
	final String         ExprText,
	boolean              IncludeFields
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlExprParse(LlJob, ExprText, IncludeFields);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlExprParse(LlJob, ExprText, IncludeFields);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlExprType
	(
	int                  LlJob,
	long                 Expr
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlExprType(LlJob, (int)Expr);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlExprType(LlJob, Expr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlExprError
	(
	int                  LlJob,
	StringBuffer         Buf
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlExprError(LlJob, Buf);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlExprError(LlJob, Buf);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlExprFree
	(
	int                  LlJob,
	long                 Expr
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlExprFree(LlJob, (int)Expr);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlExprFree(LlJob, Expr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlExprEvaluate
	(
	int                  LlJob,
	long                 Expr,
	StringBuffer         Buf
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlExprEvaluate(LlJob, (int)Expr, Buf);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlExprEvaluate(LlJob, Expr, Buf);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlExprGetUsedVars
	(
	int                  LlJob,
	long                 Expr,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlExprGetUsedVars(LlJob, (int)Expr, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlExprGetUsedVars(LlJob, Expr, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSetOption
	(
	int                  LlJob,
	int                  Mode,
	long                 Value
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetOption(LlJob, Mode, (int)Value);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetOption(LlJob, Mode, Value);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlGetOption
	(
	int                  LlJob,
	int                  Mode
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetOption(LlJob, Mode);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetOption(LlJob, Mode);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSetOptionString
	(
	int                  LlJob,
	int                  Index,
	final String         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetOptionString(LlJob, Index, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetOptionString(LlJob, Index, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetOptionString
	(
	int                  LlJob,
	int                  Index,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetOptionString(LlJob, Index, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetOptionString(LlJob, Index, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintSetOptionString
	(
	int                  LlJob,
	int                  Index,
	final String         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintSetOptionString(LlJob, Index, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintSetOptionString(LlJob, Index, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetOptionString
	(
	int                  LlJob,
	int                  Index,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetOptionString(LlJob, Index, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetOptionString(LlJob, Index, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerProhibitAction
	(
	int                  LlJob,
	int                  MenuID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerProhibitAction(LlJob, MenuID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerProhibitAction(LlJob, MenuID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerProhibitFunction
	(
	int                  LlJob,
	final String         Function
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerProhibitFunction(LlJob, Function);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerProhibitFunction(LlJob, Function);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintEnableObject
	(
	int                  LlJob,
	final String         ObjectName,
	boolean              Enable
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintEnableObject(LlJob, ObjectName, Enable);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintEnableObject(LlJob, ObjectName, Enable);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSetFileExtensions
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjectExt,
	final String         PrinterExt,
	final String         SketchExt
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetFileExtensions(LlJob, ObjType, ObjectExt, PrinterExt, SketchExt);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetFileExtensions(LlJob, ObjType, ObjectExt, PrinterExt, SketchExt);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetTextCharsPrinted
	(
	int                  LlJob,
	final String         ObjectName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetTextCharsPrinted(LlJob, ObjectName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetTextCharsPrinted(LlJob, ObjectName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetFieldCharsPrinted
	(
	int                  LlJob,
	final String         ObjectName,
	final String         Field
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetFieldCharsPrinted(LlJob, ObjectName, Field);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetFieldCharsPrinted(LlJob, ObjectName, Field);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintIsVariableUsed
	(
	int                  LlJob,
	final String         VarName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintIsVariableUsed(LlJob, VarName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintIsVariableUsed(LlJob, VarName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintIsFieldUsed
	(
	int                  LlJob,
	final String         FieldName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintIsFieldUsed(LlJob, FieldName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintIsFieldUsed(LlJob, FieldName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintOptionsDialogTitle
	(
	int                  LlJob,
	long                 Wnd,
	final String         Title,
	final String         Text
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintOptionsDialogTitle(LlJob, (int)Wnd, Title, Text);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintOptionsDialogTitle(LlJob, Wnd, Title, Text);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSetPrinterToDefault
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetPrinterToDefault(LlJob, ObjType, ObjName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetPrinterToDefault(LlJob, ObjType, ObjName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineSortOrderStart
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineSortOrderStart(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineSortOrderStart(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineSortOrder
	(
	int                  LlJob,
	final String         Identifier,
	final String         Text
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineSortOrder(LlJob, Identifier, Text);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineSortOrder(LlJob, Identifier, Text);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetSortOrder
	(
	int                  LlJob,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetSortOrder(LlJob, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetSortOrder(LlJob, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineGrouping
	(
	int                  LlJob,
	final String         Sortorder,
	final String         Identifier,
	final String         Text
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineGrouping(LlJob, Sortorder, Identifier, Text);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineGrouping(LlJob, Sortorder, Identifier, Text);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetGrouping
	(
	int                  LlJob,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetGrouping(LlJob, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetGrouping(LlJob, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlAddCtlSupport
	(
	long                 Wnd,
	int                  Flags,
	final String         Inifile
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlAddCtlSupport((int)Wnd, Flags, Inifile);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlAddCtlSupport(Wnd, Flags, Inifile);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetFilterExpression
	(
	int                  LlJob,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetFilterExpression(LlJob, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetFilterExpression(LlJob, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintWillMatchFilter
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintWillMatchFilter(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintWillMatchFilter(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintDidMatchFilter
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintDidMatchFilter(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintDidMatchFilter(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetFieldContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetFieldContents(LlJob, Name, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetFieldContents(LlJob, Name, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetVariableContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetVariableContents(LlJob, Name, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetVariableContents(LlJob, Name, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetSumVariableContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetSumVariableContents(LlJob, Name, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetSumVariableContents(LlJob, Name, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetUserVariableContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetUserVariableContents(LlJob, Name, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetUserVariableContents(LlJob, Name, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetVariableType
	(
	int                  LlJob,
	final String         Name
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetVariableType(LlJob, Name);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetVariableType(LlJob, Name);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetFieldType
	(
	int                  LlJob,
	final String         Name
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetFieldType(LlJob, Name);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetFieldType(LlJob, Name);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSetPrinterDefaultsDir
	(
	int                  LlJob,
	final String         Dir
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetPrinterDefaultsDir(LlJob, Dir);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetPrinterDefaultsDir(LlJob, Dir);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlCreateSketch
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlCreateSketch(LlJob, ObjType, ObjName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlCreateSketch(LlJob, ObjType, ObjName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlViewerProhibitAction
	(
	int                  LlJob,
	int                  MenuID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlViewerProhibitAction(LlJob, MenuID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlViewerProhibitAction(LlJob, MenuID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintCopyPrinterConfiguration
	(
	int                  LlJob,
	final String         Filename,
	int                  Function
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintCopyPrinterConfiguration(LlJob, Filename, Function);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintCopyPrinterConfiguration(LlJob, Filename, Function);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlRTFCreateObject
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFCreateObject(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFCreateObject(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFDeleteObject
	(
	int                  LlJob,
	long                 RTF
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFDeleteObject(LlJob, (int)RTF);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFDeleteObject(LlJob, RTF);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFSetText
	(
	int                  LlJob,
	long                 RTF,
	final String         Text
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFSetText(LlJob, (int)RTF, Text);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFSetText(LlJob, RTF, Text);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFGetTextLength
	(
	int                  LlJob,
	long                 RTF,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFGetTextLength(LlJob, (int)RTF, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFGetTextLength(LlJob, RTF, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFGetText
	(
	int                  LlJob,
	long                 RTF,
	int                  Flags,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFGetText(LlJob, (int)RTF, Flags, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFGetText(LlJob, RTF, Flags, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFEditObject
	(
	int                  LlJob,
	long                 RTF,
	long                 Wnd,
	long                 PrnDC,
	int                  ProjectType,
	boolean              Modal
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFEditObject(LlJob, (int)RTF, (int)Wnd, (int)PrnDC, ProjectType, Modal);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFEditObject(LlJob, RTF, Wnd, PrnDC, ProjectType, Modal);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFCopyToClipboard
	(
	int                  LlJob,
	long                 RTF
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFCopyToClipboard(LlJob, (int)RTF);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFCopyToClipboard(LlJob, RTF);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFEditorProhibitAction
	(
	int                  LlJob,
	long                 RTF,
	int                  ControlID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFEditorProhibitAction(LlJob, (int)RTF, ControlID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFEditorProhibitAction(LlJob, RTF, ControlID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlRTFEditorInvokeAction
	(
	int                  LlJob,
	long                 RTF,
	int                  ControlID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlRTFEditorInvokeAction(LlJob, (int)RTF, ControlID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlRTFEditorInvokeAction(LlJob, RTF, ControlID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlDebugOutput
	(
	int                  Indent,
	final String         Text
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlDebugOutput(Indent, Text);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlDebugOutput(Indent, Text);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlEnumGetFirstVar
	(
	int                  LlJob,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlEnumGetFirstVar(LlJob, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlEnumGetFirstVar(LlJob, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlEnumGetFirstField
	(
	int                  LlJob,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlEnumGetFirstField(LlJob, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlEnumGetFirstField(LlJob, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlEnumGetNextEntry
	(
	int                  LlJob,
	long                 Pos,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlEnumGetNextEntry(LlJob, (int)Pos, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlEnumGetNextEntry(LlJob, Pos, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintResetObjectStates
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintResetObjectStates(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintResetObjectStates(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlXSetParameter
	(
	int                  LlJob,
	int                  ExtensionType,
	final String         ExtensionName,
	final String         Key,
	final String         Value
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlXSetParameter(LlJob, ExtensionType, ExtensionName, Key, Value);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlXSetParameter(LlJob, ExtensionType, ExtensionName, Key, Value);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlXGetParameter
	(
	int                  LlJob,
	int                  ExtensionType,
	final String         ExtensionName,
	final String         Key,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlXGetParameter(LlJob, ExtensionType, ExtensionName, Key, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlXGetParameter(LlJob, ExtensionType, ExtensionName, Key, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintResetProjectState
	(
	int                  Job
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintResetProjectState(Job);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintResetProjectState(Job);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlDefineChartFieldStart
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlDefineChartFieldStart(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlDefineChartFieldStart(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDefineChartFieldExt
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents,
	int                  Para,
	long                 Ptr
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDefineChartFieldExt(LlJob, VarName, Contents, Para, (int)Ptr);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDefineChartFieldExt(LlJob, VarName, Contents, Para, Ptr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintDeclareChartRow
	(
	int                  LlJob,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintDeclareChartRow(LlJob, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintDeclareChartRow(LlJob, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetChartObjectCount
	(
	int                  LlJob,
	int                  Type
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetChartObjectCount(LlJob, Type);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetChartObjectCount(LlJob, Type);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintIsChartFieldUsed
	(
	int                  LlJob,
	final String         FieldName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintIsChartFieldUsed(LlJob, FieldName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintIsChartFieldUsed(LlJob, FieldName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetChartFieldContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetChartFieldContents(LlJob, Name, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetChartFieldContents(LlJob, Name, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlEnumGetFirstChartField
	(
	int                  LlJob,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlEnumGetFirstChartField(LlJob, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlEnumGetFirstChartField(LlJob, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintGetRemainingSpacePerTable
	(
	int                  LlJob,
	final String         Field,
	int                  Dimension
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintGetRemainingSpacePerTable(LlJob, Field, Dimension);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintGetRemainingSpacePerTable(LlJob, Field, Dimension);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlSetDefaultProjectParameter
	(
	int                  LlJob,
	final String         Parameter,
	final String         Value,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetDefaultProjectParameter(LlJob, Parameter, Value, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetDefaultProjectParameter(LlJob, Parameter, Value, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintSetProjectParameter
	(
	int                  LlJob,
	final String         Parameter,
	final String         Value,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintSetProjectParameter(LlJob, Parameter, Value, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintSetProjectParameter(LlJob, Parameter, Value, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlExprContainsVariable
	(
	int                  LlJob,
	long                 Expr,
	final String         Variable
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlExprContainsVariable(LlJob, (int)Expr, Variable);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlExprContainsVariable(LlJob, Expr, Variable);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlExprIsConstant
	(
	int                  LlJob,
	long                 Expr
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlExprIsConstant(LlJob, (int)Expr);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlExprIsConstant(LlJob, Expr);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlProfileStart
	(
	long                 Thread,
	final String         Descr,
	final String         Filename,
	int                  TicksMS
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlProfileStart((int)Thread, Descr, Filename, TicksMS);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlProfileStart(Thread, Descr, Filename, TicksMS);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LlProfileEnd
	(
	long                  Thread
	)
	{
	  if(LL26_32 != null)
	  {
		  LL26_32.LlProfileEnd((int)Thread);
	  }
	  else if(LL26_64 != null)
	  {
		  LL26_64.LlProfileEnd(Thread);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDbAddTable
	(
	int                  Job,
	final String         TableID,
	final String         DisplayName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbAddTable(Job, TableID, DisplayName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbAddTable(Job, TableID, DisplayName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDbAddTableRelation
	(
	int                  Job,
	final String         TableID,
	final String         ParentTableID,
	final String         RelationID,
	final String         RelationDisplayName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbAddTableRelation(Job, TableID, ParentTableID, RelationID, RelationDisplayName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbAddTableRelation(Job, TableID, ParentTableID, RelationID, RelationDisplayName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDbAddTableSortOrder
	(
	int                  Job,
	final String         TableID,
	final String         SortOrderID,
	final String         SortOrderDisplayName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbAddTableSortOrder(Job, TableID, SortOrderID, SortOrderDisplayName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbAddTableSortOrder(Job, TableID, SortOrderID, SortOrderDisplayName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintDbGetCurrentTable
	(
	int                  Job,
	StringBuffer         TableID,
	boolean              CompletePath
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintDbGetCurrentTable(Job, TableID, CompletePath);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintDbGetCurrentTable(Job, TableID, CompletePath);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintDbGetCurrentTableRelation
	(
	int                  Job,
	StringBuffer         RelationID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintDbGetCurrentTableRelation(Job, RelationID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintDbGetCurrentTableRelation(Job, RelationID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintDbGetCurrentTableSortOrder
	(
	int                  Job,
	StringBuffer         SortOrderID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintDbGetCurrentTableSortOrder(Job, SortOrderID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintDbGetCurrentTableSortOrder(Job, SortOrderID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDbDumpStructure
	(
	int                  Job
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbDumpStructure(Job);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbDumpStructure(Job);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlPrintDbGetRootTableCount
	(
	int                  Job
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlPrintDbGetRootTableCount(Job);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlPrintDbGetRootTableCount(Job);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDbSetMasterTable
	(
	int                  Job,
	final String         TableID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbSetMasterTable(Job, TableID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbSetMasterTable(Job, TableID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDbGetMasterTable
	(
	int                  Job,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbGetMasterTable(Job, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbGetMasterTable(Job, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlXSetExportParameter
	(
	int                  LlJob,
	final String         ExtensionName,
	final String         Key,
	final String         Value
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlXSetExportParameter(LlJob, ExtensionName, Key, Value);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlXSetExportParameter(LlJob, ExtensionName, Key, Value);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlXGetExportParameter
	(
	int                  LlJob,
	final String         ExtensionName,
	final String         Key,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlXGetExportParameter(LlJob, ExtensionName, Key, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlXGetExportParameter(LlJob, ExtensionName, Key, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlXlatName
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlXlatName(LlJob, Name, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlXlatName(LlJob, Name, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerProhibitEditingObject
	(
	int                  LlJob,
	final String         Object
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerProhibitEditingObject(LlJob, Object);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerProhibitEditingObject(LlJob, Object);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetUsedIdentifiers
	(
	int                  LlJob,
	final String         ProjectName,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetUsedIdentifiers(LlJob, ProjectName, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetUsedIdentifiers(LlJob, ProjectName, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlExprGetUsedVarsEx
	(
	int                  LlJob,
	long                 Expr,
	StringBuffer         Buffer,
	boolean              OrgName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlExprGetUsedVarsEx(LlJob, (int)Expr, Buffer, OrgName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlExprGetUsedVarsEx(LlJob, Expr, Buffer, OrgName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomGetProject
	(
	int                  LlJob,
	long                 DOMObj
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomGetProject(LlJob, (int)DOMObj);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomGetProject(LlJob, DOMObj);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomGetProperty
	(
	long                 DOMObj,
	final String         Name,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomGetProperty((int)DOMObj, Name, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomGetProperty(DOMObj, Name, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomSetProperty
	(
	long                 DOMObj,
	final String         Name,
	final String         Value
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomSetProperty((int)DOMObj, Name, Value);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomSetProperty(DOMObj, Name, Value);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomGetObject
	(
	long                 DOMObj,
	final String         Name,
	long                 DOMSubObj
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomGetObject((int)DOMObj, Name, (int)DOMSubObj);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomGetObject(DOMObj, Name, DOMSubObj);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomGetSubobjectCount
	(
	long                 DOMObj,
	long                 Count
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomGetSubobjectCount((int)DOMObj, (int)Count);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomGetSubobjectCount(DOMObj, Count);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomGetSubobject
	(
	long                 DOMObj,
	int                  Position,
	long                 DOMSubObj
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomGetSubobject((int)DOMObj, Position, (int)DOMSubObj);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomGetSubobject(DOMObj, Position, DOMSubObj);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomCreateSubobject
	(
	long                 DOMObj,
	int                  Position,
	final String         Type,
	long                 DOMSubObj
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomCreateSubobject((int)DOMObj, Position, Type, (int)DOMSubObj);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomCreateSubobject(DOMObj, Position, Type, DOMSubObj);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDomDeleteSubobject
	(
	long                 DOMObj,
	int                  Position
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDomDeleteSubobject((int)DOMObj, Position);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDomDeleteSubobject(DOMObj, Position);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlProjectOpen
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName,
	int                  OpenMode
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlProjectOpen(LlJob, ObjType, ObjName, OpenMode);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlProjectOpen(LlJob, ObjType, ObjName, OpenMode);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlProjectSave
	(
	int                  LlJob,
	final String         ObjName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlProjectSave(LlJob, ObjName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlProjectSave(LlJob, ObjName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlProjectClose
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlProjectClose(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlProjectClose(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlAssociatePreviewControl
	(
	int                  LlJob,
	long                 WndControl,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlAssociatePreviewControl(LlJob, (int)WndControl, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlAssociatePreviewControl(LlJob, WndControl, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetErrortext
	(
	int                  Error,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetErrortext(Error, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetErrortext(Error, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerInvokeAction
	(
	int                  LlJob,
	int                  MenuID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerInvokeAction(LlJob, MenuID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerInvokeAction(LlJob, MenuID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerRefreshWorkspace
	(
	int                  LlJob
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerRefreshWorkspace(LlJob);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerRefreshWorkspace(LlJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerFileOpen
	(
	int                  LlJob,
	final String         Filename,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerFileOpen(LlJob, Filename, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerFileOpen(LlJob, Filename, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerFileSave
	(
	int                  LlJob,
	int                  Flags
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerFileSave(LlJob, Flags);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerFileSave(LlJob, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerAddAction
	(
	int                  LlJob,
	int                  ID,
	int                  Flags,
	final String         MenuText,
	final String         MenuHierarchy,
	final String         TooltipText,
	int                  Icon,
	long                 Reserved
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerAddAction(LlJob, ID, Flags, MenuText, MenuHierarchy, TooltipText, Icon, (int)Reserved);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerAddAction(LlJob, ID, Flags, MenuText, MenuHierarchy, TooltipText, Icon, Reserved);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerGetOptionString
	(
	int                  LlJob,
	int                  Index,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerGetOptionString(LlJob, Index, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerGetOptionString(LlJob, Index, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlDesignerSetOptionString
	(
	int                  LlJob,
	int                  Index,
	final String         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDesignerSetOptionString(LlJob, Index, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDesignerSetOptionString(LlJob, Index, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlJobOpenCopy
	(
	int                  Job
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlJobOpenCopy(Job);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlJobOpenCopy(Job);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlGetProjectParameter
	(
	int                  LlJob,
	final String         ProjectName,
	final String         Parameter,
	StringBuffer         Buffer
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetProjectParameter(LlJob, ProjectName, Parameter, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetProjectParameter(LlJob, ProjectName, Parameter, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public boolean LlSetNotificationCallback
  	(
      int LlJob,
      combit.callbacks.Callback callback
  	)
  	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetNotificationCallback(LlJob, callback);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetNotificationCallback(LlJob, callback);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
  	}

  public int LlGetDebug
  	(
    )
  	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetDebug();
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetDebug();
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
  	}

  public int LlGetTempFileName
  	(
  	final String 		Prefix,
  	final String 		Extension,
  	StringBuffer 		Buffer,
  	int 				Options
	)
  	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetTempFileName(Prefix, Extension, Buffer, Options);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetTempFileName(Prefix, Extension, Buffer, Options);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
  	}

  public int LlGetUsedIdentifiersEx
  	(
	int					LlJob,
	final String		ProjectName,
	int					IdentifierTypes,
	StringBuffer		Buffer
	)
  	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlGetUsedIdentifiersEx(LlJob, ProjectName, IdentifierTypes, Buffer);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlGetUsedIdentifiersEx(LlJob, ProjectName, IdentifierTypes, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
  	}

  public int LlDbAddTableRelationEx
  	(
    int					Job,
    final String      	TableID,
    final String      	ParentTableID,
    final String      	RelationID,
    final String      	RelationDisplayName,
    final String      	KeyField,
    final String      	ParentKeyField
    )
  	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbAddTableRelationEx(Job, TableID, ParentTableID, RelationID, RelationDisplayName, KeyField, ParentKeyField);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbAddTableRelationEx(Job, TableID, ParentTableID, RelationID, RelationDisplayName, KeyField, ParentKeyField);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
  	}

  public int LlDbAddTableSortOrderEx
  	(
    int					Job,
    final String		TableID,
    final String		SortOrderID,
    final String		SortOrderDisplayName,
    final String		Field
    )
  	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlDbAddTableSortOrderEx(Job, TableID, SortOrderID, SortOrderDisplayName, Field);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlDbAddTableSortOrderEx(Job, TableID, SortOrderID, SortOrderDisplayName, Field);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
  	}
      
  public int LlSetPrinterInPrinterFile
	(
	int					Job,
	int					ObjectType,
	final String		ObjectName,
	int					PrinterIndex,
	final String		PrinterName
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlSetPrinterInPrinterFile(Job, ObjectType, ObjectName, PrinterIndex, PrinterName);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlSetPrinterInPrinterFile(Job, ObjectType, ObjectName, PrinterIndex, PrinterName);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}
	  
  public int LlLocAddDictionaryEntry
	(
	int					Job,
	int					LCID,
	final String		Key,
	final String		Value,
	int					Type
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlLocAddDictionaryEntry(Job, LCID, Key, Value, Type);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlLocAddDictionaryEntry(Job, LCID, Key, Value, Type);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}
	  
  public int LlLocAddDesignLCID
	(
	int					Job,
	int					LCID
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlLocAddDesignLCID(Job, LCID);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlLocAddDesignLCID(Job, LCID);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}
	  
  public int LlUtilsGetProjectType
	(
	int					Job,
	final String		ProjectFilename
	)
	{
	  if(LL26_32 != null)
	  {
		  return LL26_32.LlUtilsGetProjectType(Job, ProjectFilename);
	  }
	  else if(LL26_64 != null)
	  {
		  return LL26_64.LlUtilsGetProjectType(Job, ProjectFilename);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}
  
  public CmbtLL26()
  {
	String vmArch = System.getProperty("sun.arch.data.model");
	if(vmArch.compareTo("32") == 0)
	{
		LL26_32 = new CmbtLL2632();
	}
	else if(vmArch.compareTo("64") == 0)
	{
		LL26_64 = new CmbtLL2664();
	}
	else
	{
		throw new UnsupportedOperationException("Platform not supported by List & Label");
	}
  }
};
