//
// Java Declaration File
// constants and function definitions for combit List & Label 26
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 26.001
//

package combit;

import combit.x86.*;
import combit.x64.*;

public final class CmbtLS26
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
  public final static int LL_ERR_STG_NOSTORAGE                     = -1000; //
  public final static int LL_ERR_STG_BADVERSION                    = -1001; //
  public final static int LL_ERR_STG_READ                          = -1002; //
  public final static int LL_ERR_STG_WRITE                         = -1003; //
  public final static int LL_ERR_STG_UNKNOWNSYSTEM                 = -1004; //
  public final static int LL_ERR_STG_BADHANDLE                     = -1005; //
  public final static int LL_ERR_STG_ENDOFLIST                     = -1006; //
  public final static int LL_ERR_STG_BADJOB                        = -1007; //
  public final static int LL_ERR_STG_ACCESSDENIED                  = -1008; //
  public final static int LL_ERR_STG_BADSTORAGE                    = -1009; //
  public final static int LL_ERR_STG_CANNOTGETMETAFILE             = -1010; //
  public final static int LL_ERR_STG_OUTOFMEMORY                   = -1011; //
  public final static int LL_ERR_STG_SEND_FAILED                   = -1012; //
  public final static int LL_ERR_STG_DOWNLOAD_PENDING              = -1013; //
  public final static int LL_ERR_STG_DOWNLOAD_FAILED               = -1014; //
  public final static int LL_ERR_STG_WRITE_FAILED                  = -1015; //
  public final static int LL_ERR_STG_UNEXPECTED                    = -1016; //
  public final static int LL_ERR_STG_CANNOTCREATEFILE              = -1017; //
  public final static int LL_ERR_STG_UNKNOWN_CONVERTER             = -1018; //
  public final static int LL_ERR_STG_INET_ERROR                    = -1019; //
  public final static int LL_ERR_STG_NOTFOUND 						= -1020;
  public final static int LL_WRN_STG_UNFAXED_PAGES                 = -1100; //
  public final static int LS_OPTION_HAS16BITPAGES                  = 200; // has job 16 bit pages?
  public final static int LS_OPTION_BOXTYPE                        = 201; // wait meter box type
  public final static int LS_OPTION_UNITS                          = 203; // LL_UNITS_INCH_DIV_100 or LL_UNITS_MM_DIV_10
  public final static int LS_OPTION_PRINTERCOUNT                   = 204; // number of printers (1 or 2)
  public final static int LS_OPTION_ISSTORAGE                      = 205; // returns whether file is STORAGE or COMPAT4
  public final static int LS_OPTION_EMFRESOLUTION                  = 206; // EMFRESOLUTION used to print the file
  public final static int LS_OPTION_JOB                            = 207; // returns current job number
  public final static int LS_OPTION_TOTALPAGES                     = 208; // differs from GetPageCount() if print range in effect
  public final static int LS_OPTION_PAGESWITHFAXNUMBER             = 209; //
  public final static int LS_OPTION_HASINPUTOBJECTS                = 210; //
  public final static int LS_OPTION_HASFORCEDINPUTOBJECTS          = 211; //
  public final static int LS_OPTION_INPUTOBJECTSFINISHED           = 212; //
  public final static int LS_OPTION_HASHYPERLINKS                  = 213; //
  public final static int LS_OPTION_USED_PRINTERCOUNT 			= 214; // count of printers actually used (compares DEVMODEs etc)
  public final static int LS_OPTION_PAGENUMBER                     = 0; // page number of current page
  public final static int LS_OPTION_COPIES                         = 1; // number of copies (same for all pages at the moment)
  public final static int LS_OPTION_PRN_ORIENTATION                = 2; // orientation (DMORIENT_LANDSCAPE, DMORIENT_PORTRAIT)
  public final static int LS_OPTION_PHYSPAGE                       = 3; // is page "physical page" oriented?
  public final static int LS_OPTION_PRN_PIXELSOFFSET_X             = 4; // this and the following values are
  public final static int LS_OPTION_PRN_PIXELSOFFSET_Y             = 5; // values of the printer that the preview was
  public final static int LS_OPTION_PRN_PIXELS_X                   = 6; // created on!
  public final static int LS_OPTION_PRN_PIXELS_Y                   = 7; //
  public final static int LS_OPTION_PRN_PIXELSPHYSICAL_X           = 8; //
  public final static int LS_OPTION_PRN_PIXELSPHYSICAL_Y           = 9; //
  public final static int LS_OPTION_PRN_PIXELSPERINCH_X            = 10; //
  public final static int LS_OPTION_PRN_PIXELSPERINCH_Y            = 11; //
  public final static int LS_OPTION_PRN_INDEX                      = 12; // printer index of the page (0/1)
  public final static int LS_OPTION_PRN_PAPERTYPE                  = 13; //
  public final static int LS_OPTION_PRN_PAPERSIZE_X                = 14; //
  public final static int LS_OPTION_PRN_PAPERSIZE_Y                = 15; //
  public final static int LS_OPTION_PRN_FORCE_PAPERSIZE            = 16; //
  public final static int LS_OPTION_STARTNEWSHEET                  = 17; //
  public final static int LS_OPTION_ISSUEINDEX                     = 18; //
  public final static int LS_OPTION_PROJECTNAME                    = 100; // name of the original project (not page dependent)
  public final static int LS_OPTION_JOBNAME                        = 101; // name of the job (WindowTitle of LlPrintWithBoxStart()) (not page dependent)
  public final static int LS_OPTION_PRTNAME                        = 102; // deprecated!
  public final static int LS_OPTION_PRTDEVICE                      = 103; // printer device ("HP Laserjet 4L")
  public final static int LS_OPTION_PRTPORT                        = 104; // deprecated!
  public final static int LS_OPTION_USER                           = 105; // user string (not page dependent)
  public final static int LS_OPTION_CREATION                       = 106; // creation date (not page dependent)
  public final static int LS_OPTION_CREATIONAPP                    = 107; // creation application (not page dependent)
  public final static int LS_OPTION_CREATIONDLL                    = 108; // creation DLL (not page dependent)
  public final static int LS_OPTION_CREATIONUSER                   = 109; // creation user and computer name (not page dependent)
  public final static int LS_OPTION_FAXPARA_QUEUE                  = 110; // NYI
  public final static int LS_OPTION_FAXPARA_RECIPNAME              = 111; // NYI
  public final static int LS_OPTION_FAXPARA_RECIPNUMBER            = 112; // NYI
  public final static int LS_OPTION_FAXPARA_SENDERNAME             = 113; // NYI
  public final static int LS_OPTION_FAXPARA_SENDERCOMPANY          = 114; // NYI
  public final static int LS_OPTION_FAXPARA_SENDERDEPT             = 115; // NYI
  public final static int LS_OPTION_FAXPARA_SENDERBILLINGCODE      = 116; // NYI
  public final static int LS_OPTION_FAX_AVAILABLEQUEUES            = 118; // NYI, nPageIndex=1
  public final static int LS_OPTION_PRINTERALIASLIST               = 119; // alternative printer list (taken from project)
  public final static int LS_OPTION_PRTDEVMODE                     = 120; // r/o, DEVMODEW structure, to be used with the LlConvertXxxx API
  public final static int LS_OPTION_USED_PRTDEVICE                 = 121; // r/o, printer name that would actually be used
  public final static int LS_OPTION_USED_PRTDEVMODE                = 122; // r/o, DEVMODEW structure, to be used with the LlConvertXxxx API
  public final static int LS_OPTION_REGIONNAME 						= 123; // r/o
  public final static int LS_OPTION_CONBINATIONPRINT_PROJECT = 126; // r/o
  public final static int LS_OPTION_CONBINATIONPRINT_DESCRIPTION = 127; // r/o
  public final static int LS_PRINTFLAG_FIT                         = 0x00000001; //
  public final static int LS_PRINTFLAG_STACKEDCOPIES               = 0x00000002; // n times page1, n times page2, ... (else n times (page 1...x))
  public final static int LS_PRINTFLAG_TRYPRINTERCOPIES            = 0x00000004; // first try printer copies, then simulated ones...
  public final static int LS_PRINTFLAG_SHOWDIALOG                  = 0x00000008; //
  public final static int LS_PRINTFLAG_METER                       = 0x00000010; //
  public final static int LS_PRINTFLAG_ABORTABLEMETER              = 0x00000020; //
  public final static int LS_PRINTFLAG_METERMASK                   = 0x00000070; // allows 7 styles of abort boxes...
  public final static int LS_PRINTFLAG_USEDEFPRINTERIFNULL         = 0x00000080; //
  public final static int LS_PRINTFLAG_FAX                         = 0x00000100; //
  public final static int LS_PRINTFLAG_OVERRIDEPROJECTCOPYCOUNT = 0x00000200;
  public final static int LS_PRINTFLAG_IGNORE_PROJECT_TRAY = 0x00010000;
  public final static int LS_PRINTFLAG_IGNORE_PROJECT_DUPLEX = 0x00020000;
  public final static int LS_PRINTFLAG_IGNORE_PROJECT_COLLATION = 0x00040000;
  public final static int LS_PRINTFLAG_IGNORE_PROJECT_EXTRADATA = 0x00080000;
  public final static int LS_PRINTFLAG_IGNORE_JOBMARKER = 0x00100000; 
  public final static int LS_VIEWERCONTROL_QUERY_CHARWIDTH = 1; //sent in wParam using LsGetViewerControlDefaultMessage() (return: 1 for SBCS, 2 for Unicode)
  public final static int LS_VIEWERCONTROL_CLEAR                   = WM_USER+1; //
  public final static int LS_VIEWERCONTROL_SET_HANDLE_EX           = WM_USER+2; // wParam = HANDLE (NULL for RELEASE), lParam = internal struct handle;
  public final static int LS_VIEWERCONTROL_SET_HANDLE              = WM_USER+3; // wParam = HANDLE (NULL for RELEASE)
  public final static int LS_VIEWERCONTROLSETHANDLEFLAG_ADD        = 0x0100; //
  public final static int LS_VIEWERCONTROLSETHANDLEFLAG_DELETE_ON_CLOSE = 0x0200; //
  public final static int LS_VIEWERCONTROL_GET_HANDLE              = WM_USER+4; // lParam = HANDLE (NULL for none)
  public final static int LS_VIEWERCONTROL_SET_FILENAME            = WM_USER+5; // lParam = LPCTSTR pszFilename (NULL for RELEASE), wParam = options
  public final static int LS_STGFILEOPEN_READONLY                  = 0x00000000; //
  public final static int LS_STGFILEOPEN_READWRITE                 = 0x00000001; //
  public final static int LS_STGFILEOPEN_FORCE_NO_READWRITE        = 0x00000002; // never open read-write, even if formula elements are present!
  public final static int LS_STGFILEOPEN_DELETE_ON_CLOSE           = 0x00000004; //
  public final static int LS_STGFILEOPENFLAG_ADD                   = 0x00000100; //
  public final static int LS_VIEWERCONTROL_SET_OPTION              = WM_USER+6; //
  public final static int LS_OPTION_MESSAGE                        = 0; // communication message
  public final static int LS_OPTION_PRINTERASSIGNMENT              = 1; // set BEFORE setting the storage handle/filename!
  public final static int LS_PRNASSIGNMENT_USEDEFAULT              = 0x00000000; //
  public final static int LS_PRNASSIGNMENT_ASKPRINTERIFNEEDED      = 0x00000001; //
  public final static int LS_PRNASSIGNMENT_ASKPRINTERALWAYS        = 0x00000002; //
  public final static int LS_PRNASSIGNMENT_ALWAYSUSEDEFAULT        = 0x00000003; // default
  public final static int LS_OPTION_TOOLBAR                        = 2; // TRUE to force viewer control to display a toolbar, FALSE otherwise (def: FALSE)
  public final static int LS_OPTION_SKETCHBAR                      = 3; // TRUE to force viewer control to display a sketch bar (def: TRUE)
  public final static int LS_OPTION_SKETCHBARWIDTH                 = 4; // TRUE to force viewer control to display a sketch bar (def: 50)
  public final static int LS_OPTION_TOOLBARSTYLE                   = 5; // default: LS_OPTION_TOOLBARSTYLE_STANDARD, set BEFORE LS_OPTION_TOOLBAR to TRUE!
  public final static int LS_OPTION_TOOLBARSTYLE_STANDARD          = 0; // OFFICE97 alike style
  public final static int LS_OPTION_TOOLBARSTYLE_OFFICEXP          = 1; // DOTNET/OFFICE_XP alike style
  public final static int LS_OPTION_TOOLBARSTYLE_OFFICE2003        = 2; //
  public final static int LS_OPTION_TOOLBARSTYLEMASK               = 0x0f; //
  public final static int LS_OPTION_TOOLBARSTYLEFLAG_GRADIENT      = 0x80; // starting with XP, use gradient style
  public final static int LS_OPTION_CODEPAGE                       = 7; // lParam = codepage for MBCS aware string operations - set it if the system default is not applicable
  public final static int LS_OPTION_SAVEASFILEPATH                 = 8; // w/o, lParam = "SaveAs" default filename (LPCTSTR!)
  public final static int LS_OPTION_USERDATA                       = 9; // for LS_VIEWERCONTROL_SET_NTFYCALLBACK
  public final static int LS_OPTION_BGCOLOR                        = 10; // background color
  public final static int LS_OPTION_ASYNC_DOWNLOAD                 = 11; // download is ASYNC (def: TRUE)
  public final static int LS_OPTION_LANGUAGE                       = 12; // CMBTLANG_xxx or -1 for ThreadLocale
  public final static int LS_OPTION_ASSUME_TEMPFILE                = 13; // viewer assumes that the LL file is a temp file, so data can not be saved into it
  public final static int LS_OPTION_IOLECLIENTSITE                 = 14; // internal use
  public final static int LS_OPTION_TOOLTIPS                       = 15; // lParam = flag value
  public final static int LS_OPTION_AUTOSAVE                       = 16; // lParam = (BOOL)bAutoSave
  public final static int LS_OPTION_CHANGEDFLAG                    = 17; // lParam = flag value
  public final static int LS_OPTION_SHOW_UNPRINTABLE_AREA          = 18; // lParam = flags, default: TRUE
  public final static int LS_OPTION_NOUIRESET                      = 19; // lParam = flags, default: TRUE
  public final static int LS_OPTION_NAVIGATIONBAR                  = 20; // TRUE to force viewer control to display a sketch bar (def: TRUE)
  public final static int LS_OPTION_NAVIGATIONBARWIDTH             = 21; // TRUE to force viewer control to display a sketch bar (def: 50)
  public final static int LS_OPTION_IN_PREVIEWPANE                 = 22; // TRUE to disable unneeded message boxes
  public final static int LS_OPTION_IN_LLVIEWER                    = 23; // internal
  public final static int LS_OPTION_TABBARSTYLE                    = 24; //
  public final static int LS_OPTION_TABBARSTYLE_STANDARD           = 0; //
  public final static int LS_OPTION_TABBARSTYLE_OFFICEXP           = 1; //
  public final static int LS_OPTION_TABBARSTYLE_OFFICE2003         = 2; //
  public final static int LS_OPTION_DESIGNERPREVIEW                = 25; //
  public final static int LS_OPTION_MOUSEMODE = 26;
  public final static int LS_OPTION_MOUSEMODE_MOVE = 1;
  public final static int LS_OPTION_MOUSEMODE_ZOOM = 2;
  public final static int LS_OPTION_MOUSEMODE_SELECT = 3;
  public final static int LS_OPTION_MOUSEMODE_WAIT = 4;
  public final static int LS_OPTION_ALLOW_RBUTTONUSAGE = 27; // default: true
  public final static int LS_OPTION_TOOLBGCOLOR = 28;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_TYPE = 29;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_TYPE_AREAFILL_SYSTEM = 0; // system theming (fixed colors, fixed rounding)
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_TYPE_AREAFILL_WIN7ALIKE = 1; // like Windows 7 theming (fixed colors, fixed rounding)
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_TYPE_AREAFILL = 2;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_TYPE_FRAME = 3;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_HEIGHT_PX = 30; // default: 5
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_WIDTH_PX = 31; // default: 5
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_FILLCOLOR_ARGB = 32;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_FILLCOLORHIGHLIGHTED_ARGB = 33;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_FRAMECOLOR_ARGB = 34;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_FRAMECOLORHIGHLIGHTED_ARGB = 35;
  public final static int LS_OPTION_PAGEITEM_SELECTED_ITEM_FRAME_ROUNDED_CORNER_PX = 36; // default: 5
  public final static int LS_OPTION_PAGEITEM_DROPSHADOW = 37;
  public final static int LS_OPTION_PAGEITEM_DROPSHADOW_NONE = 0;
  public final static int LS_OPTION_PAGEITEM_DROPSHADOW_ONLY_NONSELECTED = 1;
  public final static int LS_OPTION_PAGEITEM_PAGENUMBER = 38; // default: true (>=LS24)
  public final static int LS_OPTION_SKETCHBAR_BGCOLOR = 39; // default: ::GetSysColor(COLOR_WINDOW)
  public final static int LS_VIEWERCONTROL_GET_OPTION              = WM_USER+7; //
  public final static int LS_VIEWERCONTROL_QUERY_ENDSESSION        = WM_USER+8; //
  public final static int LS_VIEWERCONTROL_GET_ZOOM                = WM_USER+9; //
  public final static int LS_VIEWERCONTROL_SET_ZOOM                = WM_USER+10; // wParam = factor (lParam = 1 if in percent)
  public final static int LS_VIEWERCONTROL_GET_ZOOMED              = WM_USER+11; // TRUE if zoomed
  public final static int LS_VIEWERCONTROL_POP_ZOOM                = WM_USER+12; //
  public final static int LS_VIEWERCONTROL_RESET_ZOOM              = WM_USER+13; //
  public final static int LS_VIEWERCONTROL_SET_ZOOM_TWICE          = WM_USER+14; //
  public final static int LS_VIEWERCONTROL_SET_PAGE                = WM_USER+20; // wParam = page# (0..n-1)
  public final static int LS_VIEWERCONTROL_GET_PAGE                = WM_USER+21; //
  public final static int LS_VIEWERCONTROL_GET_PAGECOUNT           = WM_USER+22; //
  public final static int LS_VIEWERCONTROL_GET_PAGECOUNT_FAXPAGES  = WM_USER+23; //
  public final static int LS_VIEWERCONTROL_GET_JOB                 = WM_USER+24; //
  public final static int LS_VIEWERCONTROL_GET_JOBPAGEINDEX        = WM_USER+25; //
  public final static int LS_VIEWERCONTROL_GET_METAFILE            = WM_USER+26; // wParam = page#, for IMMEDIATE use (will be released by LS DLL at some undefined time!)
  public final static int LS_VIEWERCONTROL_GET_ENABLED             = WM_USER+27; // wParam = ID
  public final static int LS_VCITEM_SEARCH_FIRST                   = 0; //
  public final static int LS_VCITEM_SEARCH_NEXT                    = 1; //
  public final static int LS_VCITEM_SEARCH_PREV                    = 2; //
  public final static int LS_VCITEM_SEARCHFLAG_CASEINSENSITIVE     = 0x8000; //
  public final static int LS_VCITEM_SAVE_AS_FILE                   = 3; //
  public final static int LS_VCITEM_SEND_AS_MAIL                   = 4; //
  public final static int LS_VCITEM_SEND_AS_FAX                    = 5; //
  public final static int LS_VCITEM_PRINT_ONE                      = 6; //
  public final static int LS_VCITEM_PRINT_ALL                      = 7; //
  public final static int LS_VCITEM_PAGENUMBER                     = 8; //
  public final static int LS_VCITEM_ZOOM                           = 9; //
  public final static int LS_VCITEM_THEATERMODE                    = 10; //
  public final static int LS_VCITEM_PREVSTG                        = 11; //
  public final static int LS_VCITEM_NEXTSTG                        = 12; //
  public final static int LS_VCITEM_SEARCH_DONE = 13;
  public final static int LS_VCITEM_FIRSTPAGE = 14;
  public final static int LS_VCITEM_NEXTPAGE = 15;
  public final static int LS_VCITEM_PREVIOUSPAGE = 16;
  public final static int LS_VCITEM_LASTPAGE = 17;
  public final static int LS_VCITEM_MOUSEMODE_MOVE = 18;
  public final static int LS_VCITEM_MOUSEMODE_ZOOM = 19;
  public final static int LS_VCITEM_MOUSEMODE_SELECT = 20;
  public final static int LS_VIEWERCONTROL_GET_SEARCHSTATE         = WM_USER+28; // returns TRUE if search in progress
  public final static int LS_VIEWERCONTROL_SEARCH                  = WM_USER+29; // wParam = BOOL(bCaseSens), lParam=SearchText (NULL to stop)
  public final static int LS_VIEWERCONTROL_GET_ENABLED_SEARCHPREV  = WM_USER+30; //
  public final static int LS_VIEWERCONTROL_PRINT_CURRENT           = WM_USER+31; // wParam = 0 (default printer), 1 (with printer selection)
  public final static int LS_VIEWERCONTROL_PRINT_ALL               = WM_USER+32; // wParam = 0 (default printer), 1 (with printer selection)
  public final static int LS_VIEWERCONTROL_PRINT_TO_FAX            = WM_USER+33; //
  public final static int LS_VIEWERCONTROL_UPDATE_TOOLBAR          = WM_USER+35; // if LS_OPTION_TOOLBAR is TRUE
  public final static int LS_VIEWERCONTROL_GET_TOOLBAR             = WM_USER+36; // if LS_OPTION_TOOLBAR is TRUE, returns window handle of toolbar
  public final static int LS_VIEWERCONTROL_SAVE_TO_FILE            = WM_USER+37; //
  public final static int LS_VIEWERCONTROL_SEND_AS_MAIL            = WM_USER+39; //
  public final static int LS_VIEWERCONTROL_SET_OPTIONSTR           = WM_USER+40; // see docs, wParam = (LPCTSTR)key, lParam = (LPCTSTR)value
  public final static int LS_VIEWERCONTROL_GET_OPTIONSTR           = WM_USER+41; // see docs, wParam = (LPCTSTR)key, lParam = (LPCTSTR)value
  public final static int LS_VIEWERCONTROL_GET_OPTIONSTRLEN        = WM_USER+42; // see docs, wParam = (LPCTSTR)key (returns size in TCHARs)
  public final static int LS_VIEWERCONTROL_SET_NTFYCALLBACK        = WM_USER+43; // lParam = LRESULT ( WINAPI fn* )(UINT nMsg, LPARAM lParam, UINT nUserParameter);
  public final static int LS_VIEWERCONTROL_GET_NTFYCALLBACK        = WM_USER+44; // LRESULT ( WINAPI fn* )(UINT nMsg, LPARAM lParam, UINT nUserParameter);
  public final static int LS_VIEWERCONTROL_GET_TOOLBARBUTTONSTATE  = WM_USER+45; // wParam=nID -> -1=hidden, 1=enabled, 2=disabled (only when toobar present, to sync menu state)
  public final static int LS_VIEWERCONTROL_SET_FOCUS               = WM_USER+46; //
  public final static int LS_VCSF_PREVIEW                          = 1; //
  public final static int LS_VCSF_SKETCHLIST                       = 2; //
  public final static int LS_VCSF_TOC                              = 3; //
  public final static int LS_VIEWERCONTROL_ADDTOOLBARITEM          = WM_USER+47; //
  public final static int LS_VIEWERCONTROL_INTERNAL_CHECKERRORLIST = WM_USER+48; //
  public final static int LS_VIEWERCONTROL_SET_THEATERMODE         = WM_USER+49; // 0=non-theater, 1=with frame, 2=without frame
  public final static int LS_VIEWERCONTROL_SET_THEATERFLIPDELAY    = WM_USER+50; // ms for each page
  public final static int LS_VIEWERCONTROL_SET_THEATERFLIPMODE     = WM_USER+51; // wParam = mode
  public final static int LS_VCTFM_NONE                            = 0; //
  public final static int LS_VCTFM_LINEAR                          = 1; // lParam = (LPCTSTR)ProgID
  public final static int LS_VCTFM_FADE                            = 2; //
  public final static int LS_VCTFM_WHEEL                           = 3; //
  public final static int LS_VIEWERCONTROL_SELECT_THEATERXFORM     = WM_USER+52; //
  public final static int LS_VIEWERCONTROL_NTFY_PRVFSCHANGED       = WM_USER+53; // wParam = ILLPreviewFileSystemChangeNotifier::enPrvFSChange..
  public final static int LS_VIEWERCONTROL_SET_PROGRESSINFO        = WM_USER+54; // wParam = nPercentage (-1=finished...), lParam = (LPCTSTR)sText
  public final static int LS_VIEWERCONTROL_GET_FILENAME            = WM_USER+55; // lParam = LPTSTR pszFilename, wParam = sizeofTSTR(pszBuffer). Returns size needed if NULL filename
  public final static int LS_VIEWERCONTROL_QUERY_PRVFS_COMPLETE    = WM_USER+56; // indicates whether the STGSYS file is complete (1=complete, 2=finished, but incomplete)
  public final static int LS_VIEWERCONTROL_ONSIZEMOVE              = WM_USER+57; // wParam = 0 (ENTER), 1 (EXIT)
  public final static int LS_VIEWERCONTROL_NTFY_SHOW               = WM_USER+58; // internal use
  public final static int LS_VIEWERCONTROL_GET_IDEVICEINFO         = WM_USER+59; // internal use
  public final static int LS_VIEWERCONTROL_REMOVEFAILURETOOLTIPS   = WM_USER+60; // internal use
  public final static int LS_VIEWERCONTROL_SET_LLNTFYSINK          = WM_USER+61; // internal use
  public final static int LS_VIEWERCONTROL_OPEN_PREVSTG            = WM_USER+62; //
  public final static int LS_VIEWERCONTROL_OPEN_NEXTSTG            = WM_USER+63; //
  public final static int LS_VIEWERCONTROL_GET_THEATERSTATE = WM_USER+64; // returns TRUE if in theater mode
  public final static int LS_VIEWERCONTROL_SET_PROGRESSINFO_INTERNAL = WM_USER+65;
  public final static int LS_VIEWERCONTROL_GET_THIS = WM_USER+67; // internal
  public final static int LS_VIEWERCONTROL_SEARCH_LINK = WM_USER+68; // wParam = LS_VCITEM_GOTO_LINK_ enum, lParam=SearchText in control's charset flavour (ANSI/UNICODE) (NULL or empty to stop)
  public final static int LS_SEARCH_LINK_HYPERLINK = 0;
  public final static int LS_VIEWERCONTROL_QUERY_DRILLDOWN_ACTIVE = WM_USER+69; // count of active drilldown jobs of visible storage - negative if error
  public final static int LS_VIEWERCONTROL_CMND_ABORT_DRILLDOWN_JOBS = WM_USER+70;
  public final static int LS_VIEWERCONTROL_STORAGE_CONTAINS_EXPORTFILE = WM_USER+71; // lParam = (LPCTSTR)format, returns 1 if yes, 0 if no, negative if error
  public final static int LS_VIEWERCONTROL_SELECTION_COPY = WM_USER+72; // lParam == &scLSSelectionOptions (null, or _pvText == null -> to clipboard)
  public final static int LS_VIEWERCONTROL_GET_HAS_SELECTION = WM_USER+73;
  public final static int LS_VIEWERCONTROL_SELECTION_SELECT = WM_USER+74; // wParam = page index#, -1 for all; lParam = 0 (select only this), 1 (add to selection)
  public final static int LS_VIEWERCONTROL_NTFY_PAGELOADED = 1; // lParam = page#
  public final static int LS_VIEWERCONTROL_NTFY_UPDATETOOLBAR = 2; // called when control does NOT have an own toolbar. lParam points to an ILSViewerToolbarInfoProxy interface
  public final static int LS_VIEWERCONTROL_NTFY_PRINT_START = 3; // lParam = &scViewerControlPrintData, return 1 to abort print
  public final static int LS_VIEWERCONTROL_NTFY_PRINT_PAGE = 4; // lParam = &scViewerControlPrintData, return 1 to abort loop
  public final static int LS_VIEWERCONTROL_NTFY_PRINT_END = 5; // lParam = &scViewerControlPrintData
  public final static int LS_VIEWERCONTROL_NTFY_TOOLBARUPDATE = 6; // lParam = toolbar handle, called when control has an own toolbar
  public final static int LS_VIEWERCONTROL_NTFY_EXITBTNPRESSED = 7;
  public final static int LS_VIEWERCONTROL_NTFY_BTNPRESSED = 8; // lParam = control ID
  public final static int LS_VIEWERCONTROL_QUEST_BTNSTATE = 9; // lParam = control ID, -1 to hide, 1 to show, 2 to disable (0 to use default)
  public final static int LS_VIEWERCONTROL_NTFY_ERROR = 10; // lParam = &scVCError. Return != 0 to suppress error mbox from control.
  public final static int LS_VIEWERCONTROL_NTFY_MAIL_SENT = 11; // lParam = Stream* of EML mail contents
  public final static int LS_VIEWERCONTROL_NTFY_DOWNLOADFINISHED = 12; // lParam = 0 (failed), 1 (ok)
  public final static int LS_VIEWERCONTROL_NTFY_KEYBOARDMESSAGE = 13; // lParam = const MSG*. Return TRUE if message should be taken out of the input queue
  public final static int LS_VIEWERCONTROL_NTFY_VIEWCHANGED = 14;
  public final static int LS_VIEWERCONTROL_CMND_SAVEDATA = 15; // return: 0 = OK, -1 = failure, 1 = save in LL file too [event used only if AUTOSAVE is TRUE]
  public final static int LS_VIEWERCONTROL_NTFY_DATACHANGED = 16;
  public final static int LS_VIEWERCONTROL_NTFY_PROGRESS = 17; // lParam = percentage (-1=finished). return: 1 if internal progress bar shall be suppressed
  public final static int LS_VIEWERCONTROL_QUEST_SUPPORTCONTINUATION = 18; // return: 1 if continuation button () should be displayed
  public final static int LS_VIEWERCONTROL_CMND_CONTINUE = 19; // continue report!
  public final static int LS_VIEWERCONTROL_NTFY_VIEWERDRILLDOWN = 20;
  public final static int LS_VIEWERCONTROL_QUEST_DRILLDOWNSUPPORT = 21; // 1 to allow (default), 0 to deny (if provider cannot handle multiple threads or so)
  public final static int LS_VIEWERCONTROL_QUEST_HOST_WANTS_KEY = 22; // lParam: MSG-structure (message = WM_KEYDOWN, WM_KEYUP, WM_SYSKEYDOWN, WM_SYSKEYUP, WM_CHAR), wParam = key code, lParam = snoop (0), action (1)
  public final static int LS_VIEWERCONTROL_INTERNALSYNC = 23; // reserved, internal
  public final static int LS_VIEWERCONTROL_NTFY_RP_REALDATAJOB = 24;
  public final static int LS_VIEWERCONTROL_QUEST_RP_REALDATAJOBSUPPORT = 25; // 1 to allow (default), 0 to deny (if provider cannot handle multiple threads or so)
  public final static int LS_VIEWERCONTROL_QUEST_PROJECTFILENAME = 26; // reserved, internal
  public final static int LS_VIEWERCONTROL_QUEST_ORGPROJECTFILENAME = 27; // reserved, internal
  public final static int LS_VIEWERCONTROL_NTFY_EXPANDABLEREGIONSJOB = 28;
  public final static int LS_VIEWERCONTROL_NTFY_INTERACTIVESORTINGJOB = 30;
  public final static int LS_VIEWERCONTROL_QUEST_ANYREALDATAJOBSUPPORT = 32; // 1 to allow (default), 0 to deny (if provider cannot handle multiple threads or so)
  public final static int LS_VIEWERCONTROL_NTFY_HYPERLINK = 33; // 1 to tell viewer it has been processed
  public final static int LS_VIEWERCONTROL_NTFY_ZOOMCHANGED = 34; // triggered whenever the zoom factor was updated
  public final static int LS_VIEWERCONTROL_NTFY_ACTIONRESULT = 35; // lParam = &scLSNtfyActionResult
  public final static int LS_VIEWERCONTROL_NTFY_RESETSEARCHSTATE = 36; //reserved, internal
  public final static int LS_VIEWERCONTROL_NTFY_SELECTION_CHANGED = 37;
  public final static int LS_VIEWERCONTROL_OPEN_STORAGE_IN_NEW_WINDOW = 32; // lParam = &scOpenStorageInNewWindow. Reply with 1 if done.
  public final static int LL_NTFY_VIEWERDRILLDOWN = 67; // defined in LL !!! reserved constant!
  public final static int LS_MAILCONFIG_GLOBAL = 0x0001;
  public final static int LS_MAILCONFIG_USER = 0x0002;
  public final static int LS_MAILCONFIG_PROVIDER = 0x0004;
  public final static int LS_DIO_CHECKBOX = 0;
  public final static int LS_DIO_PUSHBUTTON = 1;
  public final static int LS_DIO_FLAG_READONLY = 0x0001;
  public final static int LS_GOTFG_FLAG_REORDER = 0x00000001;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_NONE = 0x0000;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_NEW_WINDOW = 0x0001;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_NAVIGATION = 0x0002;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_JAVA = 0x0004;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_SCRIPTING = 0x0008;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_ACTIVEX = 0x0010;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_ONLINE = 0x0020;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_BROWSERCONTEXTMENU = 0x0040;
  public final static int LSMAILVIEW_HTMLRIGHT_ALLOW_PRINT = 0x0080;
  public final static int LS_CONVERT_IS_TO_JPEGFILE = 0;
  public final static int LS_CONVERT_IS_TO_DIBFILE  = 1;
  public final static int LS_CONVERT_IS_TO_EMRSTRETCHDIBITS = 2;
  public final static int LS_CONVERT_IS_TO_PNGFILE = 3;
  public final static int LS_CONVERT_IS_TO_PNG_OR_JPEG_FILE = 4;
  public final static int LS_CONVERT_IS_TO_EMRSTRETCHDIBITS_OPTIMIZED = 5;
  public final static int LS_CONVERT_IS_TYPEMASK = 0x0000000f;
  public final static int LS_CONVERT_IS_NOPERPIXELALPHA = 0x00000010;
  public final static int LS_CONVERT_IS_SRCCOPY = 0x00000020;
  public final static int LS_CONVERT_IS_NO_JPEGCONVERSION = 0x00000040; // for PDF Conversion (PDF export handles these itself)
  public final static int LS_STGPRINTEX_OPTION_FORCE_SIMPLEX = 0x00000001;
  public final static int LS_STGPRINTEX_OPTION_FORCE_DUPLEX_VERT = 0x00000002;
  public final static int LS_STGPRINTEX_OPTION_FORCE_DUPLEX_HORZ = 0x00000003;
  public final static int LS_STGPRINTEX_OPTIONMASK_DUPLEX = 0x00000003;
  public final static int LS_STGPRINTEX_OPTION_FORCE_PHYSPAGE = 0x00000004;
  public final static int LS_STGPRINTEX_OPTION_FORCE_LOGPAGE = 0x00000008;
  public final static int LS_STGPRINTEX_OPTIONMASK_PAGEAREA = 0x0000000C;
  
  private CmbtLS2632 LS26_32 = null;
  private CmbtLS2664 LS26_64 = null;
  
  public long LlStgsysStorageOpen
	(
		final String         Filename,
		final String         TempPath,
		boolean              ReadOnly,
		boolean              OneJobTranslation
	)
	{
		if(LS26_32 != null)
		{
			return LS26_32.LlStgsysStorageOpen(Filename, TempPath, ReadOnly, OneJobTranslation);
		}
		else if(LS26_64 != null)
		{
			return LS26_64.LlStgsysStorageOpen(Filename, TempPath, ReadOnly, OneJobTranslation);
		}
		else
		{
			throw new UnsupportedOperationException("Platform not supported by List & Label");
		}
	}
  
  public void LlStgsysStorageClose
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  LS26_32.LlStgsysStorageClose((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  LS26_64.LlStgsysStorageClose(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetAPIVersion
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetAPIVersion((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetAPIVersion(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetFileVersion
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetFileVersion((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetFileVersion(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetFilename
	(
	long				Stg,
	int                 Job,
	int                 File,
	StringBuffer        Buffer
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetFilename((int)Stg, Job, File, Buffer);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetFilename(Stg, Job, File, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetJobCount
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetJobCount((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetJobCount(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysSetJob
	(
	long                 Stg,
	int                  Job
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysSetJob((int)Stg, Job);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysSetJob(Stg, Job);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetJob
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetJob((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetJob(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetPageCount
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetPageCount((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetPageCount(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetJobOptionValue
	(
	long                 Stg,
	int                  Option
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetJobOptionValue((int)Stg, Option);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetJobOptionValue(Stg, Option);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetPageOptionValue
	(
	long                 Stg,
	int                  PageIndex,
	int                  Option
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetPageOptionValue((int)Stg, PageIndex, Option);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetPageOptionValue(Stg, PageIndex, Option);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetPageOptionString
	(
	long                 Stg,
	int                  PageIndex,
	int                  Option,
	StringBuffer         Buffer
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetPageOptionString((int)Stg, PageIndex, Option, Buffer);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetPageOptionString(Stg, PageIndex, Option, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysSetPageOptionString
	(
	long                 Stg,
	int                  PageIndex,
	int                  Option,
	final String         Buffer
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysSetPageOptionString((int)Stg, PageIndex, Option, Buffer);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysSetPageOptionString(Stg, PageIndex, Option, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysAppend
	(
	long                  Stg,
	long                  StgToAppend
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysAppend((int)Stg, (int)StgToAppend);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysAppend(Stg, StgToAppend);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysDeleteJob
	(
	long                 Stg,
	int                  PageIndex
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysDeleteJob((int)Stg, PageIndex);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysDeleteJob(Stg, PageIndex);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysDeletePage
	(
	long                 Stg,
	int                  PageIndex
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysDeletePage((int)Stg, PageIndex);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysDeletePage(Stg, PageIndex);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LlStgsysGetPageMetafile
	(
	long                 Stg,
	int                  PageIndex
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetPageMetafile((int)Stg, PageIndex);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetPageMetafile(Stg, PageIndex);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysDestroyMetafile
	(
	long                  MF
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysDestroyMetafile((int)MF);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysDestroyMetafile(MF);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetLastError
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetLastError((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetLastError(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysDeleteFiles
	(
	long                  Stg
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysDeleteFiles((int)Stg);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysDeleteFiles(Stg);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysPrint
	(
	long                Stg,
	final String		PrinterName1,
	final String		PrinterName2,
	int					StartPageIndex,
	int					EndPageIndex,
	int					Copies,
	int					Flags,
	final String		Message,
	long				WndParent
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysPrint((int)Stg, PrinterName1, PrinterName2, StartPageIndex, EndPageIndex, Copies, Flags, Message, (int)WndParent);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysPrint(Stg, PrinterName1, PrinterName2, StartPageIndex, EndPageIndex, Copies, Flags, Message, WndParent);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysStoragePrint
	(
	final String         Filename,
	final String         TempPath,
	final String         PrinterName1,
	final String         PrinterName2,
	int                  StartPageIndex,
	int                  EndPageIndex,
	int                  Copies,
	int                  Flags,
	final String         Message,
	long                 WndParent
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysStoragePrint(Filename, TempPath, PrinterName1, PrinterName2, StartPageIndex, EndPageIndex, Copies, Flags, Message, (int)WndParent);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysStoragePrint(Filename, TempPath, PrinterName1, PrinterName2, StartPageIndex, EndPageIndex, Copies, Flags, Message, WndParent);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LsSetDebug
	(
	boolean              On
	)
	{
	  if(LS26_32 != null)
	  {
		  LS26_32.LsSetDebug(On);
	  }
	  else if(LS26_64 != null)
	  {
		  LS26_64.LsSetDebug(On);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public final String LsGetViewerControlClassName
	(
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsGetViewerControlClassName();
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsGetViewerControlClassName();
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsGetViewerControlDefaultMessage
	(
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsGetViewerControlDefaultMessage();
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsGetViewerControlDefaultMessage();
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsCreateViewerControlOverParent
	(
	long				 Stg,
	long                 ParentControl
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsCreateViewerControlOverParent((int)Stg, (int)ParentControl);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsCreateViewerControlOverParent(Stg, ParentControl);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysGetJobOptionStringEx
	(
	long                 Stg,
	final String         Key,
	StringBuffer         Buffer
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysGetJobOptionStringEx((int)Stg, Key, Buffer);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysGetJobOptionStringEx(Stg, Key, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysSetJobOptionStringEx
	(
	long                 Stg,
	final String         Key,
	final String         Buffer
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysSetJobOptionStringEx((int)Stg, Key, Buffer);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysSetJobOptionStringEx(Stg, Key, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LsConversionJobOpen
	(
	long                 WndParent,
	int                  Language,
	final String         Format
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsConversionJobOpen((int)WndParent, Language, Format);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsConversionJobOpen(WndParent, Language, Format);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsConversionJobClose
	(
	long                  CnvJob
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsConversionJobClose((int)CnvJob);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsConversionJobClose(CnvJob);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsConversionConfigurationDlg
	(
	long                 CnvJob,
	long                 WndParent
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsConversionConfigurationDlg((int)CnvJob, (int)WndParent);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsConversionConfigurationDlg(CnvJob, WndParent);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsConversionSetOptionString
	(
	long                 CnvJob,
	final String         Key,
	final String         Data
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsConversionSetOptionString((int)CnvJob, Key, Data);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsConversionSetOptionString(CnvJob, Key, Data);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsConversionGetOptionString
	(
	long                 CnvJob,
	final String         Key,
	StringBuffer         Buffer
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsConversionGetOptionString((int)CnvJob, Key, Buffer);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsConversionGetOptionString(CnvJob, Key, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsConversionConvertEMFToFile
	(
	long                 CnvJob,
	long                 EMF,
	final String         Filename
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsConversionConvertEMFToFile((int)CnvJob, (int)EMF, Filename);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsConversionConvertEMFToFile(CnvJob, EMF, Filename);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsConversionConvertStgToFile
	(
	long                CnvJob,
	long                Stg,
	final String		Filename
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsConversionConvertStgToFile((int)CnvJob, (int)Stg, Filename);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsConversionConvertStgToFile(CnvJob, Stg, Filename);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysStorageConvert
	(
	final String         StgFilename,
	final String         DstFilename,
	final String         Format
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysStorageConvert(StgFilename, DstFilename, Format);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysStorageConvert(StgFilename, DstFilename, Format);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LlStgsysConvert
	(
	long                 Stg,
	final String         DstFilename,
	final String         Format
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LlStgsysConvert((int)Stg, DstFilename, Format);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LlStgsysConvert(Stg, DstFilename, Format);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsMailConfigurationDialog
	(
	long                 WndParent,
	final String         Subkey,
	int                  Flags,
	int                  Language
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsMailConfigurationDialog((int)WndParent, Subkey, Flags, Language);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsMailConfigurationDialog(WndParent, Subkey, Flags, Language);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LsMailJobOpen
	(
	int                  Language
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsMailJobOpen(Language);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsMailJobOpen(Language);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsMailJobClose
	(
	long                  Job
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsMailJobClose((int)Job);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsMailJobClose(Job);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsMailSetOptionString
	(
	long                 Job,
	final String         Key,
	final String         Value
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsMailSetOptionString((int)Job, Key, Value);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsMailSetOptionString(Job, Key, Value);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsMailGetOptionString
	(
	long                 Job,
	final String         Key,
	StringBuffer         Buffer
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsMailGetOptionString((int)Job, Key, Buffer);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsMailGetOptionString(Job, Key, Buffer);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsMailSendFile
	(
	long                  Job,
	long                  WndParent
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsMailSendFile((int)Job, (int)WndParent);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsMailSendFile(Job, WndParent);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsProfileStart
	(
	long                 Thread,
	final String         Descr,
	final String         Filename,
	int                  TicksMS
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsProfileStart((int)Thread, Descr, Filename, TicksMS);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsProfileStart(Thread, Descr, Filename, TicksMS);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LsProfileEnd
	(
	long                  Thread
	)
	{
	  if(LS26_32 != null)
	  {
		  LS26_32.LsProfileEnd((int)Thread);
	  }
	  else if(LS26_64 != null)
	  {
		  LS26_64.LsProfileEnd(Thread);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsMailView
	(
	long                 WndParent,
	final String         MailFile,
	int                  Rights,
	int                  Language
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsMailView((int)WndParent, MailFile, Rights, Language);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsMailView(WndParent, MailFile, Rights, Language);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsInternalCreateViewerControlOverParent13
	(
	long                 ParentControl,
	int                  Flags
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsInternalCreateViewerControlOverParent13((int)ParentControl, Flags);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsInternalCreateViewerControlOverParent13(ParentControl, Flags);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public long LsInternalGetViewerControlFromParent13
	(
	long                 ParentControl
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsInternalGetViewerControlFromParent13((int)ParentControl);
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsInternalGetViewerControlFromParent13(ParentControl);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public void LsSetDlgboxMode
	(
	int                  Mode
	)
	{
	  if(LS26_32 != null)
	  {
		  LS26_32.LsSetDlgboxMode(Mode);
	  }
	  else if(LS26_64 != null)
	  {
		  LS26_64.LsSetDlgboxMode(Mode);
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public int LsGetDlgboxMode
	(
	)
	{
	  if(LS26_32 != null)
	  {
		  return LS26_32.LsGetDlgboxMode();
	  }
	  else if(LS26_64 != null)
	  {
		  return LS26_64.LsGetDlgboxMode();
	  }
	  else
	  {
		  throw new UnsupportedOperationException("Platform not supported by List & Label");
	  }
	}

  public CmbtLS26()
  {
	String vmArch = System.getProperty("sun.arch.data.model");
	if(vmArch.compareTo("32") == 0)
	{
		LS26_32 = new CmbtLS2632();
	}
	else if(vmArch.compareTo("64") == 0)
	{
		LS26_64 = new CmbtLS2664();
	}
	else
	{
		throw new UnsupportedOperationException("Platform not supported by List & Label");
	}
  }
};
