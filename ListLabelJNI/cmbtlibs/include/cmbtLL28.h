/**** C/C++ constants and function definitions for LL28.DLL ****/
/****  (c) combit GmbH ****/
/****  [build of 2022-07-25 09:07:18] ****/

#ifndef _LL28_H /* include header only once */
#define _LL28_H

#if !defined(_LL28_DONT_INCLUDE_OLE2_H) && !defined(_RC_INVOKED_) && !defined(RC_INVOKED)
  #if defined(WIN32)
    #include <ole2.h>
  #endif
#endif

#ifndef EXPLICIT_TYPES
  #define EXPLICIT_TYPES
  #ifndef INT
    typedef int INT; /* you should comment this out if you have any problems with INT */
  #endif
  #ifndef CHAR
    typedef char CHAR; /* you should comment this out if you have any problems with CHAR */
  #endif
  typedef unsigned char UINT8;
  typedef unsigned short UINT16;
  typedef signed char INT8;
  typedef signed short INT16;
  #ifndef _BASETSD_H_ /* MSVC6 defines these itself in basetsd.h */
    typedef unsigned long UINT32;
    typedef signed long INT32;
  #endif
#endif

#if defined(WIN32) && (!defined(__BORLANDC__) || __BORLANDC__ >= 0x450) && !defined(_RC_INVOKED_) && !defined(RC_INVOKED)
 #include <tchar.h>    /* for wide char support - comment this out if you have no 'tchar.h' */
#endif

#ifndef DLLPROC
  #define DLLPROC WINAPI
#endif
#ifndef DLLCPROC
  #define DLLCPROC WINAPIV
#endif

#if defined(__COMBIT__) && defined(_LL_)
  #define CMBT_LL_WINAPI // __declspec(dllexport)
#else
  #define CMBT_LL_WINAPI DECLSPEC_IMPORT
#endif
#if defined(__COMBIT__) && defined(__lib_)
	#pragma message("WRN: including header file in library. Is that intentional?")
#endif

#ifndef CMBTLANG_DEFAULT
 #define CMBTLANG_DEFAULT    -1
 #define CMBTLANG_GERMAN      0
 #define CMBTLANG_ENGLISH     1
 #define CMBTLANG_ARABIC      2
 #define CMBTLANG_AFRIKAANS   3
 #define CMBTLANG_ALBANIAN    4
 #define CMBTLANG_BASQUE      5
 #define CMBTLANG_BULGARIAN   6
 #define CMBTLANG_BYELORUSSIAN 7
 #define CMBTLANG_CATALAN     8
 #define CMBTLANG_CHINESE     9
 #define CMBTLANG_CROATIAN    10
 #define CMBTLANG_CZECH       11
 #define CMBTLANG_DANISH      12
 #define CMBTLANG_DUTCH       13
 #define CMBTLANG_ESTONIAN    14
 #define CMBTLANG_FAEROESE    15
 #define CMBTLANG_FARSI       16
 #define CMBTLANG_FINNISH     17
 #define CMBTLANG_FRENCH      18
 #define CMBTLANG_GREEK       19
 #define CMBTLANG_HEBREW      20
 #define CMBTLANG_HUNGARIAN   21
 #define CMBTLANG_ICELANDIC   22
 #define CMBTLANG_INDONESIAN  23
 #define CMBTLANG_ITALIAN     24
 #define CMBTLANG_JAPANESE    25
 #define CMBTLANG_KOREAN      26
 #define CMBTLANG_LATVIAN     27
 #define CMBTLANG_LITHUANIAN  28
 #define CMBTLANG_NORWEGIAN   29
 #define CMBTLANG_POLISH      30
 #define CMBTLANG_PORTUGUESE  31
 #define CMBTLANG_ROMANIAN    32
 #define CMBTLANG_RUSSIAN     33
 #define CMBTLANG_SLOVAK      34
 #define CMBTLANG_SLOVENIAN   35
 #define CMBTLANG_SERBIAN     36
 #define CMBTLANG_SPANISH     37
 #define CMBTLANG_SWEDISH     38
 #define CMBTLANG_THAI        39
 #define CMBTLANG_TURKISH     40
 #define CMBTLANG_UKRAINIAN   41
 #define CMBTLANG_SERBIAN_LATIN 42
 #define CMBTLANG_CHINESE_TRADITIONAL   	 48
 #define CMBTLANG_PORTUGUESE_BRAZILIAN   	129
 #define CMBTLANG_SPANISH_COLOMBIA  		130
 #define CMBTLANG_UNSPECIFIED	255
#endif

/*--- type declarations ---*/

#ifndef HJOB
  #define HJOB                           INT
#endif

#ifndef HLLJOB
  #define HLLJOB                         INT
#endif

#ifndef HLLDOMOBJ
  #define HLLDOMOBJ                      LPVOID
#endif

#ifndef PHLLDOMOBJ
  #define PHLLDOMOBJ                     LPVOID FAR *
#endif

#ifndef HLLEXPR
  #define HLLEXPR                        LPVOID
#endif

#ifndef HLLINTERF
  #define HLLINTERF                      LPVOID
#endif

#ifndef HSTG
  #define HSTG                           UINT_PTR
#endif

#ifndef HLLSTG
  #define HLLSTG                         UINT_PTR
#endif

#ifndef HLLRTFOBJ
  #define HLLRTFOBJ                      UINT_PTR
#endif

#ifndef _PRECT
  #define _PRECT                         RECT FAR *
#endif

#ifndef _PCRECT
  #define _PCRECT                        const RECT FAR *
#endif

#ifndef HLISTPOS
  #define HLISTPOS                       UINT_PTR
#endif

#ifndef _LPHANDLE
  #define _LPHANDLE                      HANDLE FAR *
#endif

#ifndef _LPINT
  #define _LPINT                         INT FAR *
#endif

#ifndef _LPUINT
  #define _LPUINT                        UINT FAR *
#endif

#ifndef _LCID
  #define _LCID                          UINT
#endif

#ifndef _PBOOL
  #define _PBOOL                         BOOL FAR *
#endif

#ifndef PHGLOBAL
  #define PHGLOBAL                       HGLOBAL FAR *
#endif

#ifndef LLPUINT
  #define LLPUINT                        UINT FAR *
#endif

#ifndef PVARIANT
  #define PVARIANT                       VARIANT FAR *
#endif

#ifndef PCVARIANT
  #define PCVARIANT                      const VARIANT FAR *
#endif

#ifndef _PDEVMODE
  #define _PDEVMODE                      DEVMODE FAR *
#endif

#ifndef _PDEVMODEA
  #define _PDEVMODEA                     DEVMODEA FAR *
#endif

#ifndef _PDEVMODEW
  #define _PDEVMODEW                     DEVMODEW FAR *
#endif

#ifndef _PCDEVMODE
  #define _PCDEVMODE                     const DEVMODE FAR *
#endif

#ifndef _PCDEVMODEA
  #define _PCDEVMODEA                    const DEVMODEA FAR *
#endif

#ifndef _PCDEVMODEW
  #define _PCDEVMODEW                    const DEVMODEW FAR *
#endif

#ifndef PIUNKNOWN
  #define PIUNKNOWN                      IUnknown FAR *
#endif

#ifndef PPIUNKNOWN
  #define PPIUNKNOWN                     IUnknown FAR * FAR *
#endif

#ifndef PSCLLCOLUMN
  #define PSCLLCOLUMN                    scLlColumn FAR *
#endif

#ifndef CTL_GUID
  #define CTL_GUID                       const GUID
#endif

#ifndef CTL_PGUID
  #define CTL_PGUID                      const GUID FAR *
#endif

#ifndef PIUNKNOWN
  #define PIUNKNOWN                      IUnknown FAR *
#endif

#ifndef PPIUNKNOWN
  #define PPIUNKNOWN                     IUnknown FAR * FAR *
#endif

#ifndef _PSYSTEMTIME
  #define _PSYSTEMTIME                   SYSTEMTIME FAR *
#endif

#ifndef _PCSYSTEMTIME
  #define _PCSYSTEMTIME                  const SYSTEMTIME FAR *
#endif

#ifndef PSCLLPROJECTUSERDATA
  #define PSCLLPROJECTUSERDATA           scLlProjectUserData FAR *
#endif

#ifndef _LPINTJAVADUMMY
  #define _LPINTJAVADUMMY                INT FAR *
#endif

#ifndef _PBSTR
  #define _PBSTR                         BSTR FAR *
#endif

#ifndef PILlXOBStatJob
  #define PILlXOBStatJob                 ILlXOBStatJob FAR *
#endif

#ifndef PPILlXOBStatJob
  #define PPILlXOBStatJob                ILlXOBStatJob FAR * FAR *
#endif

#ifndef _PUINT8
  #define _PUINT8                        UINT8 FAR *
#endif

#ifndef _PCUINT8
  #define _PCUINT8                       const UINT8 FAR *
#endif

#ifndef _PISTREAM
  #define _PISTREAM                      IStream FAR *
#endif

#ifndef _PPISTREAM
  #define _PPISTREAM                     IStream FAR * FAR *
#endif

#ifndef HLLTESTJOB
  #define HLLTESTJOB                     LPVOID
#endif

#ifndef PILLRepositoryItem
  #define PILLRepositoryItem             ILLRepositoryItem FAR *
#endif

#ifndef PPILLRepositoryItem
  #define PPILLRepositoryItem            ILLRepositoryItem FAR * FAR *
#endif

#ifndef PILLRepository
  #define PILLRepository                 ILLRepository FAR *
#endif

#ifndef _PPIUNKNOWN
  #define _PPIUNKNOWN                    IUnknown FAR * FAR *
#endif


/*--- constant declarations ---*/

#define LL_LINK_HPOS_NONE              (0x0000              )
#define LL_LINK_HPOS_START             (0x0001              )
#define LL_LINK_HPOS_END               (0x0002              )
#define LL_LINK_HPOS_ABS               (0x0003              )
#define LL_LINK_HPOS_MASK              (0x0007              )
#define LL_LINK_VPOS_NONE              (0x0000              )
#define LL_LINK_VPOS_START             (0x0010              )
#define LL_LINK_VPOS_END               (0x0020              )
#define LL_LINK_VPOS_ABS               (0x0030              )
#define LL_LINK_VPOS_MASK              (0x0070              )
#define LL_LINK_HSIZE_NONE             (0x0000              )
#define LL_LINK_HSIZE_PROP             (0x0100              )
#define LL_LINK_HSIZE_INV              (0x0200              )
#define LL_LINK_HSIZE_MASK             (0x0300              )
#define LL_LINK_VSIZE_NONE             (0x0000              )
#define LL_LINK_VSIZE_PROP             (0x1000              )
#define LL_LINK_VSIZE_INV              (0x2000              )
#define LL_LINK_VSIZE_MASK             (0x3000              )
#define LL_LINK_SIZEPOS_MASK           (0x3377              )
#define LL_LINK_SIZEOFPARENT           (0x4000              )
#define LL_DESIGNERPRINTCALLBACK_PREVIEW_START (1                   )
#define LL_DESIGNERPRINTCALLBACK_PREVIEW_ABORT (2                   )
#define LL_DESIGNERPRINTCALLBACK_PREVIEW_FINALIZE (3                   )
#define LL_DESIGNERPRINTCALLBACK_PREVIEW_QUEST_JOBSTATE (4                   )
#define LL_DESIGNERPRINTCALLBACK_EXPORT_START (5                   )
#define LL_DESIGNERPRINTCALLBACK_EXPORT_ABORT (6                   )
#define LL_DESIGNERPRINTCALLBACK_EXPORT_FINALIZE (7                   )
#define LL_DESIGNERPRINTCALLBACK_EXPORT_QUEST_JOBSTATE (8                   )
#define LL_DESIGNERPRINTTHREAD_STATE_STOPPED (0                   )
#define LL_DESIGNERPRINTTHREAD_STATE_SUSPENDED (1                   )
#define LL_DESIGNERPRINTTHREAD_STATE_RUNNING (2                   )
#define LL_INVOKEACTION_FLAG_SAVE_NO_PROJECTDESCRIPTIONCHECK (0x0001              ) /* in HIWORD in LlDesignerInvokeAction */
#define LL_DRILLDOWN_START             (1                   )
#define LL_DRILLDOWN_FINALIZE          (2                   )
#define LL_PRINTJOB_FINALIZE           (3                   )
#define LL_JOBOPENFLAG_NOLLXPRELOAD    (0x00001000          )
#define LL_JOBOPENFLAG_ONLYEXACTLANGUAGE (0x00002000          ) /* do not look for '@@' LNG file */
#define LL_DEBUG_CMBTLL                (0x0001              ) /* debug CMBTLLnn.DLL */
#define LL_DEBUG_CMBTDWG               (0x0002              ) /* debug CMBTDWnn.DLL */
#define LL_DEBUG_CMBTLL_NOCALLBACKS    (0x0004              )
#define LL_DEBUG_CMBTLL_NOSTORAGE      (0x0008              )
#define LL_DEBUG_CMBTLL_NOWAITDLG      (0x0010              )
#define LL_DEBUG_CMBTLL_NOSYSINFO      (0x0020              )
#define LL_DEBUG_CMBTLL_LOGTOFILE      (0x0040              )
#define LL_DEBUG_CMBTLS                (0x0080              ) /* debug CMBTLSnn.DLL */
#define LL_DEBUG_PRNINFO               (0x0100              ) /* issue basic printer operations */
#define LL_DEBUG_CMBTLL_OBJECTSTATES   (0x0400              ) /* issue object states after drawing (realdata printing only) */
#define LL_DEBUG_NOPRIVACYDATA         (0x0800              ) /* suppress field contents (useful if they might contain private data) */
#define LL_DEBUG_FORCE_SYSINFO         (0x1000              ) /* issue sysinfo even though it has been issued once already */
#define LL_DEBUG_EVAL2HOSTEXPRESSION   (0x2000              ) /* debug Eval2HostExpr processing */
#define LL_DEBUG_EXTENDED_DEBWINFLAGS  (0x80000000          ) /* internal usage */
#define LL_VERSION_MAJOR               (1                   ) /* direct return of major version (f.ex. 1) */
#define LL_VERSION_MINOR               (2                   ) /* direct return of minor version (f.ex. 13) */
#define LL_CMND_DRAW_USEROBJ           (0                   ) /* callback for LL_DRAWING_USEROBJ */
#define LL_CMND_EDIT_USEROBJ           (1                   ) /* callback for LL_DRAWING_USEROBJ_DLG */
#define LL_CMND_GETSIZE_USEROBJ        (2                   )
#define LL_CMND_GETSIZE_USEROBJ_SCM    (3                   )
#define LL_CMND_GETSIZE_USEROBJ_PIXEL  (4                   )
#define LL_CMND_TABLELINE              (10                  ) /* callback for LL_CB_TABLELINE */
#define LL_TABLE_LINE_HEADER           (0                   )
#define LL_TABLE_LINE_BODY             (1                   )
#define LL_TABLE_LINE_FOOTER           (2                   )
#define LL_TABLE_LINE_FILL             (3                   )
#define LL_TABLE_LINE_GROUP            (4                   )
#define LL_TABLE_LINE_GROUPFOOTER      (5                   )
#define LL_CMND_TABLEFIELD             (11                  ) /* callback for LL_CB_TABLEFIELD */
#define LL_TABLE_FIELD_HEADER          (0                   )
#define LL_TABLE_FIELD_BODY            (1                   )
#define LL_TABLE_FIELD_FOOTER          (2                   )
#define LL_TABLE_FIELD_FILL            (3                   )
#define LL_TABLE_FIELD_GROUP           (4                   )
#define LL_TABLE_FIELD_GROUPFOOTER     (5                   )
#define LL_CMND_EVALUATE               (12                  ) /* callback for "External$" function */
#define LL_CMND_OBJECT                 (20                  ) /* callback of LL_CB_OBJECT */
#define LL_CMND_PAGE                   (21                  ) /* callback of LL_CB_PAGE */
#define LL_CMND_PROJECT                (22                  ) /* callback of LL_CB_PROJECT */
#define LL_CMND_DRAW_GROUP_BEGIN       (23                  ) /* callback for LlPrintBeginGroup */
#define LL_CMND_DRAW_GROUP_END         (24                  ) /* callback for LlPrintEndGroup */
#define LL_CMND_DRAW_GROUPLINE         (25                  ) /* callback for LlPrintGroupLine */
#define LL_RSP_GROUP_IMT               (0                   )
#define LL_RSP_GROUP_NEXTPAGE          (1                   )
#define LL_RSP_GROUP_OK                (2                   )
#define LL_RSP_GROUP_DRAWFOOTER        (3                   )
#define LL_CMND_HELP                   (30                  ) /* lParam: HIWORD=HELP_xxx, LOWORD=Context # */
#define LL_CMND_ENABLEMENU             (31                  ) /* undoc: lParam/LOWORD(lParam) = HMENU */
#define LL_CMND_MODIFYMENU             (32                  ) /* undoc: lParam/LOWORD(lParam) = HMENU */
#define LL_CMND_SELECTMENU             (33                  ) /* undoc: lParam=ID (return TRUE if processed) */
#define LL_CMND_GETVIEWERBUTTONSTATE   (34                  ) /* HIWORD(lParam)=ID, LOWORD(lParam)=state */
#define LL_CMND_VARHELPTEXT            (35                  ) /* lParam=LPSTR(Name), returns LPSTR(Helptext) */
#define LL_INFO_METER                  (37                  ) /* lParam = addr(scLlMeterInfo) */
#define LL_METERJOB_LOAD               (1                   )
#define LL_METERJOB_SAVE               (2                   )
#define LL_METERJOB_CONSISTENCYCHECK   (3                   )
#define LL_METERJOB_PASS2              (4                   )
#define LL_METERJOB_PASS3              (5                   )
#define LL_NTFY_FAILSFILTER            (1000                ) /* data set fails filter expression */
#define LL_NTFY_VIEWERBTNCLICKED       (38                  ) /* user presses a preview button (action will be done). lParam=ID. result: 0=allowed, 1=not allowed */
#define LL_CMND_DLGEXPR_VARBTN         (39                  ) /* lParam: @scLlDlgExprVarExt, return: IDOK for ok */
#define LL_CMND_HOSTPRINTER            (40                  ) /* lParam: scLlPrinter */
#define LL_PRN_CREATE_DC               (1                   ) /* scLlPrinter._nCmd values */
#define LL_PRN_DELETE_DC               (2                   )
#define LL_PRN_SET_ORIENTATION         (3                   )
#define LL_PRN_GET_ORIENTATION         (4                   )
#define LL_PRN_EDIT                    (5                   ) /* unused */
#define LL_PRN_GET_DEVICENAME          (6                   )
#define LL_PRN_GET_DRIVERNAME          (7                   )
#define LL_PRN_GET_PORTNAME            (8                   )
#define LL_PRN_RESET_DC                (9                   )
#define LL_PRN_COMPARE_PRINTER         (10                  )
#define LL_PRN_GET_PHYSPAGE            (11                  )
#define LL_PRN_SET_PHYSPAGE            (12                  )
#define LL_PRN_GET_PAPERFORMAT         (13                  ) /* fill _nPaperFormat */
#define LL_PRN_SET_PAPERFORMAT         (14                  ) /* _nPaperFormat, _xPaperSize, _yPaperSize */
#define LL_OEM_TOOLBAR_START           (41                  )
#define LL_OEM_TOOLBAR_END             (50                  )
#define LL_NTFY_EXPRERROR              (51                  ) /* lParam = LPCSTR(error text) */
#define LL_CMND_CHANGE_DCPROPERTIES_CREATE (52                  ) /* lParam = addr(scLlPrinter), _hDC is valid */
#define LL_CMND_CHANGE_DCPROPERTIES_DOC (53                  ) /* lParam = addr(scLlPrinter), _hDC is valid */
#define LL_CMND_CHANGE_DCPROPERTIES_PAGE (54                  ) /* lParam = addr(scLlPrinter), _hDC is valid */
#define LL_CMND_CHANGE_DCPROPERTIES_PREPAGE (56                  ) /* lParam = addr(scLlPrinter), _hDC and _pszBuffer( DEVMODE* ) are valid */
#define LL_CMND_MODIFY_METAFILE        (57                  ) /* lParam = handle of EMF (enh. metafile) */
#define LL_INFO_PRINTJOBSUPERVISION    (58                  ) /* lParam = addr(scLlPrintJobInfo) */
#define LL_CMND_DELAYEDVALUE           (59                  ) /* lParam = addr(scLlDelayedValue) */
#define LL_CMND_SUPPLY_USERDATA        (60                  ) /* lParam = addr(scLlProjectUserData) */
#define LL_CMND_SAVEFILENAME           (61                  ) /* lParam = LPCTSTR(Filename) */
#define LL_QUERY_IS_VARIABLE_OR_FIELD  (62                  ) /* lParam = addr(scLlDelayDefineFieldOrVariable), must be enabled by CB mask. If returns TRUE, the var must be defined in the callback... */
#define LL_NTFY_PROJECTLOADED          (63                  ) /* lParam = 0 */
#define LL_QUERY_DESIGNERACTIONSTATE   (64                  )
#define LL_NTFY_DESIGNERREADY          (65                  ) /* lParam = 0 */
#define LL_NTFY_DESIGNERPRINTJOB       (66                  )
#define LL_NTFY_VIEWERDRILLDOWN        (67                  )
#define LL_NTFY_QUEST_DRILLDOWNDENIED  (68                  ) /* see LS_VIEWERCONTROL_QUEST_DRILLDOWNDENIED */
#define LL_QUERY_DRILLDOWN_ADDITIONAL_BASETABLES_FOR_VARIABLES (69                  ) /* lParam = scLlDDFilterInfo* */
#define LL_QUERY_DRILLDOWN_ADDITIONAL_TABLES (70                  ) /* lParam = scLlDDFilterInfo* */
#define LL_NTFY_DRILLDOWN_DESIGNERACTION (71                  ) /* lParam = scLlDDDesignerActionW* */
#define LL_NTFY_INPLACEDESIGNER_START  (72                  )
#define LL_NTFY_INPLACEDESIGNER_END    (73                  )
#define LL_QUERY_OWN_MENU              (74                  ) /* lParam = HMENU -> return 1 if uses own menu */
#define LL_CMND_UPDATE_MENU            (75                  )
#define LL_NTFY_FRAMEHANDLE            (76                  ) /* lParam -> handle of layout window ("L&LFrame") */
#define LL_QUERY_DEFAULTPROJECTSTREAM  (77                  ) /* lParam -> IStream**. Return NONZERO when stream contains data */
#define LL_NTFY_QUEST_RP_REALDATAJOBDENIED (78                  )
#define LL_NTFY_QUEST_EXPANDABLEREGIONSJOBDENIED (79                  )
#define LL_NTFY_QUEST_INTERACTIVESORTINGJOBDENIED (80                  )
#define LL_QUERY_EXPR2HOSTEXPRESSION   (81                  ) /* lParam = LLEXPR2HOSTEXPR*, return 0 for FAIL, 1 for OPTIMAL, 2 for INEXACT */
#define LL_NTFY_REPORTPARAMETERS_COLLECTED (82                  ) /* lParam = &scNtfyReportparametersCollected, return LL_ERR_USER_ABORTED to abort, 0x01 to get RP stream, 0x02 to get RP contents, 0 to leave processing */
#define LL_NTFY_EXPORTERPAGEFINISHED   (83                  ) /* lParam = &scNtfyExporterPageFinished */
#define LL_NTFY_HYPERLINK              (84                  ) /* lParam = &scNtfyHyperlink */
#define LL_NTFY_SAVEREPORTSTATEITEM    (85                  ) /* lParam = &scLLNtfyReportStateItem */
#define LL_NTFY_RESTOREREPORTSTATEITEM (86                  ) /* lParam = &scLLNtfyReportStateItem */
#define LL_NTFY_PROGRESS               (87                  ) /* lParam -> percentage of current progress */
#define LL_NTFY_TRIGGEREDJOBINUITHREAD (88                  ) /* lParam -> user data */
#define LL_NTFY_PLEASE_TRANSLATE       (89                  ) /* lParam=BSTR* */
#define LL_NTFY_PREVIEW_PRINT_START    (99                  ) /* lParam = &scViewerControlPrintData, return 1 to abort print */
#define LL_NTFY_PREVIEW_PRINT_PAGE     (100                 ) /* lParam = &scViewerControlPrintData, return 1 to abort loop */
#define LL_NTFY_PREVIEW_PRINT_END      (101                 ) /* lParam = &scViewerControlPrintData */
#define LL_NTFY_EMF_PAGE               (102                 ) /* lParam = &scLLNtfyEMF */
#define LL_QUERY_FILENAME_FOR_EXPORTJOB (103                 ) /* lParam = VARIANT* (in: old filename, out:new filename) */
#define LL_QUERY_OBJECT_NOT_SUPPORTED  (104                 ) /* lParam = &scLLQueryObjectAllowed */
#define LL_QUERY_REPLACE_FILESYSTEMITEM (105                 ) /* lParam = &scLLQueryFilenameReplacement -> return 1 if replaced */
#define LL_QUERY_HOSTIMPORT            (106                 ) /* lParam = &scLlNtfyHostImport -> return 1 if LL's internal routine is superseded */
#define LL_NTFY_PREVIEW_ACTIONRESULT   (107                 ) /* see LS_VIEWERCONTROL_NTFY_ACTIONRESULT - for RealDataPreview */
#define LL_NTFY_DATA_LOSS              (108                 ) /* lParam = LL_NTFYDATALOSS_XXX */
#define LL_NTFYDATALOSS_RTFDETECTION_NOT_ENOUGH_SPACE (1                   )
#define LL_NTFY_REPORTPARAMETERS_COLLECTION_FINISHED (109                 ) /* lParam and result: see LL_NTFY_REPORTPARAMETERS_COLLECTED */
#define LL_NTFY_EXPRERROR_EX           (110                 ) /* lParam = @scLlNtfyExprErrorEx */
#define LL_NTFY_EXPORTERPAGECOUNT      (111                 ) /* lParam = &scLLNtfyExporterPageCount */
#define LL_NTFY_FIND_AND_REPLACE       (112                 ) /* lParam = &scLLNtfyFindAndReplace, returns: 0 to replace, 1 to skip, 2 to cancel search globally */
#define LL_NTFY_PROJECTLOAD_EX         (113                 ) /* lParam = &scLLNtfyProjectLoadEx, called before a project is loaded. SetErrortext to abort loading. */
#define LL_NTFY_JOBWILLCHANGE          (114                 ) /* internal */
#define LL_NTFY_COMBINATIONPRINTSTEP   (115                 ) /* lParam = &scLlCombinationPrintStep, return 0 on OK, error code on error */
#define LL_NTFY_LOADERROR_DATABASESTRUCTURE (116                 ) /* lParam = @scLlNtfyDatabaseError */
#define LL_PROJECT_LABEL               (1                   ) /* new names... */
#define LL_PROJECT_LIST                (2                   )
#define LL_PROJECT_CARD                (3                   )
#define LL_PROJECT_TOC                 (4                   )
#define LL_PROJECT_IDX                 (5                   )
#define LL_PROJECT_GTC                 (6                   )
#define LL_PROJECT_LAST                (6                   )
#define LL_PROJECT_MASK                (0x000f              )
#define LL_OBJ_MARKER                  (0                   ) /* internal use only */
#define LL_OBJ_TEXT                    (1                   ) /* the following are used in the object callback */
#define LL_OBJ_RECT                    (2                   )
#define LL_OBJ_LINE                    (3                   )
#define LL_OBJ_BARCODE                 (4                   )
#define LL_OBJ_DRAWING                 (5                   )
#define LL_OBJ_TABLE                   (6                   )
#define LL_OBJ_TEMPLATE                (7                   )
#define LL_OBJ_ELLIPSE                 (8                   )
#define LL_OBJ_GROUP                   (9                   ) /* internal use only */
#define LL_OBJ_RTF                     (10                  )
#define LL_OBJ_LLX                     (11                  )
#define LL_OBJ_INPUT                   (12                  )
#define LL_OBJ_LAST                    (12                  ) /* last object type (for loops as upper bound) - if this is changed, change the contants in object.c too! */
#define LL_OBJ_REPORTCONTAINER         (253                 ) /* for exporter */
#define LL_OBJ_PROJECT                 (254                 ) /* for exporter */
#define LL_OBJ_PAGE                    (255                 ) /* for exporter */
#define LL_DELAYEDVALUE                (0x80000000          )
#define LL_TYPEMASK                    (0x7fff0000          )
#define LL_ANYTYPE                     (0x7fff0000          )
#define LL_TABLE_FIELDTYPEMASK         (0x0000f800          ) /* internal use */
#define LL_SUBTYPEMASK                 (0x000003ff          )
#define LL_TYPEFLAGS                   (0x8000f800          )
#define LL_HANDLESTREAM_TYPE_MASK      (0x00000400          )
#define LL_HANDLESTREAM_BLOB           (0x00000000          ) /* binary data (images only) */
#define LL_HANDLESTREAM_UTF8           (0x00000000          ) /* UTF8-encoded string (non-images only) */
#define LL_HANDLESTREAM_UTF16          (0x00000400          ) /* UTF16-encoded string (non-images only) */
#define LL_TABLE_FOOTERFIELD           (0x00008000          ) /* 'or'ed for footline-only fields // reserved also for Variables (see "$$xx$$")!!!! */
#define LL_TABLE_GROUPFIELD            (0x00004000          ) /* 'or'ed for groupline-only fields */
#define LL_TABLE_HEADERFIELD           (0x00002000          ) /* 'or'ed for headline-only fields */
#define LL_TABLE_BODYFIELD             (0x00001000          ) /* 'or'ed for headline-only fields */
#define LL_TABLE_GROUPFOOTERFIELD      (0x00000800          ) /* 'or'ed for group-footer-line-only fields */
#define LL_BARCODE                     (0x40000000          )
#define LL_BARCODE_METHODMASK          (0x000000ff          )
#define LL_BARCODE_WITHTEXT            (0x00000100          )
#define LL_BARCODE_WITHOUTTEXT         (0x00000200          )
#define LL_BARCODE_TEXTDONTCARE        (0x00000000          )
#define LL_BARCODE_EAN13               (0x40000000          )
#define LL_BARCODE_EAN8                (0x40000001          )
#define LL_BARCODE_GTIN13              (0x40000000          )
#define LL_BARCODE_GTIN8               (0x40000001          )
#define LL_BARCODE_UPCA                (0x40000002          )
#define LL_BARCODE_UPCE                (0x40000003          )
#define LL_BARCODE_3OF9                (0x40000004          )
#define LL_BARCODE_25INDUSTRIAL        (0x40000005          )
#define LL_BARCODE_25INTERLEAVED       (0x40000006          )
#define LL_BARCODE_25DATALOGIC         (0x40000007          )
#define LL_BARCODE_25MATRIX            (0x40000008          )
#define LL_BARCODE_POSTNET             (0x40000009          )
#define LL_BARCODE_FIM                 (0x4000000A          )
#define LL_BARCODE_CODABAR             (0x4000000B          )
#define LL_BARCODE_EAN128              (0x4000000C          )
#define LL_BARCODE_GS1_128             (0x4000000C          )
#define LL_BARCODE_CODE128             (0x4000000D          )
#define LL_BARCODE_DP_LEITCODE         (0x4000000E          )
#define LL_BARCODE_DP_IDENTCODE        (0x4000000F          )
#define LL_BARCODE_GERMAN_PARCEL       (0x40000010          )
#define LL_BARCODE_CODE93              (0x40000011          )
#define LL_BARCODE_MSI                 (0x40000012          )
#define LL_BARCODE_CODE11              (0x40000013          )
#define LL_BARCODE_MSI_10_CD           (0x40000014          )
#define LL_BARCODE_MSI_10_10           (0x40000015          )
#define LL_BARCODE_MSI_11_10           (0x40000016          )
#define LL_BARCODE_MSI_PLAIN           (0x40000017          )
#define LL_BARCODE_EAN14               (0x40000018          )
#define LL_BARCODE_GTIN14              (0x40000018          )
#define LL_BARCODE_UCC14               (0x40000019          )
#define LL_BARCODE_CODE39              (0x4000001A          )
#define LL_BARCODE_CODE39_CRC43        (0x4000001B          )
#define LL_BARCODE_PZN                 (0x4000001C          )
#define LL_BARCODE_CODE39_EXT          (0x4000001D          )
#define LL_BARCODE_JAPANESE_POSTAL     (0x4000001E          )
#define LL_BARCODE_RM4SCC              (0x4000001F          )
#define LL_BARCODE_RM4SCC_CRC          (0x40000020          )
#define LL_BARCODE_SSCC                (0x40000021          )
#define LL_BARCODE_ISBN                (0x40000022          )
#define LL_BARCODE_GS1                 (0x40000023          )
#define LL_BARCODE_GS1_TRUNCATED       (0x40000024          )
#define LL_BARCODE_GS1_STACKED         (0x40000025          )
#define LL_BARCODE_GS1_STACKED_OMNI    (0x40000026          )
#define LL_BARCODE_GS1_LIMITED         (0x40000027          )
#define LL_BARCODE_GS1_EXPANDED        (0x40000028          )
#define LL_BARCODE_INTELLIGENT_MAIL    (0x40000029          )
#define LL_BARCODE_PZN8                (0x4000002A          )
#define LL_BARCODE_CODE128_FULL        (0x4000002B          )
#define LL_BARCODE_EAN128_FULL         (0x4000002C          )
#define LL_BARCODE_CODABLOCK_F         (0x4000002D          )
#define LL_BARCODE_PHARMACODE          (0x4000002E          )
#define LL_BARCODE_LLXSTART            (0x40000040          )
#define LL_BARCODE_PDF417              (0x40000040          )
#define LL_BARCODE_MAXICODE            (0x40000041          )
#define LL_BARCODE_MAXICODE_UPS        (0x40000042          )
#define LL_BARCODE_DATAMATRIX          (0x40000044          )
#define LL_BARCODE_AZTEC               (0x40000045          )
#define LL_BARCODE_QRCODE              (0x40000046          )
#define LL_BARCODE_DATAMATRIX_PREMIUMADRESS (0x40000047          )
#define LL_BARCODE_MICROPDF417         (0x40000048          )
#define LL_BARCODE_QR_EPC              (0x40000049          )
#define LL_DRAWING                     (0x20000000          )
#define LL_DRAWING_METHODMASK          (0x000000ff          )
#define LL_DRAWING_HMETA               (0x20000001          )
#define LL_DRAWING_USEROBJ             (0x20000002          )
#define LL_DRAWING_USEROBJ_DLG         (0x20000003          )
#define LL_DRAWING_HBITMAP             (0x20000004          )
#define LL_DRAWING_HICON               (0x20000005          )
#define LL_DRAWING_HEMETA              (0x20000006          )
#define LL_DRAWING_HDIB                (0x20000007          ) /* global handle to BITMAPINFO and bits */
#define LL_META_MAXX                   (10000               )
#define LL_META_MAXY                   (10000               )
#define LL_TEXT                        (0x10000000          )
#define LL_TEXT_ALLOW_WORDWRAP         (0x10000000          )
#define LL_TEXT_DENY_WORDWRAP          (0x10000001          )
#define LL_TEXT_FORCE_WORDWRAP         (0x10000002          )
#define LL_NUMERIC                     (0x08000000          )
#define LL_NUMERIC_LOCALIZED           (0x08000001          )
#define LL_NUMERIC_INTEGER             (0x08000002          ) /* flag */
#define LL_DATE                        (0x04000000          ) /* LL's own julian */
#define LL_DATE_METHODMASK             (0x000000ff          )
#define LL_DATE_DELPHI_1               (0x04000001          )
#define LL_DATE_DELPHI                 (0x04000002          ) /* DELPHI 2, 3, 4: OLE DATE */
#define LL_DATE_MS                     (0x04000002          ) /* MS C/Basic: OLE DATE */
#define LL_DATE_OLE                    (0x04000002          ) /* generic: OLE DATE */
#define LL_DATE_VFOXPRO                (0x04000003          ) /* nearly LL's own julian, has an offset of 1! */
#define LL_DATE_DMY                    (0x04000004          ) /* <d><sep><m><sep><yyyy>. Year MUST be 4 digits! */
#define LL_DATE_MDY                    (0x04000005          ) /* <m><sep><d><sep><yyyy>. Year MUST be 4 digits! */
#define LL_DATE_YMD                    (0x04000006          ) /* <yyyy><sep><m><sep><d>. Year MUST be 4 digits! */
#define LL_DATE_YYYYMMDD               (0x04000007          ) /* <yyyymmdd> */
#define LL_DATE_LOCALIZED              (0x04000008          ) /* localized (automatic VariantConversion) */
#define LL_DATE_JULIAN                 (0x04000009          ) /* variant 'date' is a julian date */
#define LL_DATE_CLARION                (0x0400000a          ) /* days since 1800-12-28 (what's so special about that day?) */
#define LL_DATE_YMD_AUTO               (0x04000010          ) /* wither DMY, MDY or YMD, automatically detected */
#define LL_BOOLEAN                     (0x02000000          )
#define LL_RTF                         (0x01000000          )
#define LL_HTML                        (0x00800000          )
#define LL_PDF                         (0x00400000          )
#define LL_INPUTOBJECT                 (0x00200000          ) /* internal use only */
#define LL_LLXOBJECT                   (0x00100000          ) /* internal use only */
#define LL_SUBTABLELIST                (0x00080000          ) /* internal use only */
#define LL_RETURN_ERROR_IF_FILE_NOT_FOUND (0x00010000          )
#define LL_FIXEDNAME                   (0x00008000          )
#define LL_NOSAVEAS                    (0x00004000          )
#define LL_DESIGNER_OVER_CHILD         (0x00002000          )
#define LL_EXPRCONVERTQUIET            (0x00001000          ) /* convert to new expressions without warning box */
#define LL_NONAMEINTITLE               (0x00000800          ) /* no file name appended to title */
#define LL_PRVOPT_PRN_USEDEFAULT       (0x00000000          )
#define LL_PRVOPT_PRN_ASKPRINTERIFNEEDED (0x00000001          )
#define LL_PRVOPT_PRN_ASKPRINTERALWAYS (0x00000002          )
#define LL_PRVOPT_PRN_ALWAYSUSEDEFAULT (0x00000003          )
#define LL_PRVOPT_PRN_ASSIGNMASK       (0x00000003          ) /* used by L&L */
#define LL_PRVOPT_FLAG_STANDALONEVIEWER (0x00000010          )
#define LL_OPTION_COPIES               (0                   ) /* compatibility only, please use LL_PRNOPT_...   */
#define LL_OPTION_STARTPAGE            (1                   ) /* compatibility only, please use LL_PRNOPT_PAGE  */
#define LL_OPTION_PAGE                 (1                   ) /* compatibility only, please use LL_PRNOPT_...  */
#define LL_OPTION_OFFSET               (2                   ) /* compatibility only, please use LL_PRNOPT_...  */
#define LL_OPTION_COPIES_SUPPORTED     (3                   ) /* compatibility only, please use LL_PRNOPT_...  */
#define LL_OPTION_FIRSTPAGE            (5                   ) /* compatibility only, please use LL_PRNOPT_...  */
#define LL_OPTION_LASTPAGE             (6                   ) /* compatibility only, please use LL_PRNOPT_...  */
#define LL_OPTION_JOBPAGES             (7                   ) /* compatibility only, please use LL_PRNOPT_...  */
#define LL_OPTION_PRINTORDER           (8                   ) /* compatibility only, please use LL_PRNOPT_...  */
#define LL_PRNOPT_COPIES               (0                   )
#define LL_COPIES_HIDE                 (-32768              ) /* anything negative... */
#define LL_PRNOPT_STARTPAGE            (1                   )
#define LL_PRNOPT_PAGE                 (1                   ) /* ; please do not use STARTPAGE any more... */
#define LL_PAGE_HIDE                   (-32768              ) /* must be exactly this value! */
#define LL_PRNOPT_OFFSET               (2                   )
#define LL_PRNOPT_COPIES_SUPPORTED     (3                   )
#define LL_PRNOPT_UNITS                (4                   ) /* r/o */
#define LL_UNITS_MM_DIV_10             (0                   ) /* for LL_PRNOPT_UNITS, LL_OPTION_UNITS and LL_OPTION_UNITS_DEFAULT */
#define LL_UNITS_INCH_DIV_100          (1                   )
#define LL_UNITS_INCH_DIV_1000         (2                   )
#define LL_UNITS_SYSDEFAULT_LORES      (3                   ) /* mm/10, in/100 (depending on regional settings of the system) */
#define LL_UNITS_SYSDEFAULT            (4                   ) /* mm/100, in/1000 (depending on regional settings of the system) */
#define LL_UNITS_MM_DIV_100            (5                   )
#define LL_UNITS_MM_DIV_1000           (6                   )
#define LL_UNITS_SYSDEFAULT_HIRES      (7                   ) /* mm/100, in/1000 (depending on regional settings of the system) */
#define LL_PRNOPT_FIRSTPAGE            (5                   )
#define LL_PRNOPT_LASTPAGE             (6                   )
#define LL_PRNOPT_JOBPAGES             (7                   )
#define LL_PRNOPT_PRINTORDER           (8                   )
#define LL_PRINTORDER_HORZ_LTRB        (0                   )
#define LL_PRINTORDER_VERT_LTRB        (1                   )
#define LL_PRINTORDER_HORZ_RBLT        (2                   )
#define LL_PRINTORDER_VERT_RBLT        (3                   )
#define LL_PRNOPT_DEFPRINTERINSTALLED  (11                  ) /* returns 0 for no default printer, 1 for default printer present */
#define LL_PRNOPT_PRINTDLG_DESTMASK    (12                  ) /* any combination of the ones below... Default: all. Outdated, please use LL_OPTIONSTR_EXPORTS_ALLOWED */
#define LL_DESTINATION_PRN             (1                   )
#define LL_DESTINATION_PRV             (2                   )
#define LL_DESTINATION_FILE            (4                   )
#define LL_DESTINATION_EXTERN          (8                   )
#define LL_DESTINATION_MSFAX           (16                  ) /* reserved */
#define LL_PRNOPT_PRINTDLG_DEST        (13                  ) /* default destination; outdated, please use LL_PRNOPTSTR_EXPORT */
#define LL_PRNOPT_PRINTDLG_ONLYPRINTERCOPIES (14                  ) /* show copies option in dialog only if they are supported by the printer. default: false */
#define LL_PRNOPT_JOBID                (17                  )
#define LL_PRNOPT_PAGEINDEX            (18                  )
#define LL_PRNOPT_USES2PASS            (19                  ) /* r/o */
#define LL_PRNOPT_PAGERANGE_USES_ABSOLUTENUMBER (20                  ) /* default: false */
#define LL_PRNOPT_USEMEMORYMETAFILE    (22                  ) /* default: false */
#define LL_PRNOPT_PARTIALPREVIEW       (23                  ) /* default: false */
#define LL_PRNOPT_ADDITIONALPAGES_FOR_TOTAL (24                  ) /* internal */
#define LL_PRNOPT_HAS_TOTALPAGES       (25                  ) /* internal */
#define LL_PRNOPT_COUNT_OF_ITEMS       (26                  ) /* labels/cards */
#define LL_PRNOPT_IS_PREPROCESSING     (27                  )
#define LL_PRNOPT_PRINTDLG_ALLOW_NUMBER_OF_FIRST_PAGE (28                  )
#define LL_PRNOPT_NEXT_INDEX           (29                  )
#define LL_PRNOPTSTR_PRINTDST_FILENAME (0                   ) /* print to file: default filename (LlGet/SetPrintOptionString) */
#define LL_PRNOPTSTR_EXPORTDESCR       (1                   ) /* r/o, returns the description of the export chosen */
#define LL_PRNOPTSTR_EXPORT            (2                   ) /* sets default exporter to use / returns the name of the export chosen */
#define LL_PRNOPTSTR_PRINTJOBNAME      (3                   ) /* set name to be given to StartDoc() (lpszMessage of LlPrintWithBoxStart() */
#define LL_PRNOPTSTR_PRESTARTDOCESCSTRING (4                   ) /* sent before StartDoc() */
#define LL_PRNOPTSTR_POSTENDDOCESCSTRING (5                   ) /* sent after EndDoc() */
#define LL_PRNOPTSTR_PRESTARTPAGEESCSTRING (6                   ) /* sent before StartPage() */
#define LL_PRNOPTSTR_POSTENDPAGEESCSTRING (7                   ) /* sent after EndPage() */
#define LL_PRNOPTSTR_PRESTARTPROJECTESCSTRING (8                   ) /* sent before first StartPage() of project */
#define LL_PRNOPTSTR_POSTENDPROJECTESCSTRING (9                   ) /* sent after last EndPage() of project */
#define LL_PRNOPTSTR_PAGERANGES        (10                  )
#define LL_PRNOPTSTR_ISSUERANGES       (11                  )
#define LL_PRNOPTSTR_PREVIEWTITLE      (12                  ) /* default: language dependent */
#define LL_PRNOPTSTR_PRINTDLG_ALWAYSSHOWCOPIESFOR (13                  ) /* default: empty string */
#define LL_PRNOPTSTR_NEXT_INDEX        (14                  )
#define LL_PRINT_V1POINTX              (0x00000000          )
#define LL_PRINT_NORMAL                (0x00000100          )
#define LL_PRINT_PREVIEW               (0x00000200          )
#define LL_PRINT_STORAGE               (0x00000200          ) /* same as LL_PRINT_PREVIEW */
#define LL_PRINT_FILE                  (0x00000400          )
#define LL_PRINT_USERSELECT            (0x00000800          )
#define LL_PRINT_EXPORT                (0x00000800          ) /* same as LL_PRINT_USERSELECT */
#define LL_PRINT_MODEMASK              (0x00000f00          )
#define LL_PRINT_MULTIPLE_JOBS         (0x00001000          )
#define LL_PRINT_KEEPJOB               (0x00002000          )
#define LL_PRINT_IS_DOM_CALLER         (0x00004000          ) /* internal */
#define LL_PRINT_DOM_NOCREATEDC        (0x00010000          ) /* internal */
#define LL_PRINT_DOM_NOOBJECTLOAD      (0x00020000          ) /* internal */
#define LL_PRINT_REMOVE_UNUSED_VARS    (0x00008000          ) /* optimization flag */
#define LL_BOXTYPE_BOXTYPEMASK         (0x000000ff          )
#define LL_BOXTYPE_NONE                (0x000000ff          )
#define LL_BOXTYPE_FLAG_ALLOWSUSPEND   (0x40000000          )
#define LL_BOXTYPE_FLAG_USEMARQUEE     (0x80000000          )
#define LL_BOXTYPE_NORMALMETER         (0                   )
#define LL_BOXTYPE_BRIDGEMETER         (1                   )
#define LL_BOXTYPE_NORMALWAIT          (2                   )
#define LL_BOXTYPE_BRIDGEWAIT          (3                   )
#define LL_BOXTYPE_EMPTYWAIT           (4                   )
#define LL_BOXTYPE_EMPTYABORT          (5                   )
#define LL_BOXTYPE_STDWAIT             (6                   )
#define LL_BOXTYPE_STDABORT            (7                   )
#define LL_BOXTYPE_MAX                 (7                   )
#define LL_FILE_ALSONEW                (0x00008000          )
#define LL_SELECTFILEDLGTITLE_USE_OSFILENAME (0x00010000          )
#define LL_FILE_FORCE_OS_DIALOG        (0x00020000          )
#define LL_FCTPARATYPE_DOUBLE          (0x0001              )
#define LL_FCTPARATYPE_DATE            (0x0002              )
#define LL_FCTPARATYPE_STRING          (0x0004              )
#define LL_FCTPARATYPE_BOOL            (0x0008              )
#define LL_FCTPARATYPE_DRAWING         (0x0010              )
#define LL_FCTPARATYPE_BARCODE         (0x0020              )
#define LL_FCTPARATYPE_ALL             (0x003f              )
#define LL_FCTPARATYPE_PARA1           (0x8001              )
#define LL_FCTPARATYPE_PARA2           (0x8002              )
#define LL_FCTPARATYPE_PARA3           (0x8003              )
#define LL_FCTPARATYPE_PARA4           (0x8004              )
#define LL_FCTPARATYPE_SAME            (0x803f              )
#define LL_FCTPARATYPE_MASK            (0x8fff              )
#define LL_FCTPARATYPEFLAG_NONULLCHECK (0x00010000          )
#define LL_FCTPARATYPEFLAG_MULTIDIM_ALLOWED (0x00020000          ) /* internal */
#define LL_FCTPARATYPEFLAG_RAW         (0x00080000          ) /* parameter passed as string without evaluation */
#define LL_FCTPARATYPEFLAG_RAW_WITH_SYNTAXCHECK (0x00040000          ) /* parameter passed as string without evaluation */
#define LL_FCTPARATYPEFLAG_KEEP_LINEBREAKS (0x00100000          )
#define LL_FCTPARATYPEFLAG_EXECUTE_ON_SYNTAXCHECK_AT_LOADTIME (0x00200000          )
#define LL_EXPRTYPE_DOUBLE             (1                   )
#define LL_EXPRTYPE_DATE               (2                   )
#define LL_EXPRTYPE_STRING             (3                   )
#define LL_EXPRTYPE_BOOL               (4                   )
#define LL_EXPRTYPE_DRAWING            (5                   )
#define LL_EXPRTYPE_BARCODE            (6                   )
#define LL_OPTION_NEWEXPRESSIONS       (0                   ) /* default: true */
#define LL_OPTION_ONLYONETABLE         (1                   ) /* default: false */
#define LL_OPTION_TABLE_COLORING       (2                   ) /* default: LL_COLORING_LL */
#define LL_COLORING_LL                 (0                   )
#define LL_COLORING_PROGRAM            (1                   )
#define LL_COLORING_DONTCARE           (2                   )
#define LL_OPTION_SUPERVISOR           (3                   ) /* default: false */
#define LL_OPTION_UNITS                (4                   ) /* default: see LL_OPTION_METRIC */
#define LL_OPTION_TABSTOPS             (5                   ) /* default: LL_TABS_DELETE  */
#define LL_TABS_DELETE                 (0                   )
#define LL_TABS_EXPAND                 (1                   )
#define LL_OPTION_CALLBACKMASK         (6                   ) /* default: 0x00000000 */
#define LL_CB_PAGE                     (0x40000000          ) /* callback for each page */
#define LL_CB_PROJECT                  (0x20000000          ) /* callback for each label */
#define LL_CB_OBJECT                   (0x10000000          ) /* callback for each object */
#define LL_CB_HELP                     (0x08000000          ) /* callback for HELP (F1/Button) */
#define LL_CB_TABLELINE                (0x04000000          ) /* callback for table line */
#define LL_CB_TABLEFIELD               (0x02000000          ) /* callback for table field */
#define LL_CB_QUERY_IS_VARIABLE_OR_FIELD (0x01000000          ) /* callback for delayload (LL_QUERY_IS_VARIABLE_OR_FIELD) */
#define LL_OPTION_CALLBACKPARAMETER    (7                   ) /* default: 0 */
#define LL_OPTION_HELPAVAILABLE        (8                   ) /* default: true */
#define LL_OPTION_SORTVARIABLES        (9                   ) /* default: true */
#define LL_OPTION_SUPPORTPAGEBREAK     (10                  ) /* default: true */
#define LL_OPTION_SHOWPREDEFVARS       (11                  ) /* default: true */
#define LL_OPTION_USEHOSTPRINTER       (13                  ) /* default: false // use host printer via callback */
#define LL_OPTION_EXTENDEDEVALUATION   (14                  ) /* allows expressions in chevrons (amwin mode) */
#define LL_OPTION_TABREPRESENTATIONCODE (15                  ) /* default: 247 (0xf7) */
#define LL_OPTION_SHOWSTATE            (16                  ) /* r/o,  */
#define LL_OPTION_METRIC               (18                  ) /* default: depends on Windows defaults */
#define LL_OPTION_ADDVARSTOFIELDS      (19                  ) /* default: false */
#define LL_OPTION_MULTIPLETABLELINES   (20                  ) /* default: true */
#define LL_OPTION_CONVERTCRLF          (21                  ) /* default: true */
#define LL_OPTION_WIZ_FILENEW          (22                  ) /* default: false */
#define LL_OPTION_RETREPRESENTATIONCODE (23                  ) /* default: LL_CHAR_NEWLINE (182) */
#define LL_OPTION_PRVZOOM_PERC         (25                  ) /* initial preview zoom */
#define LL_OPTION_PRVRECT_LEFT         (26                  ) /* initial preview position */
#define LL_OPTION_PRVRECT_TOP          (27                  )
#define LL_OPTION_PRVRECT_WIDTH        (28                  )
#define LL_OPTION_PRVRECT_HEIGHT       (29                  )
#define LL_OPTION_STORAGESYSTEM        (30                  ) /* DEPRECATED. Do not change. 0=LX4-compatible, 1=STORAGE (default)  */
#define LL_STG_COMPAT4                 (0                   )
#define LL_STG_STORAGE                 (1                   )
#define LL_OPTION_COMPRESSSTORAGE      (31                  ) /* 0, 1, 10..17 */
#define LL_STG_COMPRESS_THREADED       (0x00008000          )
#define LL_STG_COMPRESS_UNTHREADED     (0x00010000          )
#define LL_OPTION_NOPARAMETERCHECK     (32                  ) /* you need a bit more speed? */
#define LL_OPTION_NONOTABLECHECK       (33                  ) /* don't check on "NO_TABLEOBJECT" error. Default TRUE (don't check) */
#define LL_OPTION_DRAWFOOTERLINEONPRINT (34                  ) /* delay footerline printing to LlPrint(). Default FALSE */
#define LL_OPTION_PRVZOOM_LEFT         (35                  ) /* initial preview position in percent of screen */
#define LL_OPTION_PRVZOOM_TOP          (36                  )
#define LL_OPTION_PRVZOOM_WIDTH        (37                  )
#define LL_OPTION_PRVZOOM_HEIGHT       (38                  )
#define LL_OPTION_SPACEOPTIMIZATION    (40                  ) /* default: true */
#define LL_OPTION_REALTIME             (41                  ) /* default: false */
#define LL_OPTION_AUTOMULTIPAGE        (42                  ) /* default: true */
#define LL_OPTION_USEBARCODESIZES      (43                  ) /* default: false */
#define LL_OPTION_MAXRTFVERSION        (44                  ) /* default: 0xff00 */
#define LL_OPTION_VARSCASESENSITIVE    (46                  ) /* default: false */
#define LL_OPTION_DELAYTABLEHEADER     (47                  ) /* default: true */
#define LL_OPTION_OFNDIALOG_EXPLORER   (48                  ) /* DEPRECATED. Do not change.  */
#define LL_OPTION_OFN_NOPLACESBAR      (0x40000000          )
#define LL_OPTION_EMFRESOLUTION        (49                  ) /* DEPRECATED. Do not change.  */
#define LL_OPTION_SETCREATIONINFO      (50                  ) /* default: true */
#define LL_OPTION_XLATVARNAMES         (51                  ) /* default: true */
#define LL_OPTION_LANGUAGE             (52                  ) /* returns current language (r/o) */
#define LL_OPTION_PHANTOMSPACEREPRESENTATIONCODE (54                  ) /* default: LL_CHAR_PHANTOMSPACE */
#define LL_OPTION_LOCKNEXTCHARREPRESENTATIONCODE (55                  ) /* default: LL_CHAR_LOCK */
#define LL_OPTION_EXPRSEPREPRESENTATIONCODE (56                  ) /* default: LL_CHAR_EXPRSEP */
#define LL_OPTION_DEFPRINTERINSTALLED  (57                  ) /* r/o */
#define LL_OPTION_CALCSUMVARSONINVISIBLELINES (58                  ) /* default: false - only default value if no preferences in project */
#define LL_OPTION_NOFOOTERPAGEWRAP     (59                  ) /* default: false - only default value if no preferences in project */
#define LL_OPTION_IMMEDIATELASTPAGE    (64                  ) /* default: true */
#define LL_OPTION_LCID                 (65                  ) /* default: LOCALE_USER_DEFAULT */
#define LL_OPTION_TEXTQUOTEREPRESENTATIONCODE (66                  ) /* default: 1 */
#define LL_OPTION_SCALABLEFONTSONLY    (67                  ) /* default: true */
#define LL_OPTION_NOTIFICATIONMESSAGEHWND (68                  ) /* default: NULL (parent window handle) */
#define LL_OPTION_DEFDEFFONT           (69                  ) /* default: GetStockObject(ANSI_VAR_FONT) */
#define LL_OPTION_CODEPAGE             (70                  ) /* default: CP_ACP; set codepage to use for conversions. */
#define LL_OPTION_FORCEFONTCHARSET     (71                  ) /* default: false; set font's charset to the codepage according to LL_OPTION_LCID. Default: FALSE */
#define LL_OPTION_COMPRESSRTF          (72                  ) /* default: true; compress RTF text > 1024 bytes in project file */
#define LL_OPTION_ALLOW_LLX_EXPORTERS  (74                  ) /* default: true; allow ILlXExport extensions */
#define LL_OPTION_SUPPORTS_PRNOPTSTR_EXPORT (75                  ) /* default: false: hides "set to default" button in "export option" tab in designer */
#define LL_OPTION_DEBUGFLAG            (76                  )
#define LL_OPTION_SKIPRETURNATENDOFRTF (77                  ) /* default: false */
#define LL_OPTION_INTERCHARSPACING     (78                  ) /* default: false: allows character interspacing in case of block justify */
#define LL_OPTION_INCLUDEFONTDESCENT   (79                  ) /* default: true */
#define LL_OPTION_RESOLUTIONCOMPATIBLETO9X (80                  ) /* DEPRECATED. default: false  */
#define LL_OPTION_USECHARTFIELDS       (81                  ) /* default: false */
#define LL_OPTION_OFNDIALOG_NOPLACESBAR (82                  ) /* default: false; do not use "Places" bar in NT2K? */
#define LL_OPTION_SKETCH_COLORDEPTH    (83                  ) /* default: 24 */
#define LL_OPTION_FINAL_TRUE_ON_LASTPAGE (84                  ) /* default: false: internal use */
#define LL_OPTION_INTERCHARSPACING_FORCED (86                  ) /* default: false: forces character interspacing calculation in TEXT objects (possibly dangerous and slow) */
#define LL_OPTION_RTFAUTOINCREMENT     (87                  ) /* default: false, to increment RTF char pointer if nothing can be printed */
#define LL_OPTION_UNITS_DEFAULT        (88                  ) /* default: LL_OPTION_UNITS_SYSDEFAULT. Use for contols that query the units, where we need to return "sysdefault" also */
#define LL_OPTION_NO_MAPI              (89                  ) /* default: false. Inhibit MAPI load for preview */
#define LL_OPTION_TOOLBARSTYLE         (90                  ) /* default: LL_OPTION_TOOLBARSTYLE_STANDARD|LL_OPTION_TOOLBARSTYLEFLAG_DOCKABLE */
#define LL_OPTION_TOOLBARSTYLE_STANDARD (0                   ) /* OFFICE97 alike style  */
#define LL_OPTION_TOOLBARSTYLE_OFFICEXP (1                   ) /* DOTNET/OFFICE_XP alike style  */
#define LL_OPTION_TOOLBARSTYLE_OFFICE2003 (2                   )
#define LL_OPTION_TOOLBARSTYLEMASK     (0x0f                )
#define LL_OPTION_TOOLBARSTYLEFLAG_GRADIENT (0x80                ) /* starting with XP, use gradient style  */
#define LL_OPTION_TOOLBARSTYLEFLAG_DOCKABLE (0x40                ) /* dockable toolbars?  */
#define LL_OPTION_TOOLBARSTYLEFLAG_CANCLOSE (0x20                ) /* internal use only  */
#define LL_OPTION_TOOLBARSTYLEFLAG_SHRINK_TO_FIT (0x10                ) /* internal use only  */
#define LL_OPTION_MENUSTYLE            (91                  ) /* default: LL_OPTION_MENUSTYLE_STANDARD */
#define LL_OPTION_MENUSTYLE_STANDARD_WITHOUT_BITMAPS (0                   ) /* values: see CTL  */
#define LL_OPTION_MENUSTYLE_STANDARD   (1                   )
#define LL_OPTION_MENUSTYLE_OFFICEXP   (2                   )
#define LL_OPTION_MENUSTYLE_OFFICE2003 (3                   )
#define LL_OPTION_RULERSTYLE           (92                  ) /* default: LL_OPTION_RULERSTYLE_FLAT */
#define LL_OPTION_RULERSTYLE_FLAT      (0x10                )
#define LL_OPTION_RULERSTYLE_GRADIENT  (0x80                )
#define LL_OPTION_STATUSBARSTYLE       (93                  )
#define LL_OPTION_STATUSBARSTYLE_STANDARD (0                   )
#define LL_OPTION_STATUSBARSTYLE_OFFICEXP (1                   )
#define LL_OPTION_STATUSBARSTYLE_OFFICE2003 (2                   )
#define LL_OPTION_TABBARSTYLE          (94                  )
#define LL_OPTION_TABBARSTYLE_STANDARD (0                   )
#define LL_OPTION_TABBARSTYLE_OFFICEXP (1                   )
#define LL_OPTION_TABBARSTYLE_OFFICE2003 (2                   )
#define LL_OPTION_DROPWINDOWSTYLE      (95                  )
#define LL_OPTION_DROPWINDOWSTYLE_STANDARD (0                   )
#define LL_OPTION_DROPWINDOWSTYLE_OFFICEXP (1                   )
#define LL_OPTION_DROPWINDOWSTYLE_OFFICE2003 (2                   )
#define LL_OPTION_DROPWINDOWSTYLEMASK  (0x0f                )
#define LL_OPTION_DROPWINDOWSTYLEFLAG_CANCLOSE (0x20                )
#define LL_OPTION_INTERFACEWRAPPER     (96                  ) /* returns IL<n>* */
#define LL_OPTION_FONTQUALITY          (97                  ) /* LOGFONT.lfQuality, default: DEFAULT_QUALITY */
#define LL_OPTION_FONTPRECISION        (98                  ) /* LOGFONT.lfOutPrecision, default: OUT_STRING_PRECIS */
#define LL_OPTION_UISTYLE              (99                  ) /* UI collection, w/o */
#define LL_OPTION_UISTYLE_STANDARD     (0                   ) /* 90=0x40, 91=1, 92=0x10, 93=0, 94=0, 95=0x20  */
#define LL_OPTION_UISTYLE_OFFICEXP     (1                   ) /* 90=0x41, 91=2, 92=0x10, 93=1, 94=1, 95=0x21  */
#define LL_OPTION_UISTYLE_OFFICE2003   (2                   ) /* 90=0x42, 91=3, 92=0x10, 93=2, 94=2, 95=0x22  */
#define LL_OPTION_NOFILEVERSIONUPGRADEWARNING (100                 ) /* default: false */
#define LL_OPTION_UPDATE_FOOTER_ON_DATALINEBREAK_AT_FIRST_LINE (101                 ) /* default: false */
#define LL_OPTION_ESC_CLOSES_PREVIEW   (102                 ) /* shall ESC close the preview window (default: false) */
#define LL_OPTION_VIEWER_ASSUMES_TEMPFILE (103                 ) /* shall the viewer assume that the file is a temporary file (and not store values in it)? default TRUE */
#define LL_OPTION_CALC_USED_VARS       (104                 ) /* default: true */
#define LL_OPTION_NOPRINTJOBSUPERVISION (106                 ) /* default: true */
#define LL_OPTION_CALC_SUMVARS_ON_PARTIAL_LINES (107                 ) /* default: false */
#define LL_OPTION_BLACKNESS_SCM        (108                 ) /* default: 0 */
#define LL_OPTION_PROHIBIT_USERINTERACTION (109                 ) /* default: false */
#define LL_OPTION_PERFMON_INSTALL      (110                 ) /* w/o, TRUE to install, FALSE to uninstall */
#define LL_OPTION_RESERVED111          (111                 )
#define LL_OPTION_VARLISTBUCKETCOUNT   (112                 ) /* applied to future jobs only, default 1000 */
#define LL_OPTION_MSFAXALLOWED         (113                 ) /* global flag - set at start of LL! Will allow/prohibit fax detection. Default: TRUE */
#define LL_OPTION_AUTOPROFILINGTICKS   (114                 ) /* global flag - set at start of LL! Activates LL's thread profiling */
#define LL_OPTION_PROJECTBACKUP        (115                 ) /* default: true */
#define LL_OPTION_ERR_ON_FILENOTFOUND  (116                 ) /* default: false */
#define LL_OPTION_NOFAXVARS            (117                 ) /* default: false */
#define LL_OPTION_NOMAILVARS           (118                 ) /* default: false */
#define LL_OPTION_PATTERNRESCOMPATIBILITY (119                 ) /* default: false */
#define LL_OPTION_NODELAYEDVALUECACHING (120                 ) /* default: false */
#define LL_OPTION_FEATURE              (1000                )
#define LL_OPTION_FEATURE_CLEARALL     (0                   )
#define LL_OPTION_FEATURE_SUPPRESS_JPEG_DISPLAY (1                   )
#define LL_OPTION_FEATURE_SUPPRESS_JPEG_CREATION (2                   )
#define LL_OPTION_VARLISTDISPLAY       (121                 ) /* default: LL_OPTION_VARLISTDISPLAY_FOLDERPOS_TOP | LL_OPTION_VARLISTDISPLAY_VARSORT_ALPHA */
#define LL_OPTION_VARLISTDISPLAY_VARSORT_DECLARATIONORDER (0x0000              )
#define LL_OPTION_VARLISTDISPLAY_VARSORT_ALPHA (0x0001              )
#define LL_OPTION_VARLISTDISPLAY_VARSORT_MASK (0x000f              )
#define LL_OPTION_VARLISTDISPLAY_FOLDERPOS_DECLARATIONORDER (0x0000              )
#define LL_OPTION_VARLISTDISPLAY_FOLDERPOS_ALPHA (0x0010              ) /* only if LL_OPTION_VARLISTDISPLAY_VARSORT_ALPHA* is set  */
#define LL_OPTION_VARLISTDISPLAY_FOLDERPOS_TOP (0x0020              )
#define LL_OPTION_VARLISTDISPLAY_FOLDERPOS_BOTTOM (0x0030              )
#define LL_OPTION_VARLISTDISPLAY_FOLDERPOS_MASK (0x00f0              )
#define LL_OPTION_VARLISTDISPLAY_LLFOLDERPOS_BOTTOM (0x0100              )
#define LL_OPTION_VARLISTDISPLAY_INITSCROLLPOS_TOP (0x0200              )
#define LL_OPTION_VARLISTDISPLAY_ALPHASORT_RESPECT_NUMBERS (0x0400              )
#define LL_OPTION_WORKAROUND_RTFBUG_EMPTYFIRSTPAGE (122                 )
#define LL_OPTION_FORMULASTRINGCOMPARISONS_CASESENSITIVE (123                 ) /* default: true */
#define LL_OPTION_FIELDS_IN_PROJECTPARAMETERS (124                 ) /* default: false */
#define LL_OPTION_CHECKWINDOWTHREADEDNESS (125                 ) /* default: false */
#define LL_OPTION_ISUSED_WILDCARD_AT_START (126                 ) /* default: false */
#define LL_OPTION_ROOT_MUST_BE_MASTERTABLE (127                 ) /* default: false */
#define LL_OPTION_DLLTYPE              (128                 ) /* r/o */
#define LL_OPTION_DLLTYPE_32BIT        (0x0001              )
#define LL_OPTION_DLLTYPE_64BIT        (0x0002              )
#define LL_OPTION_DLLTYPE_BITMASK      (0x000f              )
#define LL_OPTION_DLLTYPE_SDBCS        (0x0010              )
#define LL_OPTION_DLLTYPE_UNICODE      (0x0020              )
#define LL_OPTION_DLLTYPE_CHARSET      (0x00f0              )
#define LL_OPTION_HLIBRARY             (129                 ) /* r/o */
#define LL_OPTION_INVERTED_PAGEORIENTATION (130                 ) /* default: false */
#define LL_OPTION_ENABLE_STANDALONE_DATACOLLECTING_OBJECTS (131                 ) /* default: false */
#define LL_OPTION_USERVARS_ARE_CODESNIPPETS (132                 ) /* default: false */
#define LL_OPTION_STORAGE_ADD_SUMMARYINFORMATION (133                 ) /* default: false */
#define LL_OPTION_INCREMENTAL_PREVIEW  (135                 ) /* default: true */
#define LL_OPTION_RELAX_AT_SHUTDOWN    (136                 ) /* default: true */
#define LL_OPTION_NOPRINTERPATHCHECK   (137                 ) /* default: false */
#define LL_OPTION_SUPPORT_HUGESTORAGEFS (138                 ) /* deprecated, always true */
#define LL_OPTION_NOAUTOPROPERTYCORRECTION (139                 ) /* default: false */
#define LL_OPTION_NOVARLISTRESET_ON_RESETPROJECTSTATE (140                 ) /* default: false; */
#define LL_OPTION_DESIGNERPREVIEWPARAMETER (141                 ) /* default: NULL */
#define LL_OPTION_RESERVED142          (142                 )
#define LL_OPTION_DESIGNEREXPORTPARAMETER (143                 ) /* default: NULL */
#define LL_OPTION_DESIGNERPRINT_SINGLETHREADED (144                 ) /* default: false */
#define LL_OPTION_ALLOW_COMMENTS_IN_FORMULA (145                 ) /* default: true */
#define LL_OPTION_USE_MLANG_LINEBREAKALGORITHM (146                 ) /* default: false (would use MLANG to calculate the line break algorithm) */
#define LL_OPTION_USE_JPEG_OR_PNG_OPTIMIZATION (147                 ) /* default: true */
#define LL_OPTION_ENABLE_IMAGESMOOTHING (148                 ) /* default: true (uses GDIPLUS - no smoothing on Win2000/98 if not GDIPLUS installed! Right now, applies only to JPEG.) */
#define LL_OPTION_MAXRTFVERSION_AVAILABLE (159                 ) /* r/o */
#define LL_OPTION_CONDREPRESENTATIONCODES_LIKE_ANSI (160                 ) /* default: false */
#define LL_OPTION_NULL_IS_NONDESTRUCTIVE (161                 ) /* default: false */
#define LL_OPTION_DRILLDOWNPARAMETER   (162                 ) /* default: NULL */
#define LL_OPTION_ROUNDINGSTRATEGY     (163                 ) /* default: LL_ROUNDINGSTRATEGY_ARITHMETIC_SYMMETRIC */
#define LL_ROUNDINGSTRATEGY_BANKERSROUNDING (0                   )
#define LL_ROUNDINGSTRATEGY_ARITHMETIC_SYMMETRIC (1                   )
#define LL_OPTION_RESERVED164          (164                 )
#define LL_OPTION_RESERVED165          (165                 )
#define LL_OPTION_PICTURE_TRANSPARENCY_IS_WHITE (166                 ) /* default: false (transparent) */
#define LL_OPTION_FLOATPRECISION       (167                 ) /* global (not job specific!). Default: 0 (192 bit mantissa, 32 bit exponent) */
#define LL_OPTION_SUPPRESS_LRUENTRY    (168                 )
#define LL_OPTION_FORCEFIRSTGROUPHEADER (169                 ) /* default: false (group match string is an empty string) */
#define LL_OPTION_SUPPORT_PDFINPUTFIELDS (170                 ) /* PDF 3.0 supports text objects and check boxes as input objects - default: true */
#define LL_OPTION_ENHANCED_SKIPRETURNATENDOFRTF (171                 ) /* default: false. */
#define LL_OPTION_HIERARCHICALDATASOURCE (172                 ) /* default: false */
#define LL_OPTION_FORCE_HEADER_EVEN_ON_LARGE_FOOTERLINES (173                 ) /* default: false */
#define LL_OPTION_PRINTERDEVICEOPTIMIZATION (174                 ) /* default: true */
#define LL_OPTION_RTFHEIGHTSCALINGPERCENTAGE (175                 ) /* default: 100 */
#define LL_OPTION_FORCE_DEFAULT_PRINTER_IN_PREVIEW (176                 ) /* default: false */
#define LL_OPTION_SAVE_PROJECT_IN_UTF8 (178                 ) /* INT, default 0 (meaning: project is saved as UTF16 if A API is not used), 1 (UTF-8 with BOM), 2 (UTF-8 without BOM) */
#define LL_DRILLDOWNFILTERSTRATEGY_ALLOW_ONLY_SUBTABLES (0                   )
#define LL_DRILLDOWNFILTERSTRATEGY_ALLOW_ALL_TABLES (1                   )
#define LL_DRILLDOWNFILTERSTRATEGY_ALLOW_SUBTABLES_AND_UNRELATED (2                   )
#define LL_DRILLDOWNFILTERSTRATEGY_ALLOW_SUBTABLES_AND_USERDEFINED (3                   )
#define LL_DRILLDOWNFILTERSTRATEGY_MASK (0x0f                )
#define LL_DRILLDOWNFILTERFLAG_OFFER_BASERECORD_AS_VARIABLES (0x10                )
#define LL_OPTION_DRILLDOWN_DATABASEFILTERING (179                 ) /* default: 0 (filter all except subtables of the base table: LL_DRILLDOWNFILTERSTRATEGY_ALLOW_ONLY_SUBTABLES) */
#define LL_OPTION_SUPPRESS_TASKBARBUTTON_PROGRESSSTATE (180                 ) /* default: false */
#define LL_OPTION_PRINTDLG_DEVICECHANGE_KEEPS_DEVMODESETTINGS (181                 ) /* default: true */
#define LL_OPTION_DRILLDOWN_SUPPORTS_EMBEDDING (182                 ) /* default: true */
#define LL_VARLISTCLEARSTRATEGY_EMPTY_LIST (0                   )
#define LL_VARLISTCLEARSTRATEGY_SET_NULL (1                   )
#define LL_VARLISTCLEARSTRATEGY_SET_DEFAULT (2                   )
#define LL_OPTION_VARLISTCLEARSTRATEGY_ON_DEFINE_START (183                 ) /* default: LL_VARLISTCLEARSTRATEGY_EMPTY_LIST */
#define LL_OPTION_RESERVED184          (184                 )
#define LL_OPTION_KEEP_EMPTY_SUM_VARS  (185                 ) /* default: false */
#define LL_OPTION_RESERVED187          (187                 ) /* internal test flag */
#define LL_OPTION_DEFAULTDECSFORSTR    (188                 ) /* default: 5. Sets the default number of decimals for Str$ */
#define LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_PRINTJOB (189                 ) /* default: false */
#define LL_OPTION_DEFINEXXXSTART_COMPATIBLE_TO_PRE15 (190                 )
#define LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_DC (191                 ) /* default: true */
#define LL_OPTION_BITMAP_RESOLUTION_FOR_PREVIEW (192                 ) /* default: 0 (leave original size), suggestions are 300 or 600. -1 to use device default. */
#define LL_OPTION_DRAW_EMPTY_CHARTOBJECTS (193                 ) /* default: false */
#define LL_OPTION_PREVIOUS_DEFAULTS_TO_NULL (194                 ) /* default: false (for compatibility). Previous() returns NULL on first record if TRUE, otherwise some default value for the given datatype. */
#define LL_OPTION_FORCE_IMAGEEMBEDDING (195                 ) /* default: false. Images added via the image dialog are always embedded. */
#define LL_OPTION_VARKEY_MAP_SHARP_S_TO_SS (196                 ) /* default: false */
#define LL_OPTION_NO_LAYERED_WINDOWS   (197                 ) /* default: false */
#define LL_OPTION_SCALED_PERCENTAGEFORMATTER (198                 ) /* default: false (0.1="0.1%", true: 0.1="10%") */
#define LL_OPTION_USE_ANTIALIAS        (199                 ) /* default: true */
#define LL_OPTION_FORCETABLELINECALLBACK (200                 ) /* LL_CMND_TABLE_LINE is called even when COLORINGMODE_LL ist set, default: false */
#define LL_OPTION_EXPORTCONSUMER       (201                 ) /* internal use only */
#define LL_OPTION_TOC_IDX_ITEMID       (202                 ) /* internal use only */
#define LL_OPTION_FORCED2PASSMODE      (203                 ) /* default: false */
#define LL_OPTION_SETVAR_ONLY_SETS_IF_CONTAINER_PRINTS (204                 ) /* default: false */
#define LL_OPTION_SHOW_PREVIEW_AFTER_PRINT_END (206                 ) /* "Export-ShowResult" sets this for PRV... */
#define LL_OPTION_PROPLIST_COMBOBOX_SCROLL_WRAPS (207                 ) /* default: FALSE */
#define LL_OPTION_ALWAYS_CALC_GROUPCHANGE_CONDITION (208                 ) /* default: false */
#define LL_OPTION_NULLHANDLING_SUPPORTED_IN_ENHMODE (209                 ) /* default: false  */
#define LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_PREVIEWJOB (210                 ) /* default: true */
#define LL_OPTION_USE_LEGACY_WORDWRAPPINGALGORITHM (211                 ) /* default: false */
#define LL_OPTION_PREVIEW_USES_PRINTTHREAD (212                 ) /* default: true */
#define LL_OPTION_LL_SUPPLIES_MESSAGELOOP_WHILE_PRINTING_TO_PREVIEW (213                 ) /* default: true */
#define LL_OPTION_PRINTERDCCACHE_TIMEOUT_SEC (214                 ) /* default: 60 (0 -> no cache) */
#define LL_OPTION_DESIGNER_RIBBONBACKGROUNDCOLOR (215                 ) /* default: undefined (system default) */
#define LL_OPTION_INTERNAL_EMFCLEANUP  (216                 ) /* no comment -> internal! */
#define LL_OPTION_RIBBON_DEFAULT_ENABLEDSTATE (217                 ) /* default: true */
#define LL_OPTION_PRVFILEVERSION       (218                 ) /* default: 0 (2 would be an optimized version, supported since LL18, usually a bit faster if printing > 5000 pages) */
#define LL_OPTION_TRY_REDUCE_BMPSIZE_BY_CONVERTING_TO_PNG_OR_JPEG (219                 ) /* default: false */
#define LL_OPTION_NO_IMAGEFILEOPTIMIZATION (220                 ) /* default: false. Set this to TRUE if you know you're replacing an image file during printing that is used in a project using its file name */
#define LL_OPTION_NO_ENFORCED_GROUPFOOTERPRIORITY_FOR_LAST_GROUPFOOTER (221                 ) /* default: false. Compatibility to LL 16.008. */
#define LL_OPTION_ALLOW_COMBINED_COLLECTING_OF_DATA_FOR_COLLECTIONCONTROLS (222                 ) /* default: true */
#define LL_OPTION_SUPPRESS_LOADERRORMESSAGES (223                 ) /* default: false. Please take care that this is a reference counted flag, so add (true) and subtract (false) the same number of calls! [ChK] */
#define LL_OPTION_IGNOREFORMULARESULTMISMATCH_AT_LOADTIME (224                 ) /* default: false. Switches the r8117 (err #3535) change back to the old behavior */
#define LL_OPTION_MAX_SIZE_OF_PROJECTINFOCACHE (225                 ) /* default: 1000 */
#define LL_OPTION_NO_CORRECTION_OF_UNICODE_RTF (226                 ) /* default: false */
#define LL_OPTION_MAY_RELEASE_UNNECESSARY_PROPS_AT_PRINTTIME (227                 ) /* default: false */
#define LL_OPTION_DO_NOT_RESTORE_PREVSTATE_ON_FILTER_MISMATCH (228                 ) /* default: false (LL17: implicitly TRUE until 17.006) */
#define LL_OPTION_SUPPORT_USERDEFINED_REPORTPAGELAYOUT (229                 ) /* default: false */
#define LL_OPTION_DESIGNER_RIBBONTEXTCOLOR (230                 ) /* default: undefined (system default) */
#define LL_PARTSHARINGFLAG_VARIABLES_TOC (0x01                )
#define LL_PARTSHARINGFLAG_VARIABLES_IDX (0x02                )
#define LL_PARTSHARINGFLAG_VARIABLES_GTC (0x04                )
#define LL_OPTION_PARTSHARINGFLAGS     (231                 ) /* default: 0xff */
#define LL_OPTION_PIECHARTORDER_COMPATIBLE_TO_PRE19 (232                 ) /* default: 1 (LL18), 0 (>= LL19) */
#define LL_OPTION_DATABASESTRUCTURE_SORT_DECLARATIONORDER (233                 ) /* default: false (sorted alphabetically) */
#define LL_OPTION_REPORT_PARAMETERS_REALDATAJOBPARAMETER (234                 ) /* default: NULL */
#define LL_OPTION_EXPANDABLE_REGIONS_REALDATAJOBPARAMETER (235                 ) /* default: NULL */
#define LL_OPTION_IMPROVED_TABLELINEANCHORING (236                 ) /* default: TRUE */
#define LL_OPTION_INTERACTIVESORTING_REALDATAJOBPARAMETER (237                 ) /* default: NULL */
#define LL_OPTION_TEMPFILESTRATEGY     (238                 ) /* default: LL_TEMPFILESTRATEGY_SPEED */
#define LL_TEMPFILESTRATEGY_SPEED      (0                   )
#define LL_TEMPFILESTRATEGY_SIZE       (1                   )
#define LL_TEMPFILESTRATEGY_SECURITY   (2                   )
#define LL_OPTION_RTF_WHITE_BACKGROUND_IS_TRANSPARENT (239                 ) /* default: TRUE (!) */
#define LL_OPTION_NO_DOTTED_LINE_ON_SECONDARY_AXIS (240                 ) /* default: FALSE */
#define LL_OPTION_NO_PREVIOUS_VARLIST  (241                 )
#define LL_OPTION_COMMIT_FILE_ON_SAVE  (242                 ) /* default: false */
#define LL_OPTION_DO_NOT_RTRIM_CELLTEXT (243                 ) /* default: false */
#define LL_OPTION_ALLOW_FCT_TEXTWIDTH  (244                 ) /* default: false */
#define LL_OPTION_PASTEOBJECTS_TO_FIRST_VISIBLE_LAYER (245                 ) /* default: false */
#define LL_OPTION_EMPTY_FILE_TRIGGERS_PROJECT_WIZARD (246                 ) /* default: false */
#define LL_OPTION_DELAY_UPDATE_REMAININGTABLESPACE (247                 ) /* default: false  */
#define LL_OPTION_WIZARD_ADDS_ORGNAME_TO_UI (248                 ) /* default: false */
#define LL_OPTION_PROHIBIT_EXTERNAL_FILES (249                 ) /* default: false */
#define LL_OPTION_DRAWINGS_INLINED     (250                 ) /* default: 0 (1 = inlined, 2 = leave as is, but no BLOBs - for GTC) */
#define LL_OPTION_SERIALIZE_PRINTAPI   (251                 ) /* default: false */
#define LL_OPTION_PROJECTFILELOCKTIMEOUT_IN_MS (252                 ) /* default: 10000 */
#define LL_OPTION_ILLDATAPROVIDER      (253                 )
#define LL_OPTION_RTF_SUPPORTS_PARABREAKOPTIONS (254                 ) /* default: false */
#define LL_OPTION_FORCE_PDFEMBEDDING   (255                 ) /* default: false. PDF documents added via the pdf dialog are always embedded */
#define LL_OPTION_IGNORE_NONSCALEABLEFONTPROPERTIES (256                 ) /* default: false. PDF documents added via the pdf dialog are always embedded */
#define LL_DATAPROVIDERTHREADNESS_NONE (0                   )
#define LL_DATAPROVIDERTHREADNESS_ONE_INSTANCE_PER_THREAD (1                   )
#define LL_DATAPROVIDERTHREADNESS_DONTCARE (2                   ) /* default  */
#define LL_OPTION_DATAPROVIDER_THREADEDNESS (257                 )
#define LL_OPTION_SUBREPORT_BASE       (258                 )
#define LL_OPTION_SUBREPORT_CLIENT     (259                 )
#define LL_OPTION_NO_IPICTURE_SUPPORT  (260                 ) /* default: false */
#define LL_OPTION_FORCE_JPEG_RECOMPRESSION (261                 ) /* default: false */
#define LL_OPTION_TEXTWRAP_TOLERANCE_PERC (262                 ) /* default: 0 (no tolerance) */
#define LL_OPTION_NO_USERVARCHECK_ON_LOAD (263                 ) /* default: false */
#define LL_OPTION_TOC_IDX_PAGE         (264                 ) /* internal use only */
#define LL_OPTION_RTF_TAB_KEY_IS_TAB_FORMATTER (265                 ) /* default: false */
#define LL_OPTION_VARLISTDISPLAY_LL_FOLDER_AT_END (266                 ) /* default: false */
#define LL_OPTION_DOM_DO_NOT_KILL_EMPTY_TABLE (267                 ) /* default: false */
#define LL_OPTION_ENABLE_INPUTOBJECTS_IN_TABLES (268                 ) /* default: true */
#define LL_OPTION_MAX_ENTRIES_FOR_AUTOCOMPLETE (269                 ) /* default: 200 */
#define LL_OPTION_DEFAULT_FOR_SHADOWPAGEWRAP (270                 ) /* default: true */
#define LL_OPTION_MAX_UNDO_STEPS       (271                 ) /* default: 10 */
#define LL_OPTION_HTML_USE_MAILFORMAT  (272                 ) /* default: false */
#define LL_OPTION_CLIP_LABELS_TO_PROJECTAREA (273                 ) /* default: false (may paint beyond the border not to lose any data) */
#define LL_OPTION_RESETPROJECTSTATE_FORCES_NEW_EXPORTJOB (274                 )
#define LL_OPTION_SCRIPTENGINE_ENABLED (276                 ) /* default: false */
#define LL_OPTION_SCRIPTENGINE_TIMEOUTMS (277                 ) /* default: 10000 */
#define LL_OPTION_SCRIPTENGINE_AUTOEXECUTE (278                 ) /* default: false */
#define LL_OPTION_SHAPEFILE_TIMEOUTMS  (279                 ) /* default: 1000  */
#define LL_OPTION_COUNTALLPRINTEDDATA_LASTPRINT (280                 ) /* r/o */
#define LL_OPTION_SAVE_AS_ACTS_AS_EXPORT (281                 ) /* default: false */
#define LL_OPTION_RESETPROJECTSTATE_TRIGGERS_NEW_SHEET (282                 ) /* default: true */
#define LL_OPTION_HIDE_EXPORT_TAB_FROM_LAYOUT_CONFIG (283                 ) /* default: false */
#define LL_OPTION_USE_VARLIST_NAMESORTINDEXCACHE (284                 ) /* should be defined for job -1 */
#define LL_OPTION_NOCONTRASTOPTIMIZATION (285                 ) /* default: false */
#define LL_OPTION_AUTORECOVERY_DISABLED (286                 ) /* default: false */
#define LL_OPTION_AUTORECOVERY_SAVEOPTIONS (287                 ) /* default: LL_AUTORECOVERY_SAVEOPTIONS_NEWFILE (value might be combination of following) */
#define LL_AUTORECOVERY_SAVEOPTIONS_NEWFILE (1                   )
#define LL_AUTORECOVERY_SAVEOPTIONS_OVERWRITE (2                   )
#define LL_OPTION_LINK_PRINTERQUEUES   (288                 ) /* default: false, does not work yet */
#define LL_OPTION_FORCE_RTFMERGING     (289                 ) /* default: false, forces to merge RTF contents even if there is just one part to load, compatibility switch */
#define LL_OPTION_W201512300001        (290                 ) /* do not check on empty bodylines for "ActivateNextLine" - sort of "I know what I am doing in my print loop" */
#define LL_OPTION_CALCLINEHEIGHT_COMPATIBLE_TO_19 (291                 ) /* LL19 had a wrong line height calculation, force compatible mode. Default: false. */
#define LL_OPTION_FORCE_UNIQUE_PARAMETERUISTRING (292                 ) /* Report parameter UI strings will be forced as unique. Default: false. */
#define LL_OPTION_AUTOMATICFOOTER      (293                 ) /* Creates automatically footer-line in table-line wizard. Default: true. */
#define LL_OPTION_SUPPORT_PREDEFINED_COLORS (294                 ) /* default: for design/print job: always true. Otherwise false. */
#define LL_OPTION_FAVORITE_SETTINGS    (295                 ) /* default: display button and use registry settings */
#define LL_FAVORITES_ENABLE_FAVORITES_BY_DEFAULT (0x0001              )
#define LL_FAVORITES_HIDE_FAVORITES_BUTTON (0x0002              )
#define LL_OPTION_NEWMODE_EXPRSTARTREPRESENTATIONCODE (296                 ) /* default: 0xab */
#define LL_OPTION_NEWMODE_EXPRENDREPRESENTATIONCODE (297                 ) /* default: 0xbb */
#define LL_OPTION_RESERVED_298         (298                 ) /* outdated, not used any more */
#define LL_OPTION_ILLREPOSITORY        (299                 ) /* host repository */
#define LL_OPTION_VARLISTLOOKUP_ALLOWS_GLOBALNAME (300                 ) /* default: 0 */
#define LL_OPTION_FORCESAVEDESIGNSCHEME (301                 ) /* default: false */
#define LL_OPTION_REPOSITORY_SINGLEPROJECTMODE (302                 ) /* default: false */
#define LL_OPTION_ANIMATIONS_DISABLED  (303                 ) /* default: 0 */
#define LL_OPTION_ANIMATIONS_DISABLED_DISABLEALL (0x01                )
#define LL_OPTION_ANIMATIONS_DISABLED_HIDE_STD (0x02                )
#define LL_OPTION_ANIMATIONS_DISABLED_HIDE_HTML (0x04                ) /*    */
#define LL_OPTION_UPDATE_INTERACTIONINFO_PER_PAGE (304                 ) /* default: false. "true" means some overhead per page */
#define LL_OPTION_IS_REPORTSERVERDESIGNER (305                 ) /* internal */
#define LL_OPTION_IMPROVED_FRAMEDRAWING (306                 ) /* default: false */
#define LL_OPTION_POSTPAINT_TABLESEPARATORS (307                 ) /* default: true */
#define LL_OPTION_CROSSTAB_USE_CELLVALUE_INSTEAD_OF_DISPLAYVALUE (308                 ) /* default: false; */
#define LL_OPTION_SUPPORT_DELAYEDFIELDDEFINITION (309                 ) /* default: false */
#define LL_OPTION_SUPPRESS_REALDATAPREVIEW_IN_DESIGNER (310                 ) /* default: false */
#define LL_OPTION_MAX_RTFCONTROLS_IN_CACHE (311                 ) /* default: 50 */
#define LL_OPTION_RDPEXPORT_CREATEMPFILEUNTILSAVEDONCE (312                 ) /* internal */
#define LL_OPTION_CRC32_ONLY_FOR_RTFDATA_ABOVE (313                 ) /* limit of RTF stream size (in KB) up to which RTF text and BLOBs are compared using MD5 - above, it's CRC32 only. Default: 100 KB */
#define LL_OPTION_PRINTER_FILE_SUPERSEDES_EXPORT_OPTIONS (314                 ) /* settings in printer file supersede explicit export options */
#define LL_OPTION_TRANSLATIONFLAGS     (315                 ) /* default: both directions. Right now, only the omittance of _SAVE works. */
#define LL_TRANSLATION_LOAD            (0x01                )
#define LL_TRANSLATION_SAVE            (0x02                )
#define LL_OPTION_PREVIEW_SCALES_RELATIVE_TO_PHYSICAL_SIZE (316                 ) /* needs >= Windows 8.1. Stored in preview file to modify behaviour in viewer */
#define LL_PREVIEW_SCALE_PHYSICAL_DESIGNERPREVIEW (0x01                )
#define LL_PREVIEW_SCALE_PHYSICAL_PREVIEW (0x02                )
#define LL_OPTION_NODEFAULTFONTOVERRIDE (317                 ) /* default: false */
#define LL_OPTION_TREEVIEWFILTER_VISIBILITYFLAGS (318                 ) /* default: LL_TREEVIEWFILTER_IN_ALL_TREES */
#define LL_TREEVIEWFILTER_IN_VARTREE   (0x0001              )
#define LL_TREEVIEWFILTER_IN_FCTWIZARD_VARTREE (0x0002              )
#define LL_TREEVIEWFILTER_IN_ALL_TREES (0xffff              )
#define LL_OPTION_COMPAT_ALLOW_INVALID_CHARS_IN_SINGLEFIELDFORMULA (319                 ) /* default: FALSE */
#define LL_OPTION_TREEVIEWFILTER_MAXIMUM_RECURSION_SEARCH_DEPTH (320                 ) /* default: 10 */
#define LL_OPTION_USER_ABORT_CANCELS_POSTPRINTPROCESSING (321                 ) /* default: false */
#define LL_OPTION_NOTOCRESET_ON_RESETPROJECTSTATE (322                 ) /* default: false */
#define LL_OPTION_NOIDXRESET_ON_RESETPROJECTSTATE (323                 ) /* default: false */
#define LL_OPTION_SUPPRESS_FORMULASUBITEMS_IN_VARTREE (324                 ) /* default: false */
#define LL_OPTION_TEMPLATE_OVERRIDES_USER_DESIGNSCHEME (325                 ) /* default: true */
#define LL_OPTION_ALLOW_ASSUMPTION_PRINTERS_CAN_PRINT_MULTIPLE_JOBS_IN_ONE_HDC (326                 ) /* default: true */
#define LL_OPTION_PERSISTENT_PRINTER_USE_FOR_OUTPUT (327                 ) /* default: false */
#define LL_OPTION_GET_CURRENT_PROJECTTYPE (328                 ) /* R/O */
#define LL_OPTION_DELAY_CALC_OF_USED_VARS (329                 ) /* default: false */
#define LL_OPTION_USE_FONT_SIZE_AS_MAXIMUM_SIZE_FOR_TEXTFITTING (330                 ) /* default: false */
#define LL_OPTION_CLIP_FIELDS_EXCEEDING_TABLE_WIDTH (331                 ) /* default: 0 */
#define LL_CLIP_FIELDS_VISUALLY        (1                   )
#define LL_CLIP_FIELDS_FIT_AT_LOAD_TIME (2                   )
#define LL_CLIP_FIELDS_FIT_AT_LOAD_TIME_PRINTING_ONLY (3                   )
#define LL_CLIP_FIELDS_FIT_COMPAT      (4                   )
#define LL_CLIP_FIELDS_METHOD_MASK     (0x0f                )
#define LL_CLIP_FIELDS_FLAG_IGNORE_APPEARANCE_CONDITION (0x10                )
#define LL_CLIP_FIELDS_FLAG_INCLUDE_NONCONST_WIDTH (0x20                )
#define LL_OPTION_COMPAT_ALLOW_FIELDS_IN_PROJECT_FILTER (332                 ) /* default: false */
#define LL_OPTION_SUPPRESS_CELLCLIPPING_TO_REPORTCONTAINER (333                 ) /* default: false */
#define LL_OPTION_RSCRIPT_MULTIJOBEXECUTION (334                 ) /* default: 0 */
#define LL_OPTION_RETRIES_FOR_STARTDOC (335                 ) /* INT, default: 1 */
#define LL_OPTION_PRN_FORCE_PROJECTSIZE_AS_PAPERSIZE (336                 ) /* default: 0 (1: if "ForcePaperFormat"=TRUE, do not iterate available paper formats and look up a matching one, just put the selected size in the DEVMODE structure and hope for the printer to accept it. 3: ) */
#define LL_OPTION_IS_PRINTING          (337                 ) /* r/o, returns if there's an active print job for the current job */
#define LL_OPTION_IDLEITERATIONCHECK_MAX_ITERATIONS (338                 ) /* 0 = no check. default: 0 */
#define LL_REPOSITORYTHREADNESS_NONE   (0                   )
#define LL_REPOSITORYTHREADNESS_DONTCARE (1                   ) /* default  */
#define LL_REPOSITORYTHREADNESS_QUERY  (2                   )
#define LL_OPTION_REPOSITORY_THREADEDNESS (339                 )
#define LL_OPTION_ALLOW_EMPTY_STRING_IN_XLAT (340                 ) /* default: false */
#define LL_OPTION_GTC_LASTPOSITION_CONSIDER_INDEX (341                 ) /* default: false */
#define LL_OPTION_DESIGNERACTIONMESSAGE (342                 ) /* r/o - joba handle can be any value, this is global */
#define LL_DESIGNERACTION_REFRESH_VARTREE (1                   )
#define LL_OPTION_DESIGNERFRAME_HWND   (343                 ) /* r/o */
#define LL_OPTION_MULTISECTIONPRINT_MERGE (344                 ) /* r/o */
#define LL_OPTION_COMPAT_ALLOW_FIELDS_IN_STATIC_TABLE (345                 ) /* default: FALSE */
#define LL_OPTION_COMPAT_GROUPHEADER_SAME_PAGE_LOCAL_ONLY (346                 ) /* default: false (must be set to true to behave as LL24) */
#define LL_OPTION_RESERVED_348         (348                 ) /* see #37979 */
#define LL_OPTION_COMPAT_PROHIBITFILTERRELATIONS (349                 ) /* default: FALSE */
#define LL_OPTION_ONLY_SHOW_EXISTING_PAPERSIZES_FOR_PRINTER (350                 ) /* default: false... do not add system defined papers to the ist of the printer's paper sizes unless the driver does not return any */
#define LL_OPTION_DEFAULT_DECIMALS     (351                 ) /* default: settings from registry/2. ATTENTION: global option */
#define LL_OPTION_ILLPREPRINTTEXTPROCESSOR (353                 ) /* ILLPrePrintTextProcessor */
#define LL_OPTION_USERVAR_TRACKTEMPLATEOVERRIDE (354                 ) /* default: false */
#define LL_OPTION_PROJECTVAR_IGNOREEMPTY (355                 ) /* default: false */
#define LL_OPTION_SUPPRESS_FUNCTION_POPUP (356                 ) /* default: false */
#define LL_OPTION_SUPPRESS_SYMBOLFONTMAPPING (357                 ) /* default: false - attn: global option! */
#define LL_OPTION_COMPAT_ENABLE_FORCEWRAP_ON_EXPORT (358                 ) /* default: false */
#define LL_OPTION_SORTINDEX_LCMAP_INITFLAGVALUE (359                 ) /* default: 0x1400 */
#define LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE (360                 ) /* default: 0 */
#define LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE_NEUTRAL (0                   ) /* default  */
#define LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE_OPEN (1                   )
#define LL_OPTION_EXPANDABLE_REGIONS_FORCE_STATE_CLOSE (2                   )
#define LL_OPTION_COMPAT_NULL_IN_COND_ARG1_YIELDS_NULL (361                 ) /* default: false */
#define LL_OPTION_SUPPRESSCROSSTHREADEDWARNING (362                 ) /* default: 0 */
#define LL_OPTION_ALLOWSUBREPORTS      (363                 ) /* default: 1 */
#define LL_OPTION_INTERNALRELOADOPERATION (364                 ) /* default: 0 */
#define LL_INTERNALRELOADOPERATION_NEUTRAL (0                   ) /* default  */
#define LL_INTERNALRELOADOPERATION_LOAD (1                   )
#define LL_INTERNALRELOADOPERATION_ERRORLIST (2                   )
#define LL_OPTION_COMPAT_BODYLINE_CELL_MAY_WRAP_EMPTY_ON_FIRST_PRINT (365                 ) /* default: false */
#define LL_OPTION_RTFEDITOR_SUPPRESS_KEYBOARDAUTOSWITCH (366                 ) /* default: false */
#define LL_OPTION_BUILDTREERECURSEOPTIONS (367                 ) /* default: 32 threshold for active stacksize based formula evaluation recursion detection */
#define LL_OPTION_GROUPFOOTERS_ARE_IMMUTABLE (368                 ) /* default: false */
#define LL_OPTION_DOM_MULTITHREADED_ACCESS (369                 ) /* default: false */
#define LL_OPTION_CHART_LL27_FEATURES  (370                 ) /* default: 0 */
#define LL_OPTION_SET_PREVIEW_ID_IN_ASSOC_FOR_SINGLETHREADED_PRINT (371                 ) /* w/o, internal. Important for single-threaded preview */
#define LL_OPTION_SUPPRESS_TOOLTIPHINTS (372                 ) /* default: false */
#define LL_OPTION_PROJECTPARAMETER_PRINTLANGUAGE_SHOW (373                 ) /* default: false */
#define LL_OPTION_TABLENAMETRANSLATION_NOT_DISTINCT (374                 ) /* default: false */
#define LL_OPTION_PRINTERLESS          (375                 ) /* default: false */
#define LL_OPTION_WEBDESIGNER_STATEFLAGS (376                 ) /* internal */
#define LL_WEBDESIGNER_STATEFLAGS_ACTIVE (0x1                 )
#define LL_WEBDESIGNER_STATEFLAGS_PRINTING (0x2                 )
#define LL_WEBDESIGNER_STATEFLAGS_INTERNAL_MASK (0xffff0000          )
#define LL_WEBDESIGNER_STATEFLAGS_INTERNAL_TOCIDXATROOT (0x10000             )
#define LL_OPTION_DOM_IGNORE_EXPRESSIONERRORS (377                 ) /* internal */
#define LL_OPTION_SUPPRESS_EMPTY_PAGES_ON_PRINT (378                 ) /* default: false */
#define LL_OPTION_VIRTUALDEVICE_SCALINGOPTIONS (379                 )
#define LL_VIRTUALDEVICE_SCALINGOPTION_UNSCALED (0                   ) /* factor 1 (dim(DC) = dim(Project)/DPI(DC))  */
#define LL_VIRTUALDEVICE_SCALINGOPTION_OPTIMIZE_TO_SCREENRES (1                   ) /* optimize DPI according to dim(DC)  */
#define LL_VIRTUALDEVICE_SCALINGOPTION_OPTIMIZE_TO_SCREENRES_AT_LEAST_ONE (2                   ) /* optimize DPI according to dim(DC), but don't scale below 1 (dim(Project)/DPI(DC))  */
#define LL_VIRTUALDEVICE_SCALINGOPTION_FIXED_DPI_THRESHOLD_MIN (72                  ) /* use any value above or equal (and below or equal to _MAX) as the resolution in DPI  */
#define LL_VIRTUALDEVICE_SCALINGOPTION_FIXED_DPI_THRESHOLD_MAX (2400                )
#define LL_OPTION_IGNORE_PROJECTSOURCE_FOR_DEVICEMATCHING (380                 ) /* default: false */
#define LL_OPTION_COMPAT_KEEPCASEDIFFONLYTABLENAMES (381                 ) /* default: false */
#define LL_OPTION_COMPAT_CROSSTAB_GANTT_SUPPORT_MINHEIGHTVALUE (382                 ) /* default: false */
#define LL_OPTION_RTF_SHARE_OBJECTS_THRESHOLD (383                 ) /* default: 100 */
#define LL_OPTION_COMPAT_PROHIBIT_DYNAMIC_REPORTPARAMETERCOLLECTION (384                 ) /* default: false */
#define LL_OPTION_COMPAT_FORCE_PRNOPT_PAGE (385                 ) /* internal */
#define LL_OPTION_INTENTIONAL_USER_ABORT (386                 ) /* internal, R/O */
#define LL_OPTION_PROHIBIT_OLE_OBJECTS_IN_RTF (387                 )
#define LL_OPTION_COMPAT_ENABLE_EMF_OPTIMIZATION_IN_PDF_OBJECT (388                 ) /* default: false, LL28: true */
#define LL_OPTION_USESIMPLEWINDOWSPENSTYLE_FRAMEDRAWING (389                 ) /* default: false */
#define LL_OPTIONSTR_LABEL_PRJEXT      (0                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_LABEL_PRVEXT      (1                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_LABEL_PRNEXT      (2                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_CARD_PRJEXT       (3                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_CARD_PRVEXT       (4                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_CARD_PRNEXT       (5                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_LIST_PRJEXT       (6                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_LIST_PRVEXT       (7                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_LIST_PRNEXT       (8                   ) /* internal... (compatibility to L6) */
#define LL_OPTIONSTR_LLXPATHLIST       (12                  )
#define LL_OPTIONSTR_SHORTDATEFORMAT   (13                  )
#define LL_OPTIONSTR_DECIMAL           (14                  ) /* decimal point, default: system */
#define LL_OPTIONSTR_THOUSAND          (15                  ) /* thousands separator, default: system */
#define LL_OPTIONSTR_CURRENCY          (16                  ) /* currency symbol, default: system */
#define LL_OPTIONSTR_EXPORTS_AVAILABLE (17                  ) /* r/o */
#define LL_OPTIONSTR_EXPORTS_ALLOWED   (18                  )
#define LL_OPTIONSTR_DEFDEFFONT        (19                  ) /* in "{(r,g,b),size,<logfont>}" */
#define LL_OPTIONSTR_EXPORTFILELIST    (20                  )
#define LL_OPTIONSTR_VARALIAS          (21                  ) /* "<local>=<global>" */
#define LL_OPTIONSTR_MAILTO            (24                  ) /* default TO: address for mailing from viewer */
#define LL_OPTIONSTR_MAILTO_CC         (25                  ) /* default CC: address for mailing from viewer */
#define LL_OPTIONSTR_MAILTO_BCC        (26                  ) /* default BCC: address for mailing from viewer */
#define LL_OPTIONSTR_MAILTO_SUBJECT    (27                  ) /* default subject for mailing from viewer */
#define LL_OPTIONSTR_SAVEAS_PATH       (28                  ) /* default filename for saving the LL file from viewer */
#define LL_OPTIONSTR_LABEL_PRJDESCR    (29                  ) /* "Etikett" ... */
#define LL_OPTIONSTR_CARD_PRJDESCR     (30                  )
#define LL_OPTIONSTR_LIST_PRJDESCR     (31                  )
#define LL_OPTIONSTR_LLFILEDESCR       (32                  ) /* "Vorschau-Datei" */
#define LL_OPTIONSTR_PROJECTPASSWORD   (33                  ) /* w/o, of course :) */
#define LL_OPTIONSTR_FAX_RECIPNAME     (34                  )
#define LL_OPTIONSTR_FAX_RECIPNUMBER   (35                  )
#define LL_OPTIONSTR_FAX_QUEUENAME     (36                  )
#define LL_OPTIONSTR_FAX_SENDERNAME    (37                  )
#define LL_OPTIONSTR_FAX_SENDERCOMPANY (38                  )
#define LL_OPTIONSTR_FAX_SENDERDEPT    (39                  )
#define LL_OPTIONSTR_FAX_SENDERBILLINGCODE (40                  )
#define LL_OPTIONSTR_FAX_AVAILABLEQUEUES (42                  ) /* r/o (Tab-separated) [job can be -1 or a valid job] */
#define LL_OPTIONSTR_LOGFILEPATH       (43                  )
#define LL_OPTIONSTR_LICENSINGINFO     (44                  ) /* w/o, SERNO to define licensing state */
#define LL_OPTIONSTR_PRINTERALIASLIST  (45                  ) /* multiple "PrnOld=PrnNew1[;PrnNew2[;...]]", erase with NULL or "" */
#define LL_OPTIONSTR_PREVIEWFILENAME   (46                  ) /* path of preview file (directory will be overridden by LlPreviewSetTempPath(), if given) */
#define LL_OPTIONSTR_EXPORTS_ALLOWED_IN_PREVIEW (47                  ) /* set in preview file */
#define LL_OPTIONSTR_HELPFILENAME      (48                  )
#define LL_OPTIONSTR_NULLVALUE         (49                  ) /* string which represents the NULL value */
#define LL_OPTIONSTR_DEFAULT_EXPORT    (50                  ) /* default export medium for new projects */
#define LL_OPTIONSTR_ORIGINALPROJECTFILENAME (51                  ) /* fixup project path for relative paths in realdata preview/export in designer */
#define LL_OPTIONSTR_HIERARCHICALDATASOURCE_ROOT (52                  ) /* internal use only */
#define LL_OPTIONSTR_PRINTERDEFINITIONFILENAME (53                  ) /* override for P file name */
#define LL_OPTIONSTR_DOCINFO_DATATYPE  (54                  ) /* DOCINFO.lpszDatatype */
#define LL_OPTIONSTR_IDX_PRJEXT        (55                  )
#define LL_OPTIONSTR_IDX_PRVEXT        (56                  )
#define LL_OPTIONSTR_IDX_PRNEXT        (57                  )
#define LL_OPTIONSTR_TOC_PRJDESCR      (58                  )
#define LL_OPTIONSTR_IDX_PRJDESCR      (59                  )
#define LL_OPTIONSTR_TOC_PRJEXT        (60                  )
#define LL_OPTIONSTR_TOC_PRVEXT        (61                  )
#define LL_OPTIONSTR_TOC_PRNEXT        (62                  )
#define LL_OPTIONSTR_DEFAULTSCHEME     (63                  ) /* default: empty (COMBIT) */
#define LL_OPTIONSTR_DEFAULTPROJECTNAME (64                  ) /* DOCINFO.lpszDatatype */
#define LL_OPTIONSTR_GTC_PRJEXT        (65                  )
#define LL_OPTIONSTR_GTC_PRVEXT        (66                  )
#define LL_OPTIONSTR_GTC_PRNEXT        (67                  )
#define LL_OPTIONSTR_GTC_PRJDESCR      (68                  )
#define LL_OPTIONSTR_ERRORTEXT_FROM_EXPORT (69                  ) /* r/o */
#define LL_OPTIONSTR_DEFAULTPRJDESCR   (70                  ) /* default: empty (localized version of 'List & Label project file') */
#define LL_OPTIONSTR_DEFAULTPRINTER    (71                  ) /* if set, this printer is used instead of the system's default printer (applies to ALL JOBS, so job ID must be "-1"!) */
#define LL_OPTIONSTR_QUERY_LICENSINGINFO (72                  ) /* r/o, returns serial number in return value */
#define LL_OPTIONSTR_RESERVED73        (73                  )
#define LL_OPTIONSTR_REPRESENTATION_BOOL_TRUE (74                  )
#define LL_OPTIONSTR_REPRESENTATION_BOOL_FALSE (75                  )
#define LL_OPTIONSTR_DEFAULT_FILENAME_FOR_SAVEAS (76                  ) /* if set, this filename is used as a default name when "Save as" is chosen from the menu */
#define LL_OPTIONSTR_LABEL_PRJDESCR_SINGULAR (77                  )
#define LL_OPTIONSTR_LIST_PRJDESCR_SINGULAR (78                  )
#define LL_OPTIONSTR_CARD_PRJDESCR_SINGULAR (79                  )
#define LL_OPTIONSTR_TOC_PRJDESCR_SINGULAR (80                  )
#define LL_OPTIONSTR_IDX_PRJDESCR_SINGULAR (81                  )
#define LL_OPTIONSTR_GTC_PRJDESCR_SINGULAR (82                  )
#define LL_OPTIONSTR_DEFAULTIMAGEPATH  (83                  )
#define LL_OPTIONSTR_EMBEDDED_EXPORTS  (84                  ) /* ';' separated list of exports, for example "DOCX;XLSX;PDF". default: none. NOT COMPATIBLE WITH LL_QUERY_FILENAME_FOR_EXPORTJOB (!) */
#define LL_OPTIONSTR_DRILLDOWN_ROOT    (85                  ) /* internal */
#define LL_OPTIONSTR_LEGACY_EXPORTERS_ALLOWED (86                  ) /* ';' separated list of legacy exporters (JQM, HTML) to be allowed. Default is empty. */
#define LL_OPTIONSTR_CHART_AXISLABEL_SPACINGDELTA (87                  ) /* ';' separated list of spacing deltas (coord-x;coord-y;coord-z;label-x;label-y;label-z). Default is empty, hence all zero. */
#define LL_OPTIONSTR_INTELLISENSE_CONSTANTSFILTER (88                  ) /* ';' separated list e.g. "-LL.Color*;+*" (deny all entries beginning with LL.Color and allow the rest). Default is empty (hence no constants in Intellisense). */
#define LL_OPTIONSTR_WEBDESIGNER_TABLERENDERLAYER (89                  ) /* internal */
#define LL_OPTIONSTR_SYSINFO           (90                  ) /* '\n' read only separated list of sysinfo e.g containing loaded modules */
#define LL_OPTIONSTR_DEFAULTVARHINT    (91                  ) /* hint to be displayed in the function wizard if no variable or function is selected */
#define LL_OPTIONSTR_REPORTPARAMDLGTITLE (92                  ) /* title for the report parameter value dialog that is displayed on exporting */
#define LL_OPTIONSTR_DEFAULTIMAGEPATH_FOR_REPOSITORY (93                  )
#define LL_SYSCOMMAND_MINIMIZE         (-1                  )
#define LL_SYSCOMMAND_MAXIMIZE         (-2                  )
#define LL_PHFG_AGGREGATE              (0x01                )
#define LL_PHFG_PRINT                  (0x02                )
#define LL_PHFG_CROSSTAB               (0x04                )
#define LL_PHFG_OTHERS                 (0x08                )
#define LL_PHFG_ALL                    (0xFF                )
#define LL_DLGBOXMODE_3DBUTTONS        (0x8000              ) /* 'or'ed */
#define LL_DLGBOXMODE_3DFRAME2         (0x4000              ) /* 'OR'ed */
#define LL_DLGBOXMODE_3DFRAME          (0x1000              ) /* 'OR'ed */
#define LL_DLGBOXMODE_NOBITMAPS        (0x2000              ) /* 'or'ed */
#define LL_DLGBOXMODE_DONTCARE         (0x0000              ) /* load from INI */
#define LL_DLGBOXMODE_SAA              (0x0001              )
#define LL_DLGBOXMODE_ALT1             (0x0002              )
#define LL_DLGBOXMODE_ALT2             (0x0003              )
#define LL_DLGBOXMODE_ALT3             (0x0004              )
#define LL_DLGBOXMODE_ALT4             (0x0005              )
#define LL_DLGBOXMODE_ALT5             (0x0006              )
#define LL_DLGBOXMODE_ALT6             (0x0007              )
#define LL_DLGBOXMODE_ALT7             (0x0008              )
#define LL_DLGBOXMODE_ALT8             (0x0009              ) /* Win95 */
#define LL_DLGBOXMODE_ALT9             (0x000A              ) /* Win98 */
#define LL_DLGBOXMODE_ALT10            (0x000B              ) /* Win98 with gray/color button bitmaps like IE4 */
#define LL_DLGBOXMODE_TOOLTIPS98       (0x0800              ) /* DEPRECATED. Do not change.  */
#define LL_CTL_ADDTOSYSMENU            (0x00000004          ) /* from CTL */
#define LL_CTL_ALSOCHILDREN            (0x00000010          )
#define LL_CTL_CONVERTCONTROLS         (0x00010000          )
#define LL_GROUP_ALWAYSFOOTER          (0x40000000          )
#define LL_PRINTERCONFIG_SAVE          (1                   )
#define LL_PRINTERCONFIG_RESTORE       (2                   )
#define LL_PRJTYPE_OPTION_FORCEDEFAULTSETTINGS (0x8000              )
#define LL_PRJTYPE_OPTION_CREATEPARTSFROMPROJECT (0x4000              )
#define LL_PRJTYPE_OPTION_NOMERGEPRINTERSETTINGS (0x2000              )
#define LL_RTFTEXTMODE_RTF             (0x0000              )
#define LL_RTFTEXTMODE_PLAIN           (0x0001              )
#define LL_RTFTEXTMODE_EVALUATED       (0x0000              )
#define LL_RTFTEXTMODE_RAW             (0x0002              )
#define LL_RTFTEXTFLAG_ALL             (0x0000              )
#define LL_RTFTEXTFLAG_SELECTION       (0x0004              )
#define LL_ENUMFLAG_INCLUDE_INTERNAL   (1                   ) /* include internal variables/fields */
#define LL_ERR_BAD_JOBHANDLE           (-1                  ) /* bad jobhandle */
#define LL_ERR_TASK_ACTIVE             (-2                  ) /* LlDefineLayout() only once in a job */
#define LL_ERR_BAD_OBJECTTYPE          (-3                  ) /* nObjType must be one of the allowed values (obsolete constant) */
#define LL_ERR_BAD_PROJECTTYPE         (-3                  ) /* nObjType must be one of the allowed values */
#define LL_ERR_PRINTING_JOB            (-4                  ) /* print job not opened, no print object */
#define LL_ERR_NO_BOX                  (-5                  ) /* LlPrintSetBoxText(...) called when no abort box exists! */
#define LL_ERR_ALREADY_PRINTING        (-6                  ) /* the current operation cannot be performed while a print job is open */
#define LL_ERR_NOT_YET_PRINTING        (-7                  ) /* LlPrintGetOptionString... */
#define LL_ERR_NO_PROJECT              (-10                 ) /* object with requested name does not exist (former ERR_NO_OBJECT) */
#define LL_ERR_NO_PRINTER              (-11                 ) /* printer couldn't be opened */
#define LL_ERR_PRINTING                (-12                 ) /* error while printing */
#define LL_ERR_EXPORTING               (-13                 ) /* error while exporting */
#define LL_ERR_NEEDS_VB                (-14                 ) /* '11...' needs VB.EXE */
#define LL_ERR_BAD_PRINTER             (-15                 ) /* PrintOptionsDialog(): no printer available */
#define LL_ERR_NO_PREVIEWMODE          (-16                 ) /* Preview functions: not in preview mode */
#define LL_ERR_NO_PREVIEWFILES         (-17                 ) /* PreviewDisplay(): no file found */
#define LL_ERR_PARAMETER               (-18                 ) /* bad parameter (usually NULL pointer) */
#define LL_ERR_BAD_EXPRESSION          (-19                 ) /* bad expression in LlExprEvaluate() and LlExprType() */
#define LL_ERR_BAD_EXPRMODE            (-20                 ) /* bad expression mode (LlSetExpressionMode()) */
#define LL_ERR_NO_TABLE                (-21                 ) /* not used */
#define LL_ERR_CFGNOTFOUND             (-22                 ) /* on LlPrintStart(), LlPrintWithBoxStart() [not found] */
#define LL_ERR_EXPRESSION              (-23                 ) /* on LlPrintStart(), LlPrintWithBoxStart() */
#define LL_ERR_CFGBADFILE              (-24                 ) /* on LlPrintStart(), LlPrintWithBoxStart() [read error, bad format] */
#define LL_ERR_BADOBJNAME              (-25                 ) /* on LlPrintEnableObject() - not a ':' at the beginning */
#define LL_ERR_NOOBJECT                (-26                 ) /* on LlPrintEnableObject() - "*" and no object in project */
#define LL_ERR_UNKNOWNOBJECT           (-27                 ) /* on LlPrintEnableObject() - object with that name not existing */
#define LL_ERR_NO_TABLEOBJECT          (-28                 ) /* LlPrint...Start() and no list in Project, or: */
#define LL_ERR_NO_OBJECT               (-29                 ) /* LlPrint...Start() and no object in project */
#define LL_ERR_NO_TEXTOBJECT           (-30                 ) /* LlPrintGetTextCharsPrinted() and no printable text in Project! */
#define LL_ERR_UNKNOWN                 (-31                 ) /* LlPrintIsVariableUsed(), LlPrintIsFieldUsed() */
#define LL_ERR_BAD_MODE                (-32                 ) /* LlPrintFields(), LlPrintIsFieldUsed() called on non-OBJECT_LIST */
#define LL_ERR_CFGBADMODE              (-33                 ) /* on LlDefineLayout(), LlPrint...Start(): file is in wrong expression mode */
#define LL_ERR_ONLYWITHONETABLE        (-34                 ) /* on LlDefinePageSeparation(), LlDefineGrouping() */
#define LL_ERR_UNKNOWNVARIABLE         (-35                 ) /* on LlGetVariableContents() */
#define LL_ERR_UNKNOWNFIELD            (-36                 ) /* on LlGetFieldContents() */
#define LL_ERR_UNKNOWNSORTORDER        (-37                 ) /* on LlGetFieldContents() */
#define LL_ERR_NOPRINTERCFG            (-38                 ) /* on LlPrintCopyPrinterConfiguration() - no or bad file */
#define LL_ERR_SAVEPRINTERCFG          (-39                 ) /* on LlPrintCopyPrinterConfiguration() - file could not be saved */
#define LL_ERR_NOVALIDPAGES            (-41                 ) /* could also be that 16 bit Viewer tries to open 32bit-only storage */
#define LL_ERR_NOTINHOSTPRINTERMODE    (-42                 ) /* cannot be done in Host Printer Mode (LlSetPrinterInPrinterFile()) */
#define LL_ERR_NOTFINISHED             (-43                 ) /* appears when a project reset() is done, but the table not finished */
#define LL_ERR_BUFFERTOOSMALL          (-44                 ) /* LlXXGetOptionStr() */
#define LL_ERR_BADCODEPAGE             (-45                 ) /* LL_OPTION_CODEPAGE */
#define LL_ERR_CANNOTCREATETEMPFILE    (-46                 ) /* cannot create temporary file */
#define LL_ERR_NODESTINATION           (-47                 ) /* no valid export destination */
#define LL_ERR_NOCHART                 (-48                 ) /* no chart control present */
#define LL_ERR_TOO_MANY_CONCURRENT_PRINTJOBS (-49                 ) /* WebServer: not enough print process licenses */
#define LL_ERR_BAD_WEBSERVER_LICENSE   (-50                 ) /* WebServer: bad license file */
#define LL_ERR_NO_WEBSERVER_LICENSE    (-51                 ) /* WebServer: no license file */
#define LL_ERR_INVALIDDATE             (-52                 ) /* LlSystemTimeFromLocaleString(): date not valid! */
#define LL_ERR_DRAWINGNOTFOUND         (-53                 ) /* only if LL_OPTION_ERR_ON_FILENOTFOUND set */
#define LL_ERR_NOUSERINTERACTION       (-54                 ) /* a call is used which would show a dialog, but LL is in Webserver mode */
#define LL_ERR_BADDATABASESTRUCTURE    (-55                 ) /* the project that is loading has a table that is not supported by the database */
#define LL_ERR_UNKNOWNPROPERTY         (-56                 )
#define LL_ERR_INVALIDOPERATION        (-57                 )
#define LL_ERR_PROPERTY_ALREADY_DEFINED (-58                 )
#define LL_ERR_CFGFOUND                (-59                 ) /* on LlPrjOpen() with CREATE_NEW disposition, or of project file is r/o and access flag is r/w */
#define LL_ERR_SAVECFG                 (-60                 ) /* error while saving (LlProjectSave()) */
#define LL_ERR_WRONGTHREAD             (-61                 ) /* internal (.NET) */
#define LL_ERR_NO_SUCH_INFORMATION     (-62                 )
#define LL_ERR_SINK_ALREADY_PRESENT    (-63                 )
#define LL_ERR_SINK_NOT_PRESENT        (-64                 )
#define LL_ERR_ACCESS_DENIED           (-65                 )
#define LL_ERR_IDLEITERATION_DETECTED  (-66                 )
#define LL_ERR_USER_ABORTED            (-99                 ) /* user aborted printing */
#define LL_ERR_BAD_DLLS                (-100                ) /* DLLs not up to date (CTL, DWG, UTIL) */
#define LL_ERR_NO_LANG_DLL             (-101                ) /* no or out-of-date language resource DLL */
#define LL_ERR_NO_MEMORY               (-102                ) /* out of memory */
#define LL_ERR_EXCEPTION               (-104                ) /* there was a GPF during the API execution. Any action that follows might cause problems! */
#define LL_ERR_LICENSEVIOLATION        (-105                ) /* your license does not allow this call (see LL_OPTIONSTR_LICENSINGINFO) */
#define LL_ERR_NOT_SUPPORTED_IN_THIS_OS (-106                ) /* the OS does not support this function */
#define LL_ERR_NO_MORE_DATA            (-107                )
#define LL_HINT_ABORT                  (-200                ) /* LL aborted printing - data collection complete */
#define LL_WRN_FIRSTWARNING            (-900                )
#define LL_WRN_REPORTPARAMETERS_COLLECTION_FINISHED (-994                ) /* internal use */
#define LL_WRN_ISNULL                  (-995                ) /* LlExprEvaluate[Var]() */
#define LL_WRN_TABLECHANGE             (-996                )
#define LL_WRN_PRINTFINISHED           (-997                ) /* LlRTFDisplay() */
#define LL_WRN_REPEAT_DATA             (-998                ) /* notification: page is full, prepare for next page */
#define LL_CHAR_TEXTQUOTE              (1                   )
#define LL_CHAR_PHANTOMSPACE           (0x200b              )
#define LL_CHAR_LOCK                   (0x2060              )
#define LL_CHAR_NEWLINE                (182                 ) /* "¶" */
#define LL_CHAR_EXPRSEP                (164                 ) /* "¤" */
#define LL_CHAR_TAB                    (247                 ) /* "÷" */
#define LL_CHAR_EAN128NUL              (255                 )
#define LL_CHAR_EAN128FNC1             (254                 )
#define LL_CHAR_EAN128FNC2             (253                 )
#define LL_CHAR_EAN128FNC3             (252                 )
#define LL_CHAR_EAN128FNC4             (251                 )
#define LL_CHAR_CODE93NUL              (255                 )
#define LL_CHAR_CODE93EXDOLLAR         (254                 )
#define LL_CHAR_CODE93EXPERC           (253                 )
#define LL_CHAR_CODE93EXSLASH          (252                 )
#define LL_CHAR_CODE93EXPLUS           (251                 )
#define LL_CHAR_CODE39NUL              (255                 )
#define LL_DLGEXPR_VAREXTBTN_ENABLE    (0x00000001          ) /* callback for simple Wizard extension */
#define LL_DLGEXPR_VAREXTBTN_DOMODAL   (0x00000002          )
#define LL_LLX_EXTENSIONTYPE_EXPORT    (1                   )
#define LL_LLX_EXTENSIONTYPE_BARCODE   (2                   )
#define LL_LLX_EXTENSIONTYPE_OBJECT    (3                   ) /* nyi */
#define LL_LLX_EXTENSIONTYPE_WIZARD    (4                   ) /* nyi */
#define LL_LLX_EXTENSIONTYPEFLAG_FORCE_PUBLIC (0x00010000          )
#define LL_LLX_EXTENSIONTYPEFLAG_FORCE_PRIVATE (0x00020000          )
#define LL_LLX_EXTENSIONTYPE_TYPEMASK  (0x0000000f          )
#define LL_DECLARECHARTROW_FOR_OBJECTS (0x00000001          )
#define LL_DECLARECHARTROW_FOR_TABLECOLUMNS (0x00000002          ) /* body only */
#define LL_DECLARECHARTROW_FOR_TABLECOLUMNS_FOOTERS (0x00000004          )
#define LL_GETCHARTOBJECTCOUNT_CHARTOBJECTS (1                   )
#define LL_GETCHARTOBJECTCOUNT_CHARTOBJECTS_BEFORE_TABLE (2                   )
#define LL_GETCHARTOBJECTCOUNT_CHARTCOLUMNS (3                   ) /* body only */
#define LL_GETCHARTOBJECTCOUNT_CHARTCOLUMNS_FOOTERS (4                   )
#define LL_VARIANTFLAG_NEUTRAL         (0x00000000          )
#define LL_VARIANTFLAG_USE_JULIAN_DATE (0x00000001          )
#define LL_GRIPT_DIM_SCM               (1                   )
#define LL_GRIPT_DIM_PERC              (2                   )
#define LL_PARAMETERFLAG_PUBLIC        (0x00000000          )
#define LL_PARAMETERFLAG_SAVEDEFAULT   (0x00010000          )
#define LL_PARAMETERFLAG_PRIVATE       (0x40000000          )
#define LL_PARAMETERFLAG_FORMULA       (0x00000000          )
#define LL_PARAMETERFLAG_VALUE         (0x20000000          )
#define LL_PARAMETERFLAG_GLOBAL        (0x00000000          )
#define LL_PARAMETERFLAG_LOCAL         (0x10000000          )
#define LL_PARAMETERFLAG_MASK          (0xffff0000          )
#define LL_PARAMETERTYPE_USER          (0                   )
#define LL_PARAMETERTYPE_FAX           (1                   )
#define LL_PARAMETERTYPE_MAIL          (2                   )
#define LL_PARAMETERTYPE_LLINTERNAL    (4                   )
#define LL_PARAMETERTYPE_MASK          (0x0000000f          )
#define LL_LOCCONVERSION_LCID          (0                   )
#define LL_LOCCONVERSION_COUNTRYPREFIX (1                   )
#define LL_LOCCONVERSION_COUNTRYISONAME (2                   )
#define LL_LOCCONVERSION_DIALPREFIX    (3                   ) /* Not yet implemented */
#define LL_PRJOPEN_AM_READWRITE        (0x40000000          )
#define LL_PRJOPEN_AM_READONLY         (0x00000000          ) /* default */
#define LL_PRJOPEN_AM_MASK             (0x40000000          )
#define LL_PRJOPEN_CD_OPEN_EXISTING    (0x00000000          ) /* fails if it does not exist - default */
#define LL_PRJOPEN_CD_CREATE_ALWAYS    (0x10000000          ) /* open (but do not read contents) if exists, create if not */
#define LL_PRJOPEN_CD_CREATE_NEW       (0x20000000          ) /* fails if already exists */
#define LL_PRJOPEN_CD_OPEN_ALWAYS      (0x30000000          ) /* open (and load) if exists, create if not */
#define LL_PRJOPEN_CD_MASK             (0x30000000          ) /* fails if it does not exist */
#define LL_PRJOPEN_EM_IGNORE_FORMULAERRORS (0x08000000          )
#define LL_PRJOPEN_EM_MASK             (0x08000000          )
#define LL_PRJOPEN_FLG_NOINITPRINTER   (0x04000000          )
#define LL_PRJOPEN_FLG_NOOBJECTLOAD    (0x02000000          )
#define LL_PRJOPEN_FLG_RESERVED        (0x01000000          ) /* internal use */
#define LL_ASSOCIATEPREVIEWCONTROLFLAG_DELETE_ON_CLOSE (0x0001              )
#define LL_ASSOCIATEPREVIEWCONTROLFLAG_HANDLE_IS_ATTACHINFO (0x0002              )
#define LL_ASSOCIATEPREVIEWCONTROLFLAG_PRV_REPLACE (0x0000              )
#define LL_ASSOCIATEPREVIEWCONTROLFLAG_PRV_ADD_TO_CONTROL_STACK (0x0004              )
#define LL_ASSOCIATEPREVIEWCONTROLFLAG_PRV_ADD_TO_CONTROL_IN_TAB (0x0008              )
#define LL_ASSOCIATEPREVIEWCONTROLMASK_ATTACHLOCATION (0x003c              )
#define LL_DESFILEOPEN_OPEN_EXISTING   (0x00000000          ) /* fails if it does not exist - default */
#define LL_DESFILEOPEN_CREATE_ALWAYS   (0x10000000          ) /* open (but do not read contents) if exists, create if not */
#define LL_DESFILEOPEN_CREATE_NEW      (0x20000000          ) /* fails if already exists */
#define LL_DESFILEOPEN_OPEN_ALWAYS     (0x30000000          ) /* open (and load) if exists, create if not */
#define LL_DESFILEOPEN_OPEN_IMPORT     (0x40000000          ) /* fails if it does not exist - only imports data */
#define LL_DESFILEOPEN_OPENMASK        (0x70000000          )
#define LL_DESFILEOPENFLAG_SUPPRESS_SAVEDIALOG (0x00000001          )
#define LL_DESFILEOPENFLAG_SUPPRESS_SAVE (0x00000002          )
#define LL_DESFILESAVE_DEFAULT         (0x00000000          ) /* default */
#define LLDESADDACTIONFLAG_ADD_TO_TOOLBAR (0x20000000          )
#define LLDESADDACTION_MENUITEM_APPEND (0x00000000          )
#define LLDESADDACTION_MENUITEM_INSERT (0x10000000          )
#define LLDESADDACTION_MENUITEM_POSITIONMASK (0x10000000          )
#define LLDESADDACTION_ACCEL_CONTROL   (0x00010000          )
#define LLDESADDACTION_ACCEL_SHIFT     (0x00020000          )
#define LLDESADDACTION_ACCEL_ALT       (0x00040000          )
#define LLDESADDACTION_ACCEL_VIRTKEY   (0x00080000          )
#define LLDESADDACTION_ACCEL_KEYMODIFIERMASK (0x000f0000          )
#define LLDESADDACTION_ACCEL_KEYCODEMASK (0x0000ffff          )
#define LL_DESIGNEROPTSTR_PROJECTFILENAME (1                   )
#define LL_DESIGNEROPTSTR_WORKSPACETITLE (2                   )
#define LL_DESIGNEROPTSTR_PROJECTDESCRIPTION (3                   )
#define LL_USEDIDENTIFIERSFLAG_VARIABLES (0x0001              )
#define LL_USEDIDENTIFIERSFLAG_FIELDS  (0x0002              )
#define LL_USEDIDENTIFIERSFLAG_CHARTFIELDS (0x0004              )
#define LL_USEDIDENTIFIERSFLAG_TABLES  (0x0008              )
#define LL_USEDIDENTIFIERSFLAG_RELATIONS (0x0010              )
#define LL_USEDIDENTIFIERSFLAG_FILES   (0x0020              )
#define LL_TEMPFILENAME_DEFAULT        (0x0000              ) /* see UT */
#define LL_TEMPFILENAME_ENSURELONGPATH (0x0001              ) /* see UT */
#define LL_DICTIONARY_TYPE_STATIC      (1                   )
#define LL_DICTIONARY_TYPE_IDENTIFIER  (2                   )
#define LL_DICTIONARY_TYPE_TABLE       (3                   )
#define LL_DICTIONARY_TYPE_RELATION    (4                   )
#define LL_DICTIONARY_TYPE_SORTORDER   (5                   )
#define LL_DICTIONARY_TYPE_ALL         (0                   ) /* only valid for NULL, NULL to clear all dictionaries in one run */
#define LL_UILANGUAGETYPE_NORMAL       (0x00000001          )
#define LL_UILANGUAGETYPE_TRIAL        (0x00000002          )
#define LL_ADDTABLEOPT_SUPPORTSSTACKEDSORTORDERS (0x00000001          )
#define LL_ADDTABLEOPT_SUPPORTSADVANCEDFILTERING (0x00000002          )
#define LL_ADDTABLEOPT_1TO1_RELATION_ONLY (0x00000004          )
#define LL_INPLACEDESIGNERINTERACTION_QUERY_CANCLOSE (1                   ) /* wParam = 0, lParam = &BOOL */
#define LL_JOBSTATEFLAG_VARLIST        (0x00000001          )
#define LL_JOBSTATEFLAG_FIELDLIST      (0x00000002          )
#define LL_JOBSTATEFLAG_CHARTFIELDLIST (0x00000004          )
#define LL_JOBSTATEFLAG_DATABASESTRUCT (0x00000008          )
#define LL_JOBSTATEFLAG_DICTIONARIES   (0x00000010          )
#define LL_JOBSTATEFLAG_JOBSETTINGS    (0x00000020          )
#define LL_JOBSTATEFLAG_ALL            (0x0000003F          )
#define LL_EXPRXLATRESULT_OPTIMAL      (0x00000000          )
#define LL_EXPRXLATRESULT_PARTIAL      (0x00000001          )
#define LL_EXPRXLATRESULT_FAIL         (0x00000002          )
#define LL_EXPRXLATRESULT_MASK         (0x00000007          ) /* some reserve */
#define LLSTGTESTSTGCMP_MASK_PAGECOUNT (0x000000ff          )
#define LLSTGTESTSTGCMP_FLAG_PRVSINGLEPAGE (0x00000100          )
#define LLSTGTESTSTGCMP_FLAG_EXCLUDE_EMBEDDEDSTORAGES (0x00000200          )
#define LLSRTRIGGEREXPORT_DISCARD_EXPANDABLE_REGIONS (1                   )
#define LLJOBOPENCOPYEXFLAG_NO_COPY_FIELDLIST (0x0001              )
#define LLJOBOPENCOPYEXFLAG_NO_COPY_DBSTRUCTS (0x0002              )
#define LLJOBOPENCOPYEXFLAG_NO_COPY_XLATTABLES (0x0004              )
#define LLJOBOPENCOPYEXFLAG_NO_COPY_LLXPARAMETERS (0x0008              )
#define LL_DOM_CURRENT_OBJECT_LEVEL_OBJECT (0                   )
#define LL_DOM_CURRENT_OBJECT_LEVEL_CONTAINERITEM (1                   )
#define LL_DOM_CURRENT_OBJECT_LEVEL_FIELD (2                   )
#define LL_FIND_AND_REPLACE_FLAG_CASEINSENSITIVE (0                   )
#define LL_FIND_AND_REPLACE_FLAG_CASESENSITIVE (1                   )

/*--- function declaration ---*/

#if !defined(_RC_INVOKED_) && !defined(RC_INVOKED)

#if defined(_WIN64)
#  pragma pack(push,8)
# else // _WIN64
#  if __WATCOMC__ > 1000 || _MSC_VER >= 1400 /* Watcom C++ >= 10.x or MSC >= 2005 */
#    pragma pack(push,4)
#   elif __BORLANDC__ /* Borland C++ */
#    pragma option -a4
#   else
#    pragma pack(4) /* MS, Watcom <= 10.0, ... */
#  endif
#endif

 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 #define LL_ENUM_DEF enum
 #ifdef _MSC_VER
 #if _MSC_VER >= 1800 // VS 2013
 #undef LL_ENUM_DEF
 #define LL_ENUM_DEF enum class
 #endif
 #endif
 #endif
 #endif
 #ifndef IMPLEMENTATION
 typedef struct
  {
  UINT      _nSize;     // size of the structure
  LPARAM     _lParam;    // parameter (most likely address of structure)
  LPARAM     _lReply;    // reply (defaults to 0)
   UINT_PTR    _lUserParameter;        // user parameter
  } scLlCallback, *PSCLLCALLBACK;
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  HWND _hWnd;     // L&L mainframe wnd
  UINT _nTotal;    // total count of objects
  UINT _nCurrent;    // current object number (0=start,...,total=end)
  UINT _nJob;     // LL_METERINFO_... constants
  } scLlMeterInfo, *PSCLLMETERINFO;
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  LPCSTR _pszContents;   // contents of the parameter string (do not overwrite!!!)
  BOOL _bEvaluate;    // TRUE on evaluation, FALSE on syntax check (fill _bError, _szError)!
   CHAR _szNewValue[0x4000+1]; // new value
   UINT _bError;    // FALSE
  CHAR _szError[128];   // error text
  } scLlExtFctA;
 
 typedef struct
   {
   UINT    _nSize;
   LPCWSTR _pszContents;
   BOOL   _bEvaluate;
   WCHAR   _szNewValue[0x4000+1];
   UINT   _bError;
   WCHAR   _szError[128];
   } scLlExtFctW;
 #if defined(UNICODE)
   typedef scLlExtFctW scLlExtFct, *PSCLLEXTFCT;
 #else
   typedef scLlExtFctA scLlExtFct, *PSCLLEXTFCT;
 #endif
 
 typedef struct     // internal use (same struct as BASIC struct)
  {
  UINT  _nSize;     // size of the structure
  LPVOID _pszContents;   // contents of the parameter string (do not overwrite!!!)
  BOOL _bEvaluate;    // TRUE on evaluation, FALSE on syntax check (fill _bError, _szError)!
   LPVOID _szNewValue;   // new value
   UINT _bError;    // FALSE
  LPVOID _szError;    // error text
  } scLlExtFctXXX, *PSCLLEXTFCTXXX;
 
 #if defined(USE_OCX)
  typedef struct     // internal use (same struct as BASIC struct)
  {
  UINT  _nSize;     // size of the structure
  LPVOID _pszContents;   // contents of the parameter string (do not overwrite!!!)
  BOOL _bEvaluate;    // TRUE on evaluation, FALSE on syntax check (fill _bError, _szError)!
  BSTR _szNewValue;   // new value
  UINT _bError;    // FALSE
  BSTR _szError;    // error text
  } scLlExtFctXXX_B, *PSCLLEXTFCTXXX_B;
 #endif
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  LPCSTR _pszName;    // name of the object
  INT  _nType;     // see LL_OBJ_... values
  BOOL _bPreDraw;    // TRUE on call before draw, FALSE on call afterwards
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // RECT in paint units (mm/10 or inch/100)
  } scLlObjectA;
 typedef struct
   {
   UINT  _nSize;
   LPCWSTR _pszName;
   INT _nType;
   BOOL _bPreDraw;
   HDC _hRefDC;
   HDC _hPaintDC;
   RECT _rcPaint;
   } scLlObjectW;
 #if defined(UNICODE)
   typedef scLlObjectW scLlObject, *PSCLLOBJECT;
 #else
   typedef scLlObjectA scLlObject, *PSCLLOBJECT;
 #endif
 
 #if defined(USE_OCX)
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  BSTR _pszName;    // name of the object
  INT  _nType;     // see LL_OBJ_... values
  BOOL _bPreDraw;    // TRUE on call before draw, FALSE on call afterwards
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // RECT in paint units (mm/10 or inch/100)
  } scLlObject_B, *PSCLLOBJECT_B;
 #endif
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  BOOL _bDesignerPreview;  // flag if in Preview Mode or not
  BOOL _bPreDraw;    // TRUE on call before draw, FALSE on call afterwards
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
   } scLlPage, *PSCLLPAGE;
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  BOOL _bDesignerPreview;  // flag if in Preview Mode or not
  BOOL _bPreDraw;    // TRUE on call before draw, FALSE on call afterwards
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // RECT in paint units (mm/10 or inch/100)
   } scLlProject, *PSCLLPROJECT;
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  LPCSTR _pszName;    // name of the variable
  LPCSTR _pszContents;   // contents of the variable (valid if def´d by VariableExt())
  INT  _lPara;     // lPara of the variable
  LPVOID _lpPtr;     // lpPtr of the variable
  HANDLE _hPara;     // hContents of the variable (valid if def´d by VariableExtHandle())
  BOOL _bIsotropic;   // "Isotropic" flag
  LPCSTR _pszParameters;   // for editable USERDWG: parameters
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // RECT in paint units (mm/10 or inch/100)
   INT  _nPaintMode;   // 0: Preview, 1: FastPreview, 2: Workspace (NYI)
  } scLlDrawUserObjA;
 typedef struct
   {
   UINT  _nSize;
   LPCWSTR _pszName;
   LPCWSTR _pszContents;
   INT  _lPara;
   LPVOID _lpPtr;
   HANDLE _hPara;
   BOOL _bIsotropic;
   LPCWSTR _pszParameters;
   HDC  _hRefDC;
   HDC  _hPaintDC;
   RECT _rcPaint;
   INT  _nPaintMode;
   } scLlDrawUserObjW;
 #if defined(UNICODE)
   typedef scLlDrawUserObjW scLlDrawUserObj, *PSCLLDRAWUSEROBJECT;
 #else
   typedef scLlDrawUserObjA scLlDrawUserObj, *PSCLLDRAWUSEROBJECT;
 #endif
 
 #if defined(USE_OCX)
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  BSTR _pszName;    // name of the variable
  BSTR _pszContents;   // contents of the variable (valid if def´d by VariableExt())
  INT _lPara;     // lPara of the variable
  LPVOID _lpPtr;     // lpPtr of the variable
  HANDLE _hPara;     // hContents of the variable (valid if def´d by VariableExtHandle())
  BOOL _bIsotropic;   // "Isotropic" flag
  BSTR _pszParameters;  // for editable USERDWG: parameters
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // RECT in paint units (mm/10 or inch/100)
   INT  _nPaintMode;   // 0: Preview, 1: FastPreview, 2: Workspace (NYI)
  } scLlDrawUserObj_B, *PSCLLDRAWUSEROBJ_B;
 #endif
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  LPCSTR _pszName;    // name of the variable
  INT_PTR _lPara;     // lPara of the variable
  LPVOID _lpPtr;     // lpPtr of the variable
  HANDLE _hPara;     // hContents of the variable (valid if def´d by VariableExtHandle())
  BOOL _bIsotropic;   // "Isotropic" flag
  HWND _hWnd;     // parent window for dialog
  LPSTR _pszParameters;   // parameter buffer
  UINT _nParaBufSize;   // max size of buffer (1024+1)
  } scLlEditUserObjA;
 typedef struct
   {
   UINT     _nSize;
   LPCWSTR _pszName;
   INT_PTR _lPara;
   LPVOID _lpPtr;
   HANDLE _hPara;
   BOOL  _bIsotropic;
   HWND  _hWnd;
   LPWSTR _pszParameters;
   UINT  _nParaBufSize;
   } scLlEditUserObjW;
 #if defined(UNICODE)
   typedef scLlEditUserObjW scLlEditUserObj, *PSCLLEDITUSEROBJECT;
 #else
   typedef scLlEditUserObjA scLlEditUserObj, *PSCLLEDITUSEROBJECT;
 #endif
 
 #if defined(USE_OCX)
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  BSTR _pszName;    // name of the variable
  INT_PTR _lPara;     // lPara of the variable
  LPVOID _lpPtr;     // lpPtr of the variable
  HANDLE _hPara;     // hContents of the variable (valid if def´d by VariableExtHandle())
  BOOL _bIsotropic;   // "Isotropic" flag
  HWND _hWnd;     // parent window for dialog
  BSTR _pszParameters;   // parameter buffer
  INT  _nParaBufSize;   // max size of buffer (1024+1)
  } scLlEditUserObj_B, *PSCLLEDITUSEROBJ_B;
 #endif
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  INT  _nType;     // LL_TABLE_LINE_xxx constant
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // RECT in paint units (mm/10 or inch/100)
  INT  _nPageLine;       // number of line on page
  INT  _nLine;     // absolute number of line in table
  INT  _nLineDef;    // table line definition
  BOOL _bZebra;    // zebra mode selected by user (only body line!)
  RECT _rcSpacing;    // spaces around the frame
  } scLlTableLine, *PSCLLTABLELINE;
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  INT  _nType;     // LL_TABLE_FIELD_xxx constant
  HDC  _hRefDC;      // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // RECT in paint units (mm/10 or inch/100)
  INT  _nLineDef;    // table line definition
  INT  _nIndex;       // column index (0..)
  RECT _rcSpacing;    // spaces around the frame
  LPCTSTR _pszContents;   // if text contents
  } scLlTableField, *PSCLLTABLEFIELD;
 
 typedef struct
   {
  UINT  _nSize;     // size of the structure
  INT  _xPos;     // column position (paint units)
  INT  _nWidth;    // width (paint units)
  HFONT _fntColumnX;   // column font (NULL)
   } scLlColumn;
 
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  HDC  _hRefDC;    // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // suggested RECT in paint units (mm/10 or inch/100), change .bottom value
   HFONT _fntHeaderX;   // header default font
   HFONT _fntBodyX;    // body   default font
   HFONT _fntFooterX;   // footer default font
  INT  _nHeight;    // height of one body line (incl. spacing)
  BOOL _bPaint;    // do paint, or do just calculate?
  INT  _lParam;    // function argument: user parameter 1
  LPVOID _lpParam;    // function argument: user parameter 2
  INT  _nColumns;    // number of columns in this table
  PSCLLCOLUMN _lpColumns;      // pointer to an array of column info
  } scLlGroup, *PSCLLGROUP;
 
 #if defined(USE_OCX)
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  HDC  _hRefDC;    // HDC to get information from
  HDC  _hPaintDC;     // HDC to paint on
  RECT _rcPaint;    // suggested RECT in paint units (mm/10 or inch/100), change .bottom value
   HFONT _fntHeader;    // header default font
   HFONT _fntBody;    // body   default font
   HFONT _fntFooter;    // footer default font
  INT  _nHeight;    // height of one body line (incl. spacing)
  BOOL _bPaint;    // do paint, or do just calculate?
  BOOL _bFrameLeft;   // frame on left side selected?
  BOOL _bFrameRight;   // frame on right side selected?
  INT _lParam;    // function argument: user parameter 1
  BSTR _lpParam;    // function argument: user parameter 2
  INT  _nColumns;    // number of columns in this table
  PSCLLCOLUMN _lpColumns;      // pointer to an array of column info
  } scLlGroup_B, *PSCLLGROUP_B;
 #endif
 
 typedef struct
  {
  UINT _nSize;     // size of the structure
  BOOL _bFirst;    // first or second printer?
   INT  _nCmd;     // i command
   HWND    _hWnd;     // i
   HDC  _hDC;     // i/o
   INT16 _nOrientation;   // i/o
  BOOL _bPhysPage;    // i/o, new L5
   UINT    _nBufSize;    // i
   LPSTR   _pszBuffer;    // i, fill
   INT     _nUniqueNumber;   // i
   INT  _nUniqueNumberCompare;  // i
   INT  _nPaperFormat;   // i/o (JobID for LL_CMND_CHANGE_DCPROPERTIES_DOC)
   INT    _xPaperSize;   // i/o, mm/10
   INT    _yPaperSize;   // i/o, mm/10
  } scLlPrinterA;
 typedef struct
   {
   UINT  _nSize;
   BOOL  _bFirst;
   INT  _nCmd;
   HWND     _hWnd;
   HDC  _hDC;
   INT16  _nOrientation;
   BOOL  _bPhysPage;
   UINT     _nBufSize;
   LPWSTR    _pszBuffer;
   INT      _nUniqueNumber;
   INT  _nUniqueNumberCompare;
   INT  _nPaperFormat;   // i/o (JobID for LL_CMND_CHANGE_DCPROPERTIES_DOC)
   INT    _xPaperSize;   // i/o, mm/10
   INT    _yPaperSize;   // i/o, mm/10
   } scLlPrinterW;
 #if defined(UNICODE)
   typedef scLlPrinterW scLlPrinter, *PSCLLPRINTER;
 #else
   typedef scLlPrinterA scLlPrinter, *PSCLLPRINTER;
 #endif
 
 typedef LRESULT (WINAPI *LLNOTIFICATION)(UINT nMessage, LPARAM lParam, UINT_PTR lUserParam);
 
 typedef struct                    // for VC++
   {
   UINT   FAR *ppStruct;
  LPVOID nIndex;
   } PTRPARAM;
 typedef struct                    // for VC++
   {
  INT  FAR *ppnID;
  INT  FAR *ppnType;
  LPVOID nIndex;
   } HELPPARAM;
 typedef struct                    // for VC++
   {
   INT     FAR *ppnFunction;
  LPVOID nIndex;
   } NTFYBTNPARAM;
 typedef struct
  {
  UINT  _nSize;     // size of the structure
  UINT _nFunction;    // function code (LL_DLGEXPR_VAREXTBTN_xxx)
   HWND _hWndDialog;   // dialog handle
  LPCSTR _pszPage;    // "CondDlgVar"
   CHAR _szValue[0x4000+1];  // new value
   UINT _bFields;    // FALSE
  UINT _nMask;     // LL_TEXT, ... OR LL_FOOTERFIELD...
  } scLlDlgExprVarExtA;
 typedef struct
   {
   UINT     _nSize;
   UINT  _nFunction;
   HWND  _hWndDialog;
   LPCWSTR _pszPage;
   WCHAR  _szValue[0x4000+1];
   UINT  _bFields;
   UINT _nMask;
   } scLlDlgExprVarExtW;
 #if defined(UNICODE)
   typedef scLlDlgExprVarExtW scLlDlgExprVarExt, *PSCLLDLGEXPRVAREXT;
 #else
   typedef scLlDlgExprVarExtA scLlDlgExprVarExt, *PSCLLDLGEXPRVAREXT;
 #endif
 
 typedef struct
  {
  UINT _nSize;
  HWND _hWnd;
  UINT _nType;
  HMENU _hMenu;
  UINT _nParam;
  } scLlToolbar, *PSCLLTOOLBAR;
 
 typedef struct
   {
   INT   _nSize;
   BOOL  _bEnableAskString;
  } scLlDlgEditLineExParams;
 typedef struct
   {
   INT   _nSize;
   BOOL  _bEnableAskString;
   UINT  _bIncludeChartFields;
  } scLlDlgEditLineExParams8;
 typedef struct
   {
   INT   _nSize;
   BOOL  _bEnableAskString;
   UINT  _bIncludeChartFields;
   LPCWSTR  _pszAllowedSourceTables;
  } scLlDlgEditLineExParams12;
 typedef struct
   {
   INT   _nSize;
   BOOL  _bEnableAskString;
   UINT  _bIncludeChartFields;
   LPCWSTR  _pszAllowedSourceTables;
  UINT  _nFlags;
  } scLlDlgEditLineExParams12a;
 #define LL_SCDLGEDITLINEPARAMS_FLAG_NO_ALIASTRANSLATION 0x00000001
 #define LL_SCDLGEDITLINEPARAMS_FLAG_RESERVED    0x80000000
 typedef struct
  {
  INT   _nSize;
  HLLJOB  _hLlJob; // the LL job that issued the job
  CHAR  _szDevice[80]; // printer device name
  DWORD  _dwJobID; // an internal ID, NOT THE QUEUE ID (as different queues could have different IDs)
  DWORD  _dwState; // state (JOB_STATUS_xxx, see Windows API)
  } scLlPrintJobInfoA;
 typedef struct
  {
  INT   _nSize;
  HLLJOB  _hLlJob; // the LL job that issued the job
  WCHAR  _szDevice[80]; // printer device name
  DWORD  _dwJobID; // an internal ID, NOT THE QUEUE ID (as different queues could have different IDs)
  DWORD  _dwState; // state (JOB_STATUS_xxx, see Windows API)
  } scLlPrintJobInfoW;
 #if defined(UNICODE)
   typedef scLlPrintJobInfoW scLlPrintJobInfo, *PSCLLPRINTJOBINFO;
 #else
   typedef scLlPrintJobInfoA scLlPrintJobInfo, *PSCLLPRINTJOBINFO;
 #endif
 
 typedef struct
  {
  INT   _nSize;
  BOOL  _bAlsoField;
  LPCSTR  _pszVarName;
  } scLlDelayDefineFieldOrVariableA;
 typedef struct
  {
  INT   _nSize;
  BOOL  _bAlsoField;
  LPCWSTR  _pszVarName;
  } scLlDelayDefineFieldOrVariableW;
 #if defined(UNICODE)
   typedef scLlDelayDefineFieldOrVariableW scLlDelayDefineFieldOrVariable, *PSCLLDELAYDEFINEFIELDORVARIABLE;
 #else
   typedef scLlDelayDefineFieldOrVariableA scLlDelayDefineFieldOrVariable, *PSCLLDELAYDEFINEFIELDORVARIABLE;
 #endif
 
 typedef struct
  {
  INT   _nSize;
  LPCWSTR  _pszVarName;
  LPWSTR  _pszContents;
  UINT  _nBufSize; // size of buffer '_pszContents' points to. If a larger buffer is needed, _pszContents must be changed to point to that (static) buffer in the host application
  HANDLE  _hContents;
  VARIANT* _pvContents;
  } scLlDelayedValueW;
 
 typedef struct
  {
  INT   _nSize;
  BOOL  _bStoring;
  IStream* _pContentStream;
  } scLlProjectUserData;
 
 typedef struct
  {
  UINT        _nSize;
  UINT_PTR       _nUserParam;
  LPCSTR        _pszProjectFileName;
  LPCSTR        _pszOriginalProjectFileName;
  UINT        _nPages; // 0 for 'unlimited'
  UINT        _nFunction;
  HWND        _hWnd;
  HANDLE        _hEvent;
  LPCSTR        _pszExportFormat;
   BOOL        _bWithoutDialog;
  } scLlDesignerPrintJobA;
 typedef struct
  {
  UINT        _nSize;
  UINT_PTR       _nUserParam;
  LPCWSTR        _pszProjectFileName;
  LPCWSTR        _pszOriginalProjectFileName;
  UINT        _nPages; // 0 for 'unlimited'
  UINT        _nFunction;
  HWND        _hWnd;
  HANDLE        _hEvent;
  LPCWSTR        _pszExportFormat;
   BOOL        _bWithoutDialog;
  } scLlDesignerPrintJobW;
 #if defined(UNICODE)
   typedef scLlDesignerPrintJobW scLlDesignerPrintJob, *PSCLLDESIGNERPRINTJOB;
 #else
   typedef scLlDesignerPrintJobA scLlDesignerPrintJob, *PSCLLDESIGNERPRINTJOB;
 #endif
 
 typedef struct
 {
  UINT        _nSize;        // [in]
  UINT        _nFunction;       // [in]
  UINT_PTR       _nUserParameter;     // [in]
  LPCSTR        _pszTableID;      // [in]
  LPCSTR        _pszRelationID;      // [in]
  LPCSTR        _pszSubreportTableID;    // [in]
  LPCSTR        _pszKeyField;      // [in]
  LPCSTR        _pszSubreportKeyField;    // [in]
  LPCSTR        _pszKeyValue;      // [in]
  LPCSTR        _pszProjectFileName;    // [in]
  LPCSTR        _pszPreviewFileName;    // [in] NULL for interactive mode
  LPCSTR        _pszTooltipText;     // [in]
  LPCSTR        _pszTabText;      // [in] right now, same as _pszTooltipText
  HWND        _hWnd;        // [in]
  UINT_PTR       _nID;        // [in] unique ID of job (important for ABORT/FINISH)
   HANDLE        _hAttachInfo;      // [in]
  LPCSTR        _pszSRID;       // [in] internal, subreport ID of link in base report
  LPCSTR        _pszExportFormat;     // [in] internal
 } scLlDrillDownJobA;
 typedef struct
 {
  UINT        _nSize;        // [in]
  UINT        _nFunction;       // [in]
  UINT_PTR       _nUserParameter;     // [in]
  LPCWSTR        _pszTableID;      // [in]
  LPCWSTR        _pszRelationID;      // [in]
  LPCWSTR        _pszSubreportTableID;    // [in]
  LPCWSTR        _pszKeyField;      // [in]
  LPCWSTR        _pszSubreportKeyField;    // [in]
  LPCWSTR        _pszKeyValue;      // [in]
  LPCWSTR        _pszProjectFileName;    // [in]
  LPCWSTR        _pszPreviewFileName;    // [in] NULL for interactive mode
  LPCWSTR        _pszTooltipText;     // [in]
  LPCWSTR        _pszTabText;      // [in] right now, same as _pszTooltipText
  HWND        _hWnd;        // [in]
  UINT_PTR       _nID;        // [in] unique ID of job (important for ABORT/FINISH)
   HANDLE        _hAttachInfo;      // [in]
  LPCWSTR        _pszSRID;       // [in] internal, subreport ID of link in base report
  LPCWSTR        _pszExportFormat;     // [in] internal
 } scLlDrillDownJobW;
 #if defined(UNICODE)
   typedef scLlDrillDownJobW scLlDrillDownJob, *PSCLLDRILLDOWNJOB;
 #else
   typedef scLlDrillDownJobA scLlDrillDownJob, *PSCLLDRILLDOWNJOB;
 #endif
 
 
 typedef struct
  {
  INT   _nSize;
  INT   _hLlJob;
  LPCSTR  _pszParentTableID;
  LPCSTR  _pszSubreportTableID;
  LPCSTR  _pszRelationID;
  LPSTR  _pszAllowedTables;
  UINT  _nBufSize; // size of buffer '_pszAllowedTables' points to. If a larger buffer is needed, _pszAllowedTables must be changed to point to that (static) buffer in the host application
  } scLlDDFilterInfoA;
 typedef struct
  {
  INT   _nSize;
  INT   _hLlJob;
  LPCWSTR  _pszParentTableID;
  LPCWSTR  _pszSubreportTableID;
  LPCWSTR  _pszRelationID;
  LPWSTR  _pszAllowedTables;
  UINT  _nBufSize; // size of buffer '_pszAllowedTables' points to. If a larger buffer is needed, _pszAllowedTables must be changed to point to that (static) buffer in the host application
  } scLlDDFilterInfoW;
 #if defined(UNICODE)
   typedef scLlDDFilterInfoW scLlDDFilterInfo, *PSCLLDDFILTERINFO;
 #else
   typedef scLlDDFilterInfoA scLlDDFilterInfo, *PSCLLDDFILTERINFO;
 #endif
 typedef struct
  {
  INT   _nSize;
  UINT  _nAction; // LL_DRILLDOWN_DESIGNER_ACTION_...
  INT   _hLlJob;
  LPCWSTR  _pszParentTableID;
  LPCWSTR  _pszSubreportTableID;
  LPCWSTR  _pszRelationID;
  LPCWSTR  _pszProjectFilename;
  } scLlDDDesignerActionW;
 #define LL_DRILLDOWN_ACTION_DESIGNER_START 1
 #define LL_DRILLDOWN_ACTION_DESIGNER_END  2
 
 enum enArgType
  {
  LLEXPR2HOSTEXPR_ARG_UNKNOWN,
  LLEXPR2HOSTEXPR_ARG_BOOLEAN,
  LLEXPR2HOSTEXPR_ARG_TEXT,
  LLEXPR2HOSTEXPR_ARG_NUMBER,
  LLEXPR2HOSTEXPR_ARG_DATE,
  LLEXPR2HOSTEXPR_ARG_UNARY_OPERATOR_SIGN,
  LLEXPR2HOSTEXPR_ARG_UNARY_OPERATOR_NEGATION,
  LLEXPR2HOSTEXPR_ARG_BINARY_OPERATOR_ADD,
  LLEXPR2HOSTEXPR_ARG_BINARY_OPERATOR_SUBTRACT,
  LLEXPR2HOSTEXPR_ARG_BINARY_OPERATOR_MULTIPLY,
  LLEXPR2HOSTEXPR_ARG_BINARY_OPERATOR_DIVIDE,
  LLEXPR2HOSTEXPR_ARG_BINARY_OPERATOR_MODULO,
  LLEXPR2HOSTEXPR_ARG_BINARY_OPERATOR_APPEND,
  LLEXPR2HOSTEXPR_ARG_BINARY_OPERATOR_ADD_DATETIME,
  LLEXPR2HOSTEXPR_ARG_LOGICAL_OPERATOR_XOR,
  LLEXPR2HOSTEXPR_ARG_LOGICAL_OPERATOR_OR,
  LLEXPR2HOSTEXPR_ARG_LOGICAL_OPERATOR_AND,
  LLEXPR2HOSTEXPR_ARG_RELATION_EQUAL,
  LLEXPR2HOSTEXPR_ARG_RELATION_NOTEQUAL,
  LLEXPR2HOSTEXPR_ARG_RELATION_GREATERTHAN,
  LLEXPR2HOSTEXPR_ARG_RELATION_GREATERTHANOREQUAL,
  LLEXPR2HOSTEXPR_ARG_RELATION_LESSTHAN,
  LLEXPR2HOSTEXPR_ARG_RELATION_LESSTHANOREQUAL,
  LLEXPR2HOSTEXPR_ARG_FUNCTION,
  LLEXPR2HOSTEXPR_ARG_FIELD,
   LLEXPR2HOSTEXPR_INITIALIZE,
  LLEXPR2HOSTEXPR_ARG_UNARY_OPERATOR_TRUE,
  LLEXPR2HOSTEXPR_ARG_UNARY_OPERATOR_TRUE_AS_ARG,
  LLEXPR2HOSTEXPR_ARG_UNARY_OPERATOR_FALSE_AS_ARG,
  };
 
 struct scLLEXPR2HOSTEXPR
  {
  public:
   UINT       _nSize;
   LPCWSTR       _pszTableID;
   enArgType      _nType;
   VARIANT*      _pvRes;
   INT        _nArgs;
   VARIANT*      _pvName;
   const VARIANT*     _pv1;
   const VARIANT*     _pv2;
   const VARIANT*     _pv3;
   const VARIANT*     _pv4;
  };
 
 
 #ifdef __cplusplus
 interface ILLDataProvider
  : public IUnknown
  // IID_ILLDATAPROVIDER   0x3cbae450,0x8880,0x11d2,0x96,0xa3,0x00,0x60,0x08,0x6f,0xef,0xff
  {
  virtual HRESULT _stdcall     OpenTable(LPCWSTR pszTableName, IUnknown** ppUnkOfNewDataProvider) = 0;
              // set the record pointer before the first row
  virtual HRESULT _stdcall     OpenChildTable(LPCWSTR pszRelation, IUnknown** ppUnkOfNewDataProvider) = 0;
              // set the record pointer before the first row
  virtual HRESULT _stdcall     GetRowCount(INT* pnRows) = 0;
      enum enDefineDelayedInfo
   {
    DELAYEDINFO_SORTORDERS_DESIGNING = 0,
    DELAYEDINFO_SORTORDERS_PRINTING = 1,
   };
  virtual HRESULT _stdcall     DefineDelayedInfo(enDefineDelayedInfo nInfo) = 0;
              // return S_FALSE if unknown
  virtual HRESULT _stdcall     MoveNext() = 0;
              // return S_FALSE if the table is done
      enum enDefineRowMode
   {
    ROWMODE_DEFAULT = 0,  // internal, not yet queried
    ROWMODE_OWN_COLUMNS = 1, // bit 0
    ROWMODE_1TO1_COLUMNS = 2, // bit 1
    ROWMODE_ALL_COLUMNS = 3, // bit 0 | bit 1
    ROWMODE_COLUMN_MASK = 0x0f,
 
    ROWMODE_DATA_PRINT_SYNTAXPARSING = 0x00,
    ROWMODE_DATA_DESIGN = 0x10,
    ROWMODE_DATA_PRINT_REALDATA = 0x20,
    ROWMODE_DATA_MASK = 0xf0,
 
    ROWMODE_FIELD = 0x100,
   };
  virtual HRESULT _stdcall     DefineRow(enDefineRowMode, const VARIANT* arvRelations) = 0;
  virtual HRESULT _stdcall     Dispose() = 0;
              // return S_FALSE if the table is done
  virtual HRESULT _stdcall     SetUsedIdentifiers(const VARIANT* arvFieldRestriction) = 0;
  virtual HRESULT _stdcall     ApplySortOrder(LPCWSTR pszSortOrder) = 0;
  virtual HRESULT _stdcall     ApplyFilter(const VARIANT* arvFields, const VARIANT* arvValues) = 0; // Filter in key=value form
  virtual HRESULT _stdcall     ApplyAdvancedFilter(LPCWSTR pszFilter, const VARIANT* arvValues) = 0; // Filter in host expression mode (if possible)
      enum enOptionIndex
   { 
    OPTION_LAST_ERROR = 1,      // r/o
    OPTION_SCHEME_AND_DEFAULTS = 2,    // r/o
    OPTION_QUERY_THREADED_ACCESS = 3,   // r/o  // [in] VARIANT points to String list with base table and its relations, [out] VT_BOOL
    OPTION_HINT_ADVANCEDFILTER_IS_CACHED = 4, // w/o
    OPTION_HINT_DISTINCT = 5,
    OPTION_SUPPORTED_AS_1_TO_1_RELATION = 6, // r/o  // [in] VARIANT points to String with relation
    OPTION_HINT_MAXROWS = 7,     // w/o
    OPTION_HINT_IS_INFO_QUERY = 8,    // w/o    tells the table that is used to define the data structure or query table options. (LL.NET can [but doesnt need to] redirect DefineData() to the schema row in that case)
   };
      enum OptionSchemaRowUsageModeFlags
   {
    OPTION_SCHEMAROWUSAGEMODE_NONE = 0x00,
    OPTION_SCHEMAROWUSAGEMODE_DESIGN = 0x01,
    OPTION_SCHEMAROWUSAGEMODE_PRINT = 0x02,
   };
  virtual HRESULT _stdcall     SetOption(enOptionIndex nIndex, const VARIANT* pvValue) = 0;
  virtual HRESULT _stdcall     GetOption(enOptionIndex nIndex, VARIANT* pvValue) = 0;
  };
 inline ILLDataProvider::enDefineRowMode operator|(ILLDataProvider::enDefineRowMode a, ILLDataProvider::enDefineRowMode b)
 {
    return ILLDataProvider::enDefineRowMode((unsigned)a | (unsigned)b);
 }
 inline ILLDataProvider::enDefineRowMode operator&(ILLDataProvider::enDefineRowMode a, ILLDataProvider::enDefineRowMode b)
 {
    return ILLDataProvider::enDefineRowMode((unsigned)a & (unsigned)b);
 }
 
 #endif // __cplusplus
 
 #endif // ifndef IMPLEMENTATION
 
 #ifdef _DEF_LLXINTERFACE // LL internal
   #include "lxoem.h"
 #endif // _DEF_LLXINTERFACE
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 struct scLLNtfyReportparametersCollected
  {
   INT   _nSize;
   HLLDOMOBJ _hProject;
   LPCWSTR  _pszTriggerPrintID;
   LPCWSTR  _pszNeedDataError;
   LPCWSTR  _pszNeedDataErrorWithKey;
   const VARIANT* _pvRPDefinitions;
   const VARIANT* _pvRPContents;
  };
 struct scLLNtfyExporterPageFinished
  {
   INT   _nSize;
   INT   _nPage;
   LPCWSTR  _pszFilename;
  };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 struct scLLNtfyHyperlink
  {
   enum enHyperlinkAction
    {
    HLACTION_Q_TOOLTIP, // see _pvHoverTooltip
    HLACTION_Q_RBUTTONALLOWED, // 2=yes, 1=no
    HLACTION_LCLICKED,
    HLACTION_RCLICKED,
    };
   INT   _nSize;
   enHyperlinkAction _nAction;
   VARIANT* _pvHoverTooltip;
   LPCWSTR  _pwszProtocol;
   LPCWSTR  _pwszData;
  };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 struct scLLNtfyReportStateItem
  {
   INT   _nSize;
   LPCWSTR  _pszStateID;
   VARIANT* _pvStateObject;
  };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 struct scLLNtfyEMFHandle
  {
   INT    _nSize;
   INT    _nJob;
   INT    _nPageIndex;
   HENHMETAFILE _HEMF;
       LPCWSTR         _pszFileName;
  };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 #if _MSC_VER >= 1800 // VS 2013
 
 struct scLLQueryObjectAllowed
  {
   INT    _nSize;
   LL_ENUM_DEF  enObjectType { UNKNOWN = -1, LLX = 1 };
   enObjectType _nObjectType;
   VARIANT*  _pvObjectSubtype;
   LL_ENUM_DEF  enLoadType { UNKNOWN = -1, NORMAL = 0, IMPORT = 1, IMPORT_TEMPLATE = 2 };
   enLoadType  _nLoadType;
  };
 #endif
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 #if _MSC_VER >= 1800 // VS 2013
 
 struct scLLQueryFilenameReplacement
  {
   INT    _nSize;
   LL_ENUM_DEF  enLoadType { UNKNOWN = -1, NORMAL = 0, IMPORT = 1, IMPORT_TEMPLATE = 2 };
   enLoadType  _nLoadType;
   LL_ENUM_DEF  enItemType { UNKNOWN = -1, DRAWING = 0, DRILLDOWN = 1, TEMPLATE = 2, TOC = 3, IDX = 4, GTC = 5 };
   enItemType  _nItemType;
   VARIANT*  _pvItemIdentifier;
   VARIANT*  _pvItemPath;
   IStream*  _pIStreamOfContents;
  };
 #endif
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 struct scLlNtfyHostImport
   {
   UINT    _nSize;
   HWND   _hWndParent;
   LCID   _nUILCID;
   VARIANT*  _pvItemPath;
   };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 struct scLlNtfyExprErrorEx
   {
   UINT    _nSize;
   LPCWSTR   _pszExpr;
   LPCWSTR   _pszError;
   const VARIANT* _pvHierarchy; // array of strings
   };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 struct scLLNtfyExporterPageCount
  {
   INT   _nSize;
   INT   _nPage;
  };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 struct scLLNtfyFindAndReplace
  {
  public:
   UINT       _nSize;
   LPCWSTR       _pszOldText;
   VARIANT*      _pvNewText; // NULL if FIND, otherwise a REPLACEABLE text
   LPCWSTR       _pszError; // NULL if no error, otherwise the error text
  };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 struct scLLNtfyProjectLoadEx
  {
  public:
   UINT       _nSize;
   LPCWSTR       _pszProjectSource;
   VARIANT*      _pvError; // if set, project load is abrted (the errortext is not yet shown to the user!)
  };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 typedef struct
  {
  INT   _nSize;
  INT32  _nIndex;
  LPCWSTR  _pszJobData;
  LPCWSTR  _pszProjectID;
  } scLlCombinationPrintStep;
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 #define LL_ERR_NTFY_LOADERROR_NO_DATABASE_STRUCTURE_DEFINED 0
 #define LL_ERR_NTFY_LOADERROR_DATABASE_UNKNOWN_TABLE   1
 #define LL_ERR_NTFY_LOADERROR_DATABASE_UNKNOWN_RELATION  2
 #define LL_ERR_NTFY_LOADERROR_DATABASE_UNKNOWN_SORTORDER  3
 struct scLlNtfyDatabaseError
   {
   UINT    _nSize;
   UINT   _nCode;
   LPCWSTR   _pszUIMessage;  // message to show (all except LL_ERR_NTFY_LOADERROR_NO_DATABASE_STRUCTURE_DEFINED)
   LPCWSTR   _pszTableName;  // (all except LL_ERR_NTFY_LOADERROR_NO_DATABASE_STRUCTURE_DEFINED)
   LPCWSTR   _pszChildTableName; // relation child (LL_ERR_NTFY_LOADERROR_DATABASE_UNKNOWN_RELATION)
   LPCWSTR   _pszRelationName;  // relation name (sic!) (LL_ERR_NTFY_LOADERROR_DATABASE_UNKNOWN_RELATION)
   LPCWSTR   _pszSortOrderName; // (LL_ERR_NTFY_LOADERROR_DATABASE_UNKNOWN_SORTORDER)
   };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 typedef struct
  {
   INT  _nSize;
   INT  _nProjectTypeCount;
   UINT* _pProjectType;
  } scLlSelectFileDlgTitleExParams;
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 interface ILlXOBStatCB
   : public IUnknown
  {
    public:
           enum enConfigEntryType
            {
            LLXOBSCB_CET_ENTRY,
            LLXOBSCB_CET_CLEAR,
            };
           enum enPropertyBag
            {
            LLXOBSCB_PB_GLOBAL,
            LLXOBSCB_PB_USER,
            };
     public:
   STDMETHOD      (QueryInterface)(REFIID riid, VOID** ppv) PURE;
   STDMETHOD_      (ULONG,AddRef)(void) PURE;
   STDMETHOD_      (ULONG,Release)(void) PURE;
 
   STDMETHOD_      (ULONG,GetVersion)(void) PURE;
   STDMETHOD      (GetParentHWND)(HWND* phWnd) PURE;
   STDMETHOD      (GetParentLCID)(LCID* pnLCID) PURE;
   STDMETHOD      (GetParentViewName)(BSTR* pbsName) PURE;
   STDMETHOD      (GetField)(int nIndex, BSTR* pbsName, BSTR* pbsAlias, UINT* pnType) PURE;    // S_FALSE for 'no more field', LL field types
   STDMETHOD      (SetAdditionalFields)(HLLJOB hLlJob) PURE;
 
   STDMETHOD      (GetConfigEntry)(enPropertyBag nBag, const BSTR bsName, BSTR* pbsValue) PURE;    // S_FALSE for 'no entry'
   STDMETHOD      (SetConfigEntry)(enPropertyBag nBag, const BSTR bsName, BSTR bsValue, enConfigEntryType nType) PURE; // please ignore empty names (only evaluate nType in this case)
 
   STDMETHOD      (GetOption)(int nOption, VARIANT* pVal) PURE;
            #define LLXOBSCB_OPT_MAY_MODIFY_GLOBAL   1     // BSTR, if <> EMPTY -> show message
            #define LLXOBSCB_OPT_MAY_MODIFY_USER   2     // BSTR, if <> EMPTY -> show message
            #define LLXOBSCB_OPT_DEFAULTPROJECT    3     // BSTR
            #define LLXOBSCB_OPT_HELPPRESSED    4     // notification: help button pressed
            #define LLXOBSCB_OPT_DEFAULT_TEMPLATEFILENAME 5     // default "CRM"
            #define LLXOBSCB_OPT_READONLYLIST    6     // BOOL
            #define LLXOBSCB_OPT_PROJECTROOTDIR    7     // BSTR
                     #define LLXOBSCB_OPT_HOSTROOTDIR    8     // BSTR
            #define LLXOBSCB_OPT_WANTS_MODIFY_GLOBAL  9     // BSTR, if <> EMPTY -> show message and abort editing
 
   STDMETHOD      (TableGetRowcount)(DWORD* pdwCount) PURE;       // S_FALSE for 'no data'
   STDMETHOD      (TableGotoTop)(void) PURE;           // S_FALSE for 'no data'
   STDMETHOD      (TableNextRow)(void) PURE;           // S_FALSE for 'no more data'
   STDMETHOD      (GetFieldContents)(const BSTR bsName, VARIANT* pvContents) PURE;    //
   STDMETHOD      (QueryContinue)() PURE;                                            // S_FALSE for ABORT, S_OK for continue
  };
 
 interface ILlXOBStatJob
   : public IUnknown
  {
     public:
       enum   enLlXOBStatFileType
           {
           STATFILETYPE_EMF = 0,
           STATFILETYPE_JPG = 1,
           STATFILETYPE_BMP = 2,
           };
       struct scLlXOBStatJobFileInfo
           {
           UINT                _nSize;
           BSTR                _bsFileName;
           enLlXOBStatFileType _nFileType;
           SIZE                _szDimensions;
           };
     public:
   STDMETHOD      (QueryInterface)(REFIID riid, VOID** ppv) PURE;
   STDMETHOD_      (ULONG,AddRef)(void) PURE;
   STDMETHOD_      (ULONG,Release)(void) PURE;
 
   STDMETHOD_      (ULONG,GetVersion)(void) PURE;
   STDMETHOD      (SetNtfySink)(ILlXOBStatCB* pNtfySink) PURE;
 
   STDMETHOD      (Edit)(void) PURE;
   STDMETHOD      (Execute)(BSTR bsProject) PURE;          // S_FALSE if project not found
 
   STDMETHOD      (GetLastError)(BSTR* pbsLastError) PURE;
   STDMETHOD      (EnumProjects)(IEnumString** ppEnum) PURE;
   STDMETHOD      (CreateFile)(BSTR bsProject, const scLlXOBStatJobFileInfo& FileInfo) PURE;
  };
 #else
  #define ILlXOBStatCB PVOID
  #define ILlXOBStatJob PVOID
 #endif // #ifdef __cplusplus
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 interface ILLRTFEventSink
  : public IUnknown
  {
   STDMETHOD_(void,OnSelectionChanged)(UINT nType, INT nMin, INT nMax) PURE;
   STDMETHOD_(void,OnContentsChanged)() PURE;
   STDMETHOD_(bool,OnKeyDown)(UINT nVKCodeAndModifiers, UINT lParam) PURE;
   STDMETHOD_(bool,OnKeyUp)(UINT nVKCodeAndModifiers, UINT lParam) PURE;
   STDMETHOD_(bool,OnChar)(UINT nCharAndModifiers, UINT lParam) PURE;
   STDMETHOD_(bool,OnDialogKey)(bool bDown, UINT nVKCodeAndModifiers, UINT lParam) PURE;
  };
  // {BAFBCB84-9C41-4587-81E4-12A7C1A7CFFE}
  // DEFINE_GUID(IID_LL_RTFEVENTSINK,
  //  0xbafbcb84, 0x9c41, 0x4587, 0x81, 0xe4, 0x12, 0xa7, 0xc1, 0xa7, 0xcf, 0xfe);
 #define LL_RTFEVENT_KEYMODIFIER_LSHIFT 0x00010000 // keys
 #define LL_RTFEVENT_KEYMODIFIER_RSHIFT 0x00020000
 #define LL_RTFEVENT_KEYMODIFIER_SHIFT  0x00080000
 #define LL_RTFEVENT_KEYMODIFIER_LCONTROL 0x00100000
 #define LL_RTFEVENT_KEYMODIFIER_RCONTROL 0x00200000
 #define LL_RTFEVENT_KEYMODIFIER_CONTROL 0x00800000
 #define LL_RTFEVENT_KEYMODIFIER_LMENU  0x01000000
 #define LL_RTFEVENT_KEYMODIFIER_RMENU  0x02000000
 #define LL_RTFEVENT_KEYMODIFIER_MENU  0x08000000
 #define LL_RTFEVENT_KEYMODIFIER_LBUTTON 0x10000000 // and mouse buttons
 #define LL_RTFEVENT_KEYMODIFIER_RBUTTON 0x20000000
 #define LL_RTFEVENT_KEYMODIFIER_MBUTTON 0x40000000
 
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 interface DECLSPEC_UUID("3cbae451-8880-11d2-96a3-0060086fefff") ILLDebugSink
  : public IUnknown
  {
  LL_ENUM_DEF enLevel
   {
   LEVEL_DEBUG = 1,
   LEVEL_INFO = 2,
   LEVEL_WARNING = 3,
   LEVEL_ERROR = 4,
   };
  LL_ENUM_DEF enCategory
   {
   CATEGORY_GENERIC = 0,
   CATEGORY_API = 1,
   CATEGORY_PRINTER = 2,
   CATEGORY_LICENSING = 3,
   CATEGORY_COMPONENT = 4,
   CATEGORY_MAIL = 5,
   CATEGORY_NATIVE2SQL_TRANSLATION = 6,
   CATEGORY_NOTIFICATIONS = 7,
   CATEGORY_SYSINFO = 8,
   CATEGORY_DOM = 9,
   CATEGORY_DATAPROVIDER = 10,
   CATEGORY_STORAGE = 11,
   CATEGORY_OBJECTSTATES = 12,
   CATEGORY_EXPORT = 13,
   CATEGORY_WEBDESIGNER = 14,
   CATEGORY_TEMPORARY = 15,
   CATEGORY_NEXT, // end of categories+1
   };
   STDMETHOD(WantOutput)(INT nLevel, INT nCategory) PURE;
   STDMETHOD(Output)(INT nLevel, INT nCategory, INT nDelta, LPCWSTR bsText) PURE;
  };
 
 interface ILLDebugSink2Host
  {
   STDMETHOD(GetText)(BSTR* pbs) PURE; // internal use only, needs not to be implemented
  };
 interface DECLSPEC_UUID("3dbae451-8880-11d2-96a3-0060086fefff") ILLDebugSink2
  : public ILLDebugSink
  {
   STDMETHOD(Output)(INT nLevel, INT nCategory, INT nDelta, ILLDebugSink2Host* pHost) PURE; // internal use only, needs not to be implemented
  };
 
  // ----------------------------------------
 
 interface DECLSPEC_UUID("7BA7D759-863F-4EB8-9CDC-93C7A1E137CC") ILLRepositoryItem
  : public IUnknown
  {
   STDMETHOD(GetType)(VARIANT* pvType) PURE;
   STDMETHOD(GetUIDescription)(DWORD nLCID, VARIANT* pvDescription) PURE;
   STDMETHOD(SetUIDescription)(DWORD nLCID, const VARIANT vDescription) PURE; // nLCID==0 && psDescription==nullptr (or empty) -> clear list
   STDMETHOD(GetBLOB)(VARIANT* pvBLOB) PURE; 
   STDMETHOD(GetParentID)(VARIANT* pvParentID) PURE;
   STDMETHOD(GetFolderID)(VARIANT* pv) PURE;
   STDMETHOD(SetFolderID)(const VARIANT pv) PURE;
  };
 
 interface DECLSPEC_UUID("0B14D53F-8907-41D6-A0E6-95C1E812E31A") ILLRepositoryItemSink
  : public IUnknown
  {
   STDMETHOD(DefineItem)(LPCWSTR psID, LPCWSTR psItemBLOB) PURE;
  };
 
 interface DECLSPEC_UUID("46433E33-1C0D-4D46-AC44-F72F87870C55") ILLRepository
  : public IUnknown
  {
   STDMETHOD(DefineItems)(ILLDebugSink* pDebugSink, LPCWSTR psFolderID, ILLRepositoryItemSink* pSink) PURE;
   STDMETHOD(Load)(ILLDebugSink* pDebugSink, LPCWSTR psID, IStream* pStream) PURE;
   STDMETHOD(Save)(ILLDebugSink* pDebugSink, LPCWSTR psID, LPCWSTR psType, LPCWSTR pszUserDefinedID, IStream* pStream, LPCWSTR psItemBLOB) PURE;
   STDMETHOD(Delete)(ILLDebugSink* pDebugSink, LPCWSTR psID) PURE;
   LL_ENUM_DEF enInfoType
    {
    LL_REPOS_INFO_TIMESTAMP = 1, // VT_DATE
    LL_REPOS_INFO_READONLY = 2, // VT_BOOL
    LL_REPOS_INFO_BLOB = 3, // VT_BSTR
    LL_REPOS_INFO_QUERY_THREADED_ACCESS = 4, // psID == nullptr, VT_BOOL, psID == NULL. Default (on failure of call) is TRUE
    LL_REPOS_INFO_SUPPORTS_HIERARCHY = 5, // psID == nullptr, VT_BOOL
    };
   STDMETHOD(GetInfo)(ILLDebugSink* pDebugSink, LPCWSTR psID, enInfoType nType, VARIANT* psData) PURE;
   STDMETHOD(AbortLoad)(ILLDebugSink* pDebugSink, LPCWSTR psID) PURE;
   STDMETHOD(Lock)(ILLDebugSink* pDebugSink, LPCWSTR psID) PURE;
   STDMETHOD(Unlock)(ILLDebugSink* pDebugSink, LPCWSTR psID) PURE;
   };
 
  // ----------------------------------------
 
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 interface DECLSPEC_UUID("07089603-1B7A-4F3F-BDBF-DEB3ED06295D") ILLExprParseQuery
  : public IUnknown
  {
  STDMETHOD (QueryDefineVariable)(LPCWSTR pszFieldName, BOOL bIncludeFields, BSTR* pbsFieldNameLocalized) = 0; // S_OK if found and defined
   };
 
 #endif
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 
 interface DECLSPEC_UUID("4EBD8B79-2AD4-40EA-A29D-983F64A647B5") ILLPrePrintTextProcessor
  : public IUnknown
  {
  LL_ENUM_DEF enTextType
    {
    PLAINTEXT_COMPLETE = 1,
    PLAINTEXT_PARTIAL = 2,
    RTFSTREAM = 3,
    };
  STDMETHOD (ProcessText)(
   UINT nObjectType,
   LPCWSTR pszLLXObjectType,
   LPCWSTR pszObjectName, 
   enTextType nTextType,
   VARIANT* pvText) = 0; // S_OK if changed, S_FALSE if not, E_INVALIDARG for RTFSTREAM_UTF16
   };
 #endif
 #endif
 #ifndef IMPLEMENTATION
 interface DECLSPEC_UUID("B24706AD-B198-4403-93B8-57315A46F1AB") ILLInternalFunctionInfo
  : public IUnknown
  {
   STDMETHOD(GetName)(VARIANT* pv) PURE;
   STDMETHOD(GetRetTypeFCTPARATYPE)(UINT* pnFCTPARATYPE) PURE;
   STDMETHOD(GetParameterRestrictions)(INT* pnMin, INT* pnMax) PURE;
   STDMETHOD(GetSyntax)(VARIANT* pvSyntax, VARIANT* pvReturnValueTypeKey) PURE;
   STDMETHOD(GetGroups)(VARIANT* pv) PURE; // SAFEARRAY
   STDMETHOD(GetGroupUIDescription)(LPCWSTR pszGroupKey, VARIANT* pv) PURE;
   STDMETHOD(GetDescription)(VARIANT* pv, VARIANT* pvSample) PURE;
   STDMETHOD(GetParameterDescription)(INT nParameter, UINT* pnFCTPARATYPE, VARIANT* pvDescription, VARIANT* pvValues) PURE; // pvValues = SAFEARRAY
  };
 #endif
 #ifndef IMPLEMENTATION
 #ifdef __cplusplus
 #undef LL_ENUM_DEF
 #endif
 #endif

#undef extern

#ifdef __cplusplus
extern "C"
{
#endif

CMBT_LL_WINAPI HLLJOB   DLLPROC  LlJobOpen
	(
	INT                  nLanguage
	);

CMBT_LL_WINAPI HLLJOB   DLLPROC  LlJobOpenLCID
	(
	_LCID                nLCID
	);

CMBT_LL_WINAPI void     DLLPROC  LlJobClose
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI void     DLLPROC  LlSetDebug
	(
	UINT                 nOnOff
	);

CMBT_LL_WINAPI UINT     DLLPROC  LlGetVersion
	(
	INT                  nCmd
	);

CMBT_LL_WINAPI UINT     DLLPROC  LlGetNotificationMessage
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlSetNotificationMessage
	(
	HLLJOB               hLlJob,
	UINT                 nMessage
	);

CMBT_LL_WINAPI FARPROC  DLLPROC  LlSetNotificationCallback
	(
	HLLJOB               hLlJob,
	FARPROC              lpfnNotify
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineField LlDefineFieldW
       #define LlDefineFieldO LlDefineFieldA
     #else  // not UNICODE
       #define LlDefineField LlDefineFieldA
       #define LlDefineFieldO LlDefineFieldW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	LPCSTR               lpbufContents
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	LPCWSTR              lpbufContents
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineFieldExt LlDefineFieldExtW
       #define LlDefineFieldExtO LlDefineFieldExtA
     #else  // not UNICODE
       #define LlDefineFieldExt LlDefineFieldExtA
       #define LlDefineFieldExtO LlDefineFieldExtW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldExtA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	LPCSTR               lpbufContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldExtW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	LPCWSTR              lpbufContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineFieldExtHandle LlDefineFieldExtHandleW
       #define LlDefineFieldExtHandleO LlDefineFieldExtHandleA
     #else  // not UNICODE
       #define LlDefineFieldExtHandle LlDefineFieldExtHandleA
       #define LlDefineFieldExtHandleO LlDefineFieldExtHandleW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldExtHandleA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	HANDLE               hContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldExtHandleW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	HANDLE               hContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

CMBT_LL_WINAPI void     DLLPROC  LlDefineFieldStart
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineVariable LlDefineVariableW
       #define LlDefineVariableO LlDefineVariableA
     #else  // not UNICODE
       #define LlDefineVariable LlDefineVariableA
       #define LlDefineVariableO LlDefineVariableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	LPCSTR               lpbufContents
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	LPCWSTR              lpbufContents
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineVariableExt LlDefineVariableExtW
       #define LlDefineVariableExtO LlDefineVariableExtA
     #else  // not UNICODE
       #define LlDefineVariableExt LlDefineVariableExtA
       #define LlDefineVariableExtO LlDefineVariableExtW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableExtA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	LPCSTR               lpbufContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableExtW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	LPCWSTR              lpbufContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineVariableExtHandle LlDefineVariableExtHandleW
       #define LlDefineVariableExtHandleO LlDefineVariableExtHandleA
     #else  // not UNICODE
       #define LlDefineVariableExtHandle LlDefineVariableExtHandleA
       #define LlDefineVariableExtHandleO LlDefineVariableExtHandleW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableExtHandleA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	HANDLE               hContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableExtHandleW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	HANDLE               hContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineVariableName LlDefineVariableNameW
       #define LlDefineVariableNameO LlDefineVariableNameA
     #else  // not UNICODE
       #define LlDefineVariableName LlDefineVariableNameA
       #define LlDefineVariableNameO LlDefineVariableNameW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableNameA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableNameW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName
	);
#endif // WIN32

CMBT_LL_WINAPI void     DLLPROC  LlDefineVariableStart
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineSumVariable LlDefineSumVariableW
       #define LlDefineSumVariableO LlDefineSumVariableA
     #else  // not UNICODE
       #define LlDefineSumVariable LlDefineSumVariableA
       #define LlDefineSumVariableO LlDefineSumVariableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineSumVariableA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	LPCSTR               lpbufContents
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineSumVariableW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	LPCWSTR              lpbufContents
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineLayout LlDefineLayoutW
       #define LlDefineLayoutO LlDefineLayoutA
     #else  // not UNICODE
       #define LlDefineLayout LlDefineLayoutA
       #define LlDefineLayoutO LlDefineLayoutW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineLayoutA
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCSTR               pszTitle,
	UINT                 nObjType,
	LPCSTR               pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineLayoutW
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCWSTR              pszTitle,
	UINT                 nObjType,
	LPCWSTR              pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDlgEditLine LlDlgEditLineW
       #define LlDlgEditLineO LlDlgEditLineA
     #else  // not UNICODE
       #define LlDlgEditLine LlDlgEditLineA
       #define LlDlgEditLineO LlDlgEditLineW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDlgEditLineA
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPSTR                lpBuf,
	INT                  nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDlgEditLineW
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPWSTR               lpBuf,
	INT                  nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDlgEditLineEx LlDlgEditLineExW
       #define LlDlgEditLineExO LlDlgEditLineExA
     #else  // not UNICODE
       #define LlDlgEditLineEx LlDlgEditLineExA
       #define LlDlgEditLineExO LlDlgEditLineExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDlgEditLineExA
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPSTR                pszBuffer,
	UINT                 nBufSize,
	UINT                 nParaTypes,
	LPCSTR               pszTitle,
	BOOL                 bTable,
	LPVOID               pvReserved
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDlgEditLineExW
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPWSTR               pszBuffer,
	UINT                 nBufSize,
	UINT                 nParaTypes,
	LPCWSTR              pszTitle,
	BOOL                 bTable,
	LPVOID               pvReserved
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPreviewSetTempPath LlPreviewSetTempPathW
       #define LlPreviewSetTempPathO LlPreviewSetTempPathA
     #else  // not UNICODE
       #define LlPreviewSetTempPath LlPreviewSetTempPathA
       #define LlPreviewSetTempPathO LlPreviewSetTempPathW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewSetTempPathA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszPath
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewSetTempPathW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszPath
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPreviewDeleteFiles LlPreviewDeleteFilesW
       #define LlPreviewDeleteFilesO LlPreviewDeleteFilesA
     #else  // not UNICODE
       #define LlPreviewDeleteFiles LlPreviewDeleteFilesA
       #define LlPreviewDeleteFilesO LlPreviewDeleteFilesW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewDeleteFilesA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjName,
	LPCSTR               pszPath
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewDeleteFilesW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjName,
	LPCWSTR              pszPath
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPreviewDisplay LlPreviewDisplayW
       #define LlPreviewDisplayO LlPreviewDisplayA
     #else  // not UNICODE
       #define LlPreviewDisplay LlPreviewDisplayA
       #define LlPreviewDisplayO LlPreviewDisplayW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewDisplayA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjName,
	LPCSTR               pszPath,
	HWND                 Wnd
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewDisplayW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjName,
	LPCWSTR              pszPath,
	HWND                 Wnd
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPreviewDisplayEx LlPreviewDisplayExW
       #define LlPreviewDisplayExO LlPreviewDisplayExA
     #else  // not UNICODE
       #define LlPreviewDisplayEx LlPreviewDisplayExA
       #define LlPreviewDisplayExO LlPreviewDisplayExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewDisplayExA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjName,
	LPCSTR               pszPath,
	HWND                 Wnd,
	UINT                 nOptions,
	LPVOID               pOptions
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPreviewDisplayExW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjName,
	LPCWSTR              pszPath,
	HWND                 Wnd,
	UINT                 nOptions,
	LPVOID               pOptions
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrint
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintAbort
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI BOOL     DLLPROC  LlPrintCheckLineFit
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintEnd
	(
	HLLJOB               hLlJob,
	INT                  nPages
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintFields
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintFieldsEnd
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetCurrentPage
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetItemsPerPage
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetItemsPerTable
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetRemainingItemsPerTable LlPrintGetRemainingItemsPerTableW
       #define LlPrintGetRemainingItemsPerTableO LlPrintGetRemainingItemsPerTableA
     #else  // not UNICODE
       #define LlPrintGetRemainingItemsPerTable LlPrintGetRemainingItemsPerTableA
       #define LlPrintGetRemainingItemsPerTableO LlPrintGetRemainingItemsPerTableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetRemainingItemsPerTableA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetRemainingItemsPerTableW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetRemItemsPerTable LlPrintGetRemItemsPerTableW
       #define LlPrintGetRemItemsPerTableO LlPrintGetRemItemsPerTableA
     #else  // not UNICODE
       #define LlPrintGetRemItemsPerTable LlPrintGetRemItemsPerTableA
       #define LlPrintGetRemItemsPerTableO LlPrintGetRemItemsPerTableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetRemItemsPerTableA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetRemItemsPerTableW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszField
	);
#endif // WIN32

CMBT_LL_WINAPI INT_PTR  DLLPROC  LlPrintGetOption
	(
	HLLJOB               hLlJob,
	INT                  nIndex
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetPrinterInfo LlPrintGetPrinterInfoW
       #define LlPrintGetPrinterInfoO LlPrintGetPrinterInfoA
     #else  // not UNICODE
       #define LlPrintGetPrinterInfo LlPrintGetPrinterInfoA
       #define LlPrintGetPrinterInfoO LlPrintGetPrinterInfoW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetPrinterInfoA
	(
	HLLJOB               hLlJob,
	LPSTR                pszPrn,
	UINT                 nPrnLen,
	LPSTR                pszPort,
	UINT                 nPortLen
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetPrinterInfoW
	(
	HLLJOB               hLlJob,
	LPWSTR               pszPrn,
	UINT                 nPrnLen,
	LPWSTR               pszPort,
	UINT                 nPortLen
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintOptionsDialog LlPrintOptionsDialogW
       #define LlPrintOptionsDialogO LlPrintOptionsDialogA
     #else  // not UNICODE
       #define LlPrintOptionsDialog LlPrintOptionsDialogA
       #define LlPrintOptionsDialogO LlPrintOptionsDialogW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintOptionsDialogA
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCSTR               pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintOptionsDialogW
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCWSTR              pszText
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrintSelectOffsetEx
	(
	HLLJOB               hLlJob,
	HWND                 hWnd
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintSetBoxText LlPrintSetBoxTextW
       #define LlPrintSetBoxTextO LlPrintSetBoxTextA
     #else  // not UNICODE
       #define LlPrintSetBoxText LlPrintSetBoxTextA
       #define LlPrintSetBoxTextO LlPrintSetBoxTextW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintSetBoxTextA
	(
	HLLJOB               hLlJob,
	LPCSTR               szText,
	INT                  nPercentage
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintSetBoxTextW
	(
	HLLJOB               hLlJob,
	LPCWSTR              szText,
	INT                  nPercentage
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrintSetOption
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	INT_PTR              nValue
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintUpdateBox
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintStart LlPrintStartW
       #define LlPrintStartO LlPrintStartA
     #else  // not UNICODE
       #define LlPrintStart LlPrintStartA
       #define LlPrintStartO LlPrintStartW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintStartA
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCSTR               pszObjName,
	INT                  nPrintOptions,
	INT                  nReserved
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintStartW
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCWSTR              pszObjName,
	INT                  nPrintOptions,
	INT                  nReserved
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintWithBoxStart LlPrintWithBoxStartW
       #define LlPrintWithBoxStartO LlPrintWithBoxStartA
     #else  // not UNICODE
       #define LlPrintWithBoxStart LlPrintWithBoxStartA
       #define LlPrintWithBoxStartO LlPrintWithBoxStartW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintWithBoxStartA
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCSTR               pszObjName,
	INT                  nPrintOptions,
	INT                  nBoxType,
	HWND                 hWnd,
	LPCSTR               pszTitle
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintWithBoxStartW
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCWSTR              pszObjName,
	INT                  nPrintOptions,
	INT                  nBoxType,
	HWND                 hWnd,
	LPCWSTR              pszTitle
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrinterSetup LlPrinterSetupW
       #define LlPrinterSetupO LlPrinterSetupA
     #else  // not UNICODE
       #define LlPrinterSetup LlPrinterSetupA
       #define LlPrinterSetupO LlPrinterSetupW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrinterSetupA
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	UINT                 nObjType,
	LPCSTR               pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrinterSetupW
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	UINT                 nObjType,
	LPCWSTR              pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlSelectFileDlgTitleEx LlSelectFileDlgTitleExW
       #define LlSelectFileDlgTitleExO LlSelectFileDlgTitleExA
     #else  // not UNICODE
       #define LlSelectFileDlgTitleEx LlSelectFileDlgTitleExA
       #define LlSelectFileDlgTitleExO LlSelectFileDlgTitleExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSelectFileDlgTitleExA
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCSTR               pszTitle,
	UINT                 nObjType,
	LPSTR                pszObjName,
	UINT                 nBufSize,
	LPVOID               pReserved
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSelectFileDlgTitleExW
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCWSTR              pszTitle,
	UINT                 nObjType,
	LPWSTR               pszObjName,
	UINT                 nBufSize,
	LPVOID               pReserved
	);
#endif // WIN32

CMBT_LL_WINAPI void     DLLPROC  LlSetDlgboxMode
	(
	UINT                 nMode
	);

CMBT_LL_WINAPI UINT     DLLPROC  LlGetDlgboxMode
	(
	void
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprParse LlExprParseW
       #define LlExprParseO LlExprParseA
     #else  // not UNICODE
       #define LlExprParse LlExprParseA
       #define LlExprParseO LlExprParseW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI HLLEXPR  DLLPROC  LlExprParseA
	(
	HLLJOB               hLlJob,
	LPCSTR               lpExprText,
	BOOL                 bIncludeFields
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI HLLEXPR  DLLPROC  LlExprParseW
	(
	HLLJOB               hLlJob,
	LPCWSTR              lpExprText,
	BOOL                 bIncludeFields
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlExprType
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprError LlExprErrorW
       #define LlExprErrorO LlExprErrorA
     #else  // not UNICODE
       #define LlExprError LlExprErrorA
       #define LlExprErrorO LlExprErrorW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlExprErrorA
	(
	HLLJOB               hLlJob,
	LPSTR                pszBuf,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlExprErrorW
	(
	HLLJOB               hLlJob,
	LPWSTR               pszBuf,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI void     DLLPROC  LlExprFree
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprEvaluate LlExprEvaluateW
       #define LlExprEvaluateO LlExprEvaluateA
     #else  // not UNICODE
       #define LlExprEvaluate LlExprEvaluateA
       #define LlExprEvaluateO LlExprEvaluateW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprEvaluateA
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPSTR                pszBuf,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprEvaluateW
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPWSTR               pszBuf,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprGetUsedVars LlExprGetUsedVarsW
       #define LlExprGetUsedVarsO LlExprGetUsedVarsA
     #else  // not UNICODE
       #define LlExprGetUsedVars LlExprGetUsedVarsA
       #define LlExprGetUsedVarsO LlExprGetUsedVarsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedVarsA
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedVarsW
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlSetOption
	(
	HLLJOB               hLlJob,
	INT                  nMode,
	INT_PTR              nValue
	);

CMBT_LL_WINAPI INT_PTR  DLLPROC  LlGetOption
	(
	HLLJOB               hLlJob,
	INT                  nMode
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlSetOptionString LlSetOptionStringW
       #define LlSetOptionStringO LlSetOptionStringA
     #else  // not UNICODE
       #define LlSetOptionString LlSetOptionStringA
       #define LlSetOptionStringO LlSetOptionStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetOptionStringA
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPCSTR               pszBuffer
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetOptionStringW
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPCWSTR              pszBuffer
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetOptionString LlGetOptionStringW
       #define LlGetOptionStringO LlGetOptionStringA
     #else  // not UNICODE
       #define LlGetOptionString LlGetOptionStringA
       #define LlGetOptionStringO LlGetOptionStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetOptionStringA
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetOptionStringW
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintSetOptionString LlPrintSetOptionStringW
       #define LlPrintSetOptionStringO LlPrintSetOptionStringA
     #else  // not UNICODE
       #define LlPrintSetOptionString LlPrintSetOptionStringA
       #define LlPrintSetOptionStringO LlPrintSetOptionStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintSetOptionStringA
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPCSTR               pszBuffer
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintSetOptionStringW
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPCWSTR              pszBuffer
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetOptionString LlPrintGetOptionStringW
       #define LlPrintGetOptionStringO LlPrintGetOptionStringA
     #else  // not UNICODE
       #define LlPrintGetOptionString LlPrintGetOptionStringA
       #define LlPrintGetOptionStringO LlPrintGetOptionStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetOptionStringA
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetOptionStringW
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlDesignerProhibitAction
	(
	HLLJOB               hLlJob,
	INT                  nMenuID
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDesignerProhibitFunction LlDesignerProhibitFunctionW
       #define LlDesignerProhibitFunctionO LlDesignerProhibitFunctionA
     #else  // not UNICODE
       #define LlDesignerProhibitFunction LlDesignerProhibitFunctionA
       #define LlDesignerProhibitFunctionO LlDesignerProhibitFunctionW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerProhibitFunctionA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszFunction
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerProhibitFunctionW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszFunction
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerProhibitFunctionGroup
	(
	HLLJOB               hJob,
	UINT                 nGroupFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintEnableObject LlPrintEnableObjectW
       #define LlPrintEnableObjectO LlPrintEnableObjectA
     #else  // not UNICODE
       #define LlPrintEnableObject LlPrintEnableObjectA
       #define LlPrintEnableObjectO LlPrintEnableObjectW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintEnableObjectA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjectName,
	BOOL                 bEnable
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintEnableObjectW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjectName,
	BOOL                 bEnable
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlSetFileExtensions LlSetFileExtensionsW
       #define LlSetFileExtensionsO LlSetFileExtensionsA
     #else  // not UNICODE
       #define LlSetFileExtensions LlSetFileExtensionsA
       #define LlSetFileExtensionsO LlSetFileExtensionsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetFileExtensionsA
	(
	HLLJOB               hLlJob,
	INT                  nObjType,
	LPCSTR               pszObjectExt,
	LPCSTR               pszPrinterExt,
	LPCSTR               pszSketchExt
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetFileExtensionsW
	(
	HLLJOB               hLlJob,
	INT                  nObjType,
	LPCWSTR              pszObjectExt,
	LPCWSTR              pszPrinterExt,
	LPCWSTR              pszSketchExt
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetTextCharsPrinted LlPrintGetTextCharsPrintedW
       #define LlPrintGetTextCharsPrintedO LlPrintGetTextCharsPrintedA
     #else  // not UNICODE
       #define LlPrintGetTextCharsPrinted LlPrintGetTextCharsPrintedA
       #define LlPrintGetTextCharsPrintedO LlPrintGetTextCharsPrintedW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetTextCharsPrintedA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjectName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetTextCharsPrintedW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjectName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetFieldCharsPrinted LlPrintGetFieldCharsPrintedW
       #define LlPrintGetFieldCharsPrintedO LlPrintGetFieldCharsPrintedA
     #else  // not UNICODE
       #define LlPrintGetFieldCharsPrinted LlPrintGetFieldCharsPrintedA
       #define LlPrintGetFieldCharsPrintedO LlPrintGetFieldCharsPrintedW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetFieldCharsPrintedA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjectName,
	LPCSTR               pszField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetFieldCharsPrintedW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjectName,
	LPCWSTR              pszField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintIsVariableUsed LlPrintIsVariableUsedW
       #define LlPrintIsVariableUsedO LlPrintIsVariableUsedA
     #else  // not UNICODE
       #define LlPrintIsVariableUsed LlPrintIsVariableUsedA
       #define LlPrintIsVariableUsedO LlPrintIsVariableUsedW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintIsVariableUsedA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintIsVariableUsedW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintIsFieldUsed LlPrintIsFieldUsedW
       #define LlPrintIsFieldUsedO LlPrintIsFieldUsedA
     #else  // not UNICODE
       #define LlPrintIsFieldUsed LlPrintIsFieldUsedA
       #define LlPrintIsFieldUsedO LlPrintIsFieldUsedW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintIsFieldUsedA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszFieldName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintIsFieldUsedW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszFieldName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintOptionsDialogTitle LlPrintOptionsDialogTitleW
       #define LlPrintOptionsDialogTitleO LlPrintOptionsDialogTitleA
     #else  // not UNICODE
       #define LlPrintOptionsDialogTitle LlPrintOptionsDialogTitleA
       #define LlPrintOptionsDialogTitleO LlPrintOptionsDialogTitleW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintOptionsDialogTitleA
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCSTR               pszTitle,
	LPCSTR               pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintOptionsDialogTitleW
	(
	HLLJOB               hLlJob,
	HWND                 hWnd,
	LPCWSTR              pszTitle,
	LPCWSTR              pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlSetPrinterToDefault LlSetPrinterToDefaultW
       #define LlSetPrinterToDefaultO LlSetPrinterToDefaultA
     #else  // not UNICODE
       #define LlSetPrinterToDefault LlSetPrinterToDefaultA
       #define LlSetPrinterToDefaultO LlSetPrinterToDefaultW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetPrinterToDefaultA
	(
	HLLJOB               hLlJob,
	INT                  nObjType,
	LPCSTR               pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetPrinterToDefaultW
	(
	HLLJOB               hLlJob,
	INT                  nObjType,
	LPCWSTR              pszObjName
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlDefineSortOrderStart
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineSortOrder LlDefineSortOrderW
       #define LlDefineSortOrderO LlDefineSortOrderA
     #else  // not UNICODE
       #define LlDefineSortOrder LlDefineSortOrderA
       #define LlDefineSortOrderO LlDefineSortOrderW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineSortOrderA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszIdentifier,
	LPCSTR               pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineSortOrderW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszIdentifier,
	LPCWSTR              pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetSortOrder LlPrintGetSortOrderW
       #define LlPrintGetSortOrderO LlPrintGetSortOrderA
     #else  // not UNICODE
       #define LlPrintGetSortOrder LlPrintGetSortOrderA
       #define LlPrintGetSortOrderO LlPrintGetSortOrderW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetSortOrderA
	(
	HLLJOB               hLlJob,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetSortOrderW
	(
	HLLJOB               hLlJob,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineGrouping LlDefineGroupingW
       #define LlDefineGroupingO LlDefineGroupingA
     #else  // not UNICODE
       #define LlDefineGrouping LlDefineGroupingA
       #define LlDefineGroupingO LlDefineGroupingW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineGroupingA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszSortorder,
	LPCSTR               pszIdentifier,
	LPCSTR               pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineGroupingW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszSortorder,
	LPCWSTR              pszIdentifier,
	LPCWSTR              pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetGrouping LlPrintGetGroupingW
       #define LlPrintGetGroupingO LlPrintGetGroupingA
     #else  // not UNICODE
       #define LlPrintGetGrouping LlPrintGetGroupingA
       #define LlPrintGetGroupingO LlPrintGetGroupingW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetGroupingA
	(
	HLLJOB               hLlJob,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetGroupingW
	(
	HLLJOB               hLlJob,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlAddCtlSupport LlAddCtlSupportW
       #define LlAddCtlSupportO LlAddCtlSupportA
     #else  // not UNICODE
       #define LlAddCtlSupport LlAddCtlSupportA
       #define LlAddCtlSupportO LlAddCtlSupportW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlAddCtlSupportA
	(
	HWND                 hWnd,
	UINT                 nFlags,
	LPCSTR               pszInifile
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlAddCtlSupportW
	(
	HWND                 hWnd,
	UINT                 nFlags,
	LPCWSTR              pszInifile
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrintBeginGroup
	(
	HLLJOB               hLlJob,
	LPARAM               lParam,
	LPVOID               lpParam
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintEndGroup
	(
	HLLJOB               hLlJob,
	LPARAM               lParam,
	LPVOID               lpParam
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintGroupLine
	(
	HLLJOB               hLlJob,
	LPARAM               lParam,
	LPVOID               lpParam
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintGroupHeader
	(
	HLLJOB               hLlJob,
	LPARAM               lParam
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetFilterExpression LlPrintGetFilterExpressionW
       #define LlPrintGetFilterExpressionO LlPrintGetFilterExpressionA
     #else  // not UNICODE
       #define LlPrintGetFilterExpression LlPrintGetFilterExpressionA
       #define LlPrintGetFilterExpressionO LlPrintGetFilterExpressionW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetFilterExpressionA
	(
	HLLJOB               hLlJob,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetFilterExpressionW
	(
	HLLJOB               hLlJob,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrintWillMatchFilter
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintDidMatchFilter
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetFieldContents LlGetFieldContentsW
       #define LlGetFieldContentsO LlGetFieldContentsA
     #else  // not UNICODE
       #define LlGetFieldContents LlGetFieldContentsA
       #define LlGetFieldContentsO LlGetFieldContentsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetFieldContentsA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetFieldContentsW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetVariableContents LlGetVariableContentsW
       #define LlGetVariableContentsO LlGetVariableContentsA
     #else  // not UNICODE
       #define LlGetVariableContents LlGetVariableContentsA
       #define LlGetVariableContentsO LlGetVariableContentsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetVariableContentsA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetVariableContentsW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetSumVariableContents LlGetSumVariableContentsW
       #define LlGetSumVariableContentsO LlGetSumVariableContentsA
     #else  // not UNICODE
       #define LlGetSumVariableContents LlGetSumVariableContentsA
       #define LlGetSumVariableContentsO LlGetSumVariableContentsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetSumVariableContentsA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetSumVariableContentsW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetUserVariableContents LlGetUserVariableContentsW
       #define LlGetUserVariableContentsO LlGetUserVariableContentsA
     #else  // not UNICODE
       #define LlGetUserVariableContents LlGetUserVariableContentsA
       #define LlGetUserVariableContentsO LlGetUserVariableContentsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUserVariableContentsA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUserVariableContentsW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetVariableType LlGetVariableTypeW
       #define LlGetVariableTypeO LlGetVariableTypeA
     #else  // not UNICODE
       #define LlGetVariableType LlGetVariableTypeA
       #define LlGetVariableTypeO LlGetVariableTypeW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetVariableTypeA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetVariableTypeW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetFieldType LlGetFieldTypeW
       #define LlGetFieldTypeO LlGetFieldTypeA
     #else  // not UNICODE
       #define LlGetFieldType LlGetFieldTypeA
       #define LlGetFieldTypeO LlGetFieldTypeW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetFieldTypeA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetFieldTypeW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetColumnInfo LlPrintGetColumnInfoW
       #define LlPrintGetColumnInfoO LlPrintGetColumnInfoA
     #else  // not UNICODE
       #define LlPrintGetColumnInfo LlPrintGetColumnInfoA
       #define LlPrintGetColumnInfoO LlPrintGetColumnInfoW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetColumnInfoA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjectName,
	INT                  nCol,
	PSCLLCOLUMN          pCol
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetColumnInfoW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjectName,
	INT                  nCol,
	PSCLLCOLUMN          pCol
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlSetPrinterDefaultsDir LlSetPrinterDefaultsDirW
       #define LlSetPrinterDefaultsDirO LlSetPrinterDefaultsDirA
     #else  // not UNICODE
       #define LlSetPrinterDefaultsDir LlSetPrinterDefaultsDirA
       #define LlSetPrinterDefaultsDirO LlSetPrinterDefaultsDirW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetPrinterDefaultsDirA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszDir
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetPrinterDefaultsDirW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszDir
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlCreateSketch LlCreateSketchW
       #define LlCreateSketchO LlCreateSketchA
     #else  // not UNICODE
       #define LlCreateSketch LlCreateSketchA
       #define LlCreateSketchO LlCreateSketchW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlCreateSketchA
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCSTR               lpszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlCreateSketchW
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCWSTR              lpszObjName
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlViewerProhibitAction
	(
	HLLJOB               hLlJob,
	INT                  nMenuID
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintCopyPrinterConfiguration LlPrintCopyPrinterConfigurationW
       #define LlPrintCopyPrinterConfigurationO LlPrintCopyPrinterConfigurationA
     #else  // not UNICODE
       #define LlPrintCopyPrinterConfiguration LlPrintCopyPrinterConfigurationA
       #define LlPrintCopyPrinterConfigurationO LlPrintCopyPrinterConfigurationW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintCopyPrinterConfigurationA
	(
	HLLJOB               hLlJob,
	LPCSTR               lpszFilename,
	INT                  nFunction
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintCopyPrinterConfigurationW
	(
	HLLJOB               hLlJob,
	LPCWSTR              lpszFilename,
	INT                  nFunction
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlSetPrinterInPrinterFile LlSetPrinterInPrinterFileW
       #define LlSetPrinterInPrinterFileO LlSetPrinterInPrinterFileA
     #else  // not UNICODE
       #define LlSetPrinterInPrinterFile LlSetPrinterInPrinterFileA
       #define LlSetPrinterInPrinterFileO LlSetPrinterInPrinterFileW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetPrinterInPrinterFileA
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCSTR               pszObjName,
	INT                  nPrinterIndex,
	LPCSTR               pszPrinter,
	_PCDEVMODEA          pDevMode
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetPrinterInPrinterFileW
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCWSTR              pszObjName,
	INT                  nPrinterIndex,
	LPCWSTR              pszPrinter,
	_PCDEVMODEW          pDevMode
	);
#endif // WIN32

CMBT_LL_WINAPI HLLRTFOBJ DLLPROC  LlRTFCreateObject
	(
	HLLJOB               hLlJob
	);

CMBT_LL_WINAPI INT      DLLPROC  LlRTFDeleteObject
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlRTFSetText LlRTFSetTextW
       #define LlRTFSetTextO LlRTFSetTextA
     #else  // not UNICODE
       #define LlRTFSetText LlRTFSetTextA
       #define LlRTFSetTextO LlRTFSetTextW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRTFSetTextA
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	LPCSTR               pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRTFSetTextW
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	LPCWSTR              pszText
	);
#endif // WIN32

CMBT_LL_WINAPI UINT     DLLPROC  LlRTFGetTextLength
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	INT                  nFlags
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlRTFGetText LlRTFGetTextW
       #define LlRTFGetTextO LlRTFGetTextA
     #else  // not UNICODE
       #define LlRTFGetText LlRTFGetTextA
       #define LlRTFGetTextO LlRTFGetTextW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRTFGetTextA
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	INT                  nFlags,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRTFGetTextW
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	INT                  nFlags,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlRTFEditObject
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	HWND                 hWnd,
	HDC                  hPrnDC,
	INT                  nProjectType,
	BOOL                 bModal
	);

CMBT_LL_WINAPI INT      DLLPROC  LlRTFCopyToClipboard
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF
	);

CMBT_LL_WINAPI INT      DLLPROC  LlRTFDisplay
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	HDC                  hDC,
	_PRECT               pRC,
	BOOL                 bRestart,
	LLPUINT              pnState
	);

CMBT_LL_WINAPI INT      DLLPROC  LlRTFEditorProhibitAction
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	INT                  nControlID
	);

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRTFEditorInvokeAction
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	INT                  nControlID
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDebugOutput LlDebugOutputW
       #define LlDebugOutputO LlDebugOutputA
     #else  // not UNICODE
       #define LlDebugOutput LlDebugOutputA
       #define LlDebugOutputO LlDebugOutputW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlDebugOutputA
	(
	INT                  nIndent,
	LPCSTR               pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlDebugOutputW
	(
	INT                  nIndent,
	LPCWSTR              pszText
	);
#endif // WIN32

CMBT_LL_WINAPI HLISTPOS DLLPROC  LlEnumGetFirstVar
	(
	HLLJOB               hLlJob,
	UINT                 nFlags
	);

CMBT_LL_WINAPI HLISTPOS DLLPROC  LlEnumGetFirstField
	(
	HLLJOB               hLlJob,
	UINT                 nFlags
	);

CMBT_LL_WINAPI HLISTPOS DLLPROC  LlEnumGetFirstConstant
	(
	HLLJOB               hLlJob,
	UINT                 nFlags
	);

CMBT_LL_WINAPI HLISTPOS DLLPROC  LlEnumGetNextEntry
	(
	HLLJOB               hLlJob,
	HLISTPOS             nPos,
	UINT                 nFlags
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlEnumGetEntry LlEnumGetEntryW
       #define LlEnumGetEntryO LlEnumGetEntryA
     #else  // not UNICODE
       #define LlEnumGetEntry LlEnumGetEntryA
       #define LlEnumGetEntryO LlEnumGetEntryW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlEnumGetEntryA
	(
	HLLJOB               hLlJob,
	HLISTPOS             nPos,
	LPSTR                pszNameBuf,
	UINT                 nNameBufSize,
	LPSTR                pszContBuf,
	UINT                 nContBufSize,
	_LPHANDLE            pHandle,
	_LPINT               pType
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlEnumGetEntryW
	(
	HLLJOB               hLlJob,
	HLISTPOS             nPos,
	LPWSTR               pszNameBuf,
	UINT                 nNameBufSize,
	LPWSTR               pszContBuf,
	UINT                 nContBufSize,
	_LPHANDLE            pHandle,
	_LPINT               pType
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrintResetObjectStates
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlXSetParameter LlXSetParameterW
       #define LlXSetParameterO LlXSetParameterA
     #else  // not UNICODE
       #define LlXSetParameter LlXSetParameterA
       #define LlXSetParameterO LlXSetParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXSetParameterA
	(
	HLLJOB               hLlJob,
	INT                  nExtensionType,
	LPCSTR               pszExtensionName,
	LPCSTR               pszKey,
	LPCSTR               pszValue
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXSetParameterW
	(
	HLLJOB               hLlJob,
	INT                  nExtensionType,
	LPCWSTR              pszExtensionName,
	LPCWSTR              pszKey,
	LPCWSTR              pszValue
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlXGetParameter LlXGetParameterW
       #define LlXGetParameterO LlXGetParameterA
     #else  // not UNICODE
       #define LlXGetParameter LlXGetParameterA
       #define LlXGetParameterO LlXGetParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXGetParameterA
	(
	HLLJOB               hLlJob,
	INT                  nExtensionType,
	LPCSTR               pszExtensionName,
	LPCSTR               pszKey,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXGetParameterW
	(
	HLLJOB               hLlJob,
	INT                  nExtensionType,
	LPCWSTR              pszExtensionName,
	LPCWSTR              pszKey,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrintResetProjectState
	(
	HLLJOB               hJob
	);

CMBT_LL_WINAPI void     DLLPROC  LlDefineChartFieldStart
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineChartFieldExt LlDefineChartFieldExtW
       #define LlDefineChartFieldExtO LlDefineChartFieldExtA
     #else  // not UNICODE
       #define LlDefineChartFieldExt LlDefineChartFieldExtA
       #define LlDefineChartFieldExtO LlDefineChartFieldExtW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineChartFieldExtA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszVarName,
	LPCSTR               pszContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineChartFieldExtW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszVarName,
	LPCWSTR              pszContents,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlPrintDeclareChartRow
	(
	HLLJOB               hLlJob,
	UINT                 nFlags
	);

CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetChartObjectCount
	(
	HLLJOB               hLlJob,
	UINT                 nType
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintIsChartFieldUsed LlPrintIsChartFieldUsedW
       #define LlPrintIsChartFieldUsedO LlPrintIsChartFieldUsedA
     #else  // not UNICODE
       #define LlPrintIsChartFieldUsed LlPrintIsChartFieldUsedA
       #define LlPrintIsChartFieldUsedO LlPrintIsChartFieldUsedW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintIsChartFieldUsedA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszFieldName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintIsChartFieldUsedW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszFieldName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetChartFieldContents LlGetChartFieldContentsW
       #define LlGetChartFieldContentsO LlGetChartFieldContentsA
     #else  // not UNICODE
       #define LlGetChartFieldContents LlGetChartFieldContentsA
       #define LlGetChartFieldContentsO LlGetChartFieldContentsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetChartFieldContentsA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetChartFieldContentsW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI HLISTPOS DLLPROC  LlEnumGetFirstChartField
	(
	HLLJOB               hLlJob,
	UINT                 nFlags
	);

CMBT_LL_WINAPI FARPROC  DLLPROC  LlSetNotificationCallbackExt
	(
	HLLJOB               hLlJob,
	INT                  nEvent,
	FARPROC              lpfnNotify
	);

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprEvaluateVar
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	PVARIANT             pVar,
	UINT                 nFlags
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlExprTypeVar
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetPrinterFromPrinterFile LlGetPrinterFromPrinterFileW
       #define LlGetPrinterFromPrinterFileO LlGetPrinterFromPrinterFileA
     #else  // not UNICODE
       #define LlGetPrinterFromPrinterFile LlGetPrinterFromPrinterFileA
       #define LlGetPrinterFromPrinterFileO LlGetPrinterFromPrinterFileW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetPrinterFromPrinterFileA
	(
	HLLJOB               hJob,
	UINT                 nObjType,
	LPCSTR               pszObjectName,
	INT                  nPrinter,
	LPSTR                pszPrinter,
	LLPUINT              pnPrinterBufSize,
	_PDEVMODEA           pDevMode,
	LLPUINT              pnDevModeBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetPrinterFromPrinterFileW
	(
	HLLJOB               hJob,
	UINT                 nObjType,
	LPCWSTR              pszObjectName,
	INT                  nPrinter,
	LPWSTR               pszPrinter,
	LLPUINT              pnPrinterBufSize,
	_PDEVMODEW           pDevMode,
	LLPUINT              pnDevModeBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetRemainingSpacePerTable LlPrintGetRemainingSpacePerTableW
       #define LlPrintGetRemainingSpacePerTableO LlPrintGetRemainingSpacePerTableA
     #else  // not UNICODE
       #define LlPrintGetRemainingSpacePerTable LlPrintGetRemainingSpacePerTableA
       #define LlPrintGetRemainingSpacePerTableO LlPrintGetRemainingSpacePerTableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetRemainingSpacePerTableA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszField,
	INT                  nDimension
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetRemainingSpacePerTableW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszField,
	INT                  nDimension
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlDrawToolbarBackground
	(
	HDC                  hDC,
	_PRECT               pRC,
	BOOL                 bHorz,
	INT                  nTBMode
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlSetDefaultProjectParameter LlSetDefaultProjectParameterW
       #define LlSetDefaultProjectParameterO LlSetDefaultProjectParameterA
     #else  // not UNICODE
       #define LlSetDefaultProjectParameter LlSetDefaultProjectParameterA
       #define LlSetDefaultProjectParameterO LlSetDefaultProjectParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetDefaultProjectParameterA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszParameter,
	LPCSTR               pszValue,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSetDefaultProjectParameterW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszParameter,
	LPCWSTR              pszValue,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetDefaultProjectParameter LlGetDefaultProjectParameterW
       #define LlGetDefaultProjectParameterO LlGetDefaultProjectParameterA
     #else  // not UNICODE
       #define LlGetDefaultProjectParameter LlGetDefaultProjectParameterA
       #define LlGetDefaultProjectParameterO LlGetDefaultProjectParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetDefaultProjectParameterA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszParameter,
	LPSTR                pszBuffer,
	INT                  nBufSize,
	_LPUINT              pnFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetDefaultProjectParameterW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszParameter,
	LPWSTR               pszBuffer,
	INT                  nBufSize,
	_LPUINT              pnFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintSetProjectParameter LlPrintSetProjectParameterW
       #define LlPrintSetProjectParameterO LlPrintSetProjectParameterA
     #else  // not UNICODE
       #define LlPrintSetProjectParameter LlPrintSetProjectParameterA
       #define LlPrintSetProjectParameterO LlPrintSetProjectParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintSetProjectParameterA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszParameter,
	LPCSTR               pszValue,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintSetProjectParameterW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszParameter,
	LPCWSTR              pszValue,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintGetProjectParameter LlPrintGetProjectParameterW
       #define LlPrintGetProjectParameterO LlPrintGetProjectParameterA
     #else  // not UNICODE
       #define LlPrintGetProjectParameter LlPrintGetProjectParameterA
       #define LlPrintGetProjectParameterO LlPrintGetProjectParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetProjectParameterA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszParameter,
	BOOL                 bEvaluated,
	LPSTR                pszBuffer,
	INT                  nBufSize,
	_LPUINT              pnFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintGetProjectParameterW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszParameter,
	BOOL                 bEvaluated,
	LPWSTR               pszBuffer,
	INT                  nBufSize,
	_LPUINT              pnFlags
	);
#endif // WIN32

CMBT_LL_WINAPI BOOL     DLLPROC  LlCreateObject
	(
	CTL_PGUID            pIID,
	PPIUNKNOWN           ppI
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprContainsVariable LlExprContainsVariableW
       #define LlExprContainsVariableO LlExprContainsVariableA
     #else  // not UNICODE
       #define LlExprContainsVariable LlExprContainsVariableA
       #define LlExprContainsVariableO LlExprContainsVariableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprContainsVariableA
	(
	HLLJOB               hLlJob,
	HLLEXPR              hExpr,
	LPCSTR               pszVariable
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprContainsVariableW
	(
	HLLJOB               hLlJob,
	HLLEXPR              hExpr,
	LPCWSTR              pszVariable
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprIsConstant
	(
	HLLJOB               hLlJob,
	HLLEXPR              hExpr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlLocSystemTimeFromLocaleString LlLocSystemTimeFromLocaleStringW
       #define LlLocSystemTimeFromLocaleStringO LlLocSystemTimeFromLocaleStringA
     #else  // not UNICODE
       #define LlLocSystemTimeFromLocaleString LlLocSystemTimeFromLocaleStringA
       #define LlLocSystemTimeFromLocaleStringO LlLocSystemTimeFromLocaleStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocSystemTimeFromLocaleStringA
	(
	_LCID                nLCID,
	LPCSTR               pszDateTime,
	_PSYSTEMTIME         pST,
	UINT                 bAddCentury
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocSystemTimeFromLocaleStringW
	(
	_LCID                nLCID,
	LPCWSTR              pszDateTime,
	_PSYSTEMTIME         pST,
	UINT                 bAddCentury
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlLocSystemTimeToLocaleString LlLocSystemTimeToLocaleStringW
       #define LlLocSystemTimeToLocaleStringO LlLocSystemTimeToLocaleStringA
     #else  // not UNICODE
       #define LlLocSystemTimeToLocaleString LlLocSystemTimeToLocaleStringA
       #define LlLocSystemTimeToLocaleStringO LlLocSystemTimeToLocaleStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocSystemTimeToLocaleStringA
	(
	_LCID                nLCID,
	_PCSYSTEMTIME        pST,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocSystemTimeToLocaleStringW
	(
	_LCID                nLCID,
	_PCSYSTEMTIME        pST,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlLocConvertCountryTo LlLocConvertCountryToW
       #define LlLocConvertCountryToO LlLocConvertCountryToA
     #else  // not UNICODE
       #define LlLocConvertCountryTo LlLocConvertCountryToA
       #define LlLocConvertCountryToO LlLocConvertCountryToW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocConvertCountryToA
	(
	HLLJOB               hJob,
	LPCSTR               pszCountryID,
	INT                  nIndex,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocConvertCountryToW
	(
	HLLJOB               hJob,
	LPCWSTR              pszCountryID,
	INT                  nIndex,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlProfileStart LlProfileStartW
       #define LlProfileStartO LlProfileStartA
     #else  // not UNICODE
       #define LlProfileStart LlProfileStartA
       #define LlProfileStartO LlProfileStartW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProfileStartA
	(
	HANDLE               hThread,
	LPCSTR               pszDescr,
	LPCSTR               pszFilename,
	INT                  nTicksMS
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProfileStartW
	(
	HANDLE               hThread,
	LPCWSTR              pszDescr,
	LPCWSTR              pszFilename,
	INT                  nTicksMS
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlProfileEnd
	(
	HANDLE               hThread
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlDumpMemory
	(
	BOOL                 bDumpAll
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbAddTable LlDbAddTableW
       #define LlDbAddTableO LlDbAddTableA
     #else  // not UNICODE
       #define LlDbAddTable LlDbAddTableA
       #define LlDbAddTableO LlDbAddTableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableA
	(
	HLLJOB               hJob,
	LPCSTR               pszTableID,
	LPCSTR               pszDisplayName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableW
	(
	HLLJOB               hJob,
	LPCWSTR              pszTableID,
	LPCWSTR              pszDisplayName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbAddTableRelation LlDbAddTableRelationW
       #define LlDbAddTableRelationO LlDbAddTableRelationA
     #else  // not UNICODE
       #define LlDbAddTableRelation LlDbAddTableRelationA
       #define LlDbAddTableRelationO LlDbAddTableRelationW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableRelationA
	(
	HLLJOB               hJob,
	LPCSTR               pszTableID,
	LPCSTR               pszParentTableID,
	LPCSTR               pszRelationID,
	LPCSTR               pszRelationDisplayName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableRelationW
	(
	HLLJOB               hJob,
	LPCWSTR              pszTableID,
	LPCWSTR              pszParentTableID,
	LPCWSTR              pszRelationID,
	LPCWSTR              pszRelationDisplayName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbAddTableSortOrder LlDbAddTableSortOrderW
       #define LlDbAddTableSortOrderO LlDbAddTableSortOrderA
     #else  // not UNICODE
       #define LlDbAddTableSortOrder LlDbAddTableSortOrderA
       #define LlDbAddTableSortOrderO LlDbAddTableSortOrderW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableSortOrderA
	(
	HLLJOB               hJob,
	LPCSTR               pszTableID,
	LPCSTR               pszSortOrderID,
	LPCSTR               pszSortOrderDisplayName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableSortOrderW
	(
	HLLJOB               hJob,
	LPCWSTR              pszTableID,
	LPCWSTR              pszSortOrderID,
	LPCWSTR              pszSortOrderDisplayName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintDbGetCurrentTable LlPrintDbGetCurrentTableW
       #define LlPrintDbGetCurrentTableO LlPrintDbGetCurrentTableA
     #else  // not UNICODE
       #define LlPrintDbGetCurrentTable LlPrintDbGetCurrentTableA
       #define LlPrintDbGetCurrentTableO LlPrintDbGetCurrentTableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetCurrentTableA
	(
	HLLJOB               hJob,
	LPSTR                pszTableID,
	UINT                 nTableIDLength,
	BOOL                 bCompletePath
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetCurrentTableW
	(
	HLLJOB               hJob,
	LPWSTR               pszTableID,
	UINT                 nTableIDLength,
	BOOL                 bCompletePath
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintDbGetCurrentTableRelation LlPrintDbGetCurrentTableRelationW
       #define LlPrintDbGetCurrentTableRelationO LlPrintDbGetCurrentTableRelationA
     #else  // not UNICODE
       #define LlPrintDbGetCurrentTableRelation LlPrintDbGetCurrentTableRelationA
       #define LlPrintDbGetCurrentTableRelationO LlPrintDbGetCurrentTableRelationW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetCurrentTableRelationA
	(
	HLLJOB               hJob,
	LPSTR                pszRelationID,
	UINT                 nRelationIDLength
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetCurrentTableRelationW
	(
	HLLJOB               hJob,
	LPWSTR               pszRelationID,
	UINT                 nRelationIDLength
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlPrintDbGetCurrentTableSortOrder LlPrintDbGetCurrentTableSortOrderW
       #define LlPrintDbGetCurrentTableSortOrderO LlPrintDbGetCurrentTableSortOrderA
     #else  // not UNICODE
       #define LlPrintDbGetCurrentTableSortOrder LlPrintDbGetCurrentTableSortOrderA
       #define LlPrintDbGetCurrentTableSortOrderO LlPrintDbGetCurrentTableSortOrderW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetCurrentTableSortOrderA
	(
	HLLJOB               hJob,
	LPSTR                pszSortOrderID,
	UINT                 nSortOrderIDLength
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetCurrentTableSortOrderW
	(
	HLLJOB               hJob,
	LPWSTR               pszSortOrderID,
	UINT                 nSortOrderIDLength
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbDumpStructure
	(
	HLLJOB               hJob
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetRootTableCount
	(
	HLLJOB               hJob
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbSetMasterTable LlDbSetMasterTableW
       #define LlDbSetMasterTableO LlDbSetMasterTableA
     #else  // not UNICODE
       #define LlDbSetMasterTable LlDbSetMasterTableA
       #define LlDbSetMasterTableO LlDbSetMasterTableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbSetMasterTableA
	(
	HLLJOB               hJob,
	LPCSTR               pszTableID
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbSetMasterTableW
	(
	HLLJOB               hJob,
	LPCWSTR              pszTableID
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbGetMasterTable LlDbGetMasterTableW
       #define LlDbGetMasterTableO LlDbGetMasterTableA
     #else  // not UNICODE
       #define LlDbGetMasterTable LlDbGetMasterTableA
       #define LlDbGetMasterTableO LlDbGetMasterTableW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbGetMasterTableA
	(
	HLLJOB               hJob,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbGetMasterTableW
	(
	HLLJOB               hJob,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlXSetExportParameter LlXSetExportParameterW
       #define LlXSetExportParameterO LlXSetExportParameterA
     #else  // not UNICODE
       #define LlXSetExportParameter LlXSetExportParameterA
       #define LlXSetExportParameterO LlXSetExportParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXSetExportParameterA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszExtensionName,
	LPCSTR               pszKey,
	LPCSTR               pszValue
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXSetExportParameterW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszExtensionName,
	LPCWSTR              pszKey,
	LPCWSTR              pszValue
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlXGetExportParameter LlXGetExportParameterW
       #define LlXGetExportParameterO LlXGetExportParameterA
     #else  // not UNICODE
       #define LlXGetExportParameter LlXGetExportParameterA
       #define LlXGetExportParameterO LlXGetExportParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXGetExportParameterA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszExtensionName,
	LPCSTR               pszKey,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXGetExportParameterW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszExtensionName,
	LPCWSTR              pszKey,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlXlatName LlXlatNameW
       #define LlXlatNameO LlXlatNameA
     #else  // not UNICODE
       #define LlXlatName LlXlatNameA
       #define LlXlatNameO LlXlatNameW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXlatNameA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlXlatNameW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineVariableVar LlDefineVariableVarW
       #define LlDefineVariableVarO LlDefineVariableVarA
     #else  // not UNICODE
       #define LlDefineVariableVar LlDefineVariableVarA
       #define LlDefineVariableVarO LlDefineVariableVarW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableVarA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	const PVARIANT       pValue,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineVariableVarW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	const PVARIANT       pValue,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineFieldVar LlDefineFieldVarW
       #define LlDefineFieldVarO LlDefineFieldVarA
     #else  // not UNICODE
       #define LlDefineFieldVar LlDefineFieldVarA
       #define LlDefineFieldVarO LlDefineFieldVarW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldVarA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	const PVARIANT       pValue,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineFieldVarW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	const PVARIANT       pValue,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDefineChartFieldVar LlDefineChartFieldVarW
       #define LlDefineChartFieldVarO LlDefineChartFieldVarA
     #else  // not UNICODE
       #define LlDefineChartFieldVar LlDefineChartFieldVarA
       #define LlDefineChartFieldVarO LlDefineChartFieldVarW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineChartFieldVarA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszName,
	const PVARIANT       pValue,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDefineChartFieldVarW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	const PVARIANT       pValue,
	INT                  lPara,
	LPVOID               lpPtr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDesignerProhibitEditingObject LlDesignerProhibitEditingObjectW
       #define LlDesignerProhibitEditingObjectO LlDesignerProhibitEditingObjectA
     #else  // not UNICODE
       #define LlDesignerProhibitEditingObject LlDesignerProhibitEditingObjectA
       #define LlDesignerProhibitEditingObjectO LlDesignerProhibitEditingObjectW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerProhibitEditingObjectA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObject
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerProhibitEditingObjectW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObject
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetUsedIdentifiers LlGetUsedIdentifiersW
       #define LlGetUsedIdentifiersO LlGetUsedIdentifiersA
     #else  // not UNICODE
       #define LlGetUsedIdentifiers LlGetUsedIdentifiersA
       #define LlGetUsedIdentifiersO LlGetUsedIdentifiersW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUsedIdentifiersA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszProjectName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUsedIdentifiersW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszProjectName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlInternalAttachApp
	(
	HLLJOB               hLlJob,
	HLLJOB               hLlJobToAttach
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlInternalDetachApp
	(
	HLLJOB               hLlJob,
	HLLJOB               hLlJobToDetach
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetUserSectionData LlGetUserSectionDataW
       #define LlGetUserSectionDataO LlGetUserSectionDataA
     #else  // not UNICODE
       #define LlGetUserSectionData LlGetUserSectionDataA
       #define LlGetUserSectionDataO LlGetUserSectionDataW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUserSectionDataA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszProjectName,
	PSCLLPROJECTUSERDATA pPUD
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUserSectionDataW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszProjectName,
	PSCLLPROJECTUSERDATA pPUD
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprUpdateCollectionForLlX
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprGetUsedVarsEx LlExprGetUsedVarsExW
       #define LlExprGetUsedVarsExO LlExprGetUsedVarsExA
     #else  // not UNICODE
       #define LlExprGetUsedVarsEx LlExprGetUsedVarsExA
       #define LlExprGetUsedVarsExO LlExprGetUsedVarsExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedVarsExA
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPSTR                pszBuffer,
	UINT                 nBufSize,
	BOOL                 OrgName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedVarsExW
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPWSTR               pszBuffer,
	UINT                 nBufSize,
	BOOL                 OrgName
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetProject
	(
	HLLJOB               hLlJob,
	PHLLDOMOBJ           phDOMObj
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDomGetProperty LlDomGetPropertyW
       #define LlDomGetPropertyO LlDomGetPropertyA
     #else  // not UNICODE
       #define LlDomGetProperty LlDomGetPropertyA
       #define LlDomGetPropertyO LlDomGetPropertyW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetPropertyA
	(
	HLLDOMOBJ            hDOMObj,
	LPCSTR               pszName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetPropertyW
	(
	HLLDOMOBJ            hDOMObj,
	LPCWSTR              pszName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDomSetProperty LlDomSetPropertyW
       #define LlDomSetPropertyO LlDomSetPropertyA
     #else  // not UNICODE
       #define LlDomSetProperty LlDomSetPropertyA
       #define LlDomSetPropertyO LlDomSetPropertyW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomSetPropertyA
	(
	HLLDOMOBJ            hDOMObj,
	LPCSTR               pszName,
	LPCSTR               pszValue
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomSetPropertyW
	(
	HLLDOMOBJ            hDOMObj,
	LPCWSTR              pszName,
	LPCWSTR              pszValue
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDomGetObject LlDomGetObjectW
       #define LlDomGetObjectO LlDomGetObjectA
     #else  // not UNICODE
       #define LlDomGetObject LlDomGetObjectA
       #define LlDomGetObjectO LlDomGetObjectW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetObjectA
	(
	HLLDOMOBJ            hDOMObj,
	LPCSTR               pszName,
	PHLLDOMOBJ           phDOMSubObj
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetObjectW
	(
	HLLDOMOBJ            hDOMObj,
	LPCWSTR              pszName,
	PHLLDOMOBJ           phDOMSubObj
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetSubobjectCount
	(
	HLLDOMOBJ            hDOMObj,
	_LPINTJAVADUMMY      pnCount
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetSubobject
	(
	HLLDOMOBJ            hDOMObj,
	INT                  nPosition,
	PHLLDOMOBJ           phDOMSubObj
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDomCreateSubobject LlDomCreateSubobjectW
       #define LlDomCreateSubobjectO LlDomCreateSubobjectA
     #else  // not UNICODE
       #define LlDomCreateSubobject LlDomCreateSubobjectA
       #define LlDomCreateSubobjectO LlDomCreateSubobjectW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomCreateSubobjectA
	(
	HLLDOMOBJ            hDOMObj,
	INT                  nPosition,
	LPCSTR               pszType,
	PHLLDOMOBJ           phDOMSubObj
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomCreateSubobjectW
	(
	HLLDOMOBJ            hDOMObj,
	INT                  nPosition,
	LPCWSTR              pszType,
	PHLLDOMOBJ           phDOMSubObj
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomDeleteSubobject
	(
	HLLDOMOBJ            hDOMObj,
	INT                  nPosition
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomMoveSubobject
	(
	HLLDOMOBJ            hDOMObj,
	INT                  nPosition,
	INT                  nDelta
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlProjectOpen LlProjectOpenW
       #define LlProjectOpenO LlProjectOpenA
     #else  // not UNICODE
       #define LlProjectOpen LlProjectOpenA
       #define LlProjectOpenO LlProjectOpenW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectOpenA
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCSTR               pszObjName,
	UINT                 nOpenMode
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectOpenW
	(
	HLLJOB               hLlJob,
	UINT                 nObjType,
	LPCWSTR              pszObjName,
	UINT                 nOpenMode
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlProjectSave LlProjectSaveW
       #define LlProjectSaveO LlProjectSaveA
     #else  // not UNICODE
       #define LlProjectSave LlProjectSaveA
       #define LlProjectSaveO LlProjectSaveW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectSaveA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectSaveW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlProjectSaveCopyAs LlProjectSaveCopyAsW
       #define LlProjectSaveCopyAsO LlProjectSaveCopyAsA
     #else  // not UNICODE
       #define LlProjectSaveCopyAs LlProjectSaveCopyAsA
       #define LlProjectSaveCopyAsO LlProjectSaveCopyAsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectSaveCopyAsA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszObjName
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectSaveCopyAsW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszObjName
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectClose
	(
	HLLJOB               hLlJob
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetPropertyCount
	(
	HLLDOMOBJ            hDOMObj,
	_LPINTJAVADUMMY      pnCount
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetPropertyBSTR
	(
	HLLDOMOBJ            hDOMObj,
	LPCWSTR              pszName,
	_PBSTR               pbsValue
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlAssociatePreviewControl
	(
	HLLJOB               hLlJob,
	HWND                 hWndControl,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetErrortext LlGetErrortextW
       #define LlGetErrortextO LlGetErrortextA
     #else  // not UNICODE
       #define LlGetErrortext LlGetErrortextA
       #define LlGetErrortextO LlGetErrortextW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetErrortextA
	(
	INT                  nError,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetErrortextW
	(
	INT                  nError,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI HRESULT  DLLPROC  LlXOBStatJobOpen
	(
	HLLJOB               hJob,
	PPILlXOBStatJob      pStatJob
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlSetPreviewOption
	(
	HLLJOB               hLlJob,
	INT                  nOption,
	UINT                 nValue
	);

CMBT_LL_WINAPI INT      DLLPROC  LlGetPreviewOption
	(
	HLLJOB               hLlJob,
	INT                  nOption,
	_LPUINT              pnValue
	);

CMBT_LL_WINAPI INT      DLLPROC  LlDesignerInvokeAction
	(
	HLLJOB               hLlJob,
	INT                  nMenuID
	);

CMBT_LL_WINAPI INT      DLLPROC  LlDesignerRefreshWorkspace
	(
	HLLJOB               hLlJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDesignerFileOpen LlDesignerFileOpenW
       #define LlDesignerFileOpenO LlDesignerFileOpenA
     #else  // not UNICODE
       #define LlDesignerFileOpen LlDesignerFileOpenA
       #define LlDesignerFileOpenO LlDesignerFileOpenW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerFileOpenA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszFilename,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerFileOpenW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszFilename,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDesignerFileSave LlDesignerFileSaveW
       #define LlDesignerFileSaveO LlDesignerFileSaveA
     #else  // not UNICODE
       #define LlDesignerFileSave LlDesignerFileSaveA
       #define LlDesignerFileSaveO LlDesignerFileSaveW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerFileSaveA
	(
	HLLJOB               hLlJob,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerFileSaveW
	(
	HLLJOB               hLlJob,
	UINT                 nFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDesignerAddAction LlDesignerAddActionW
       #define LlDesignerAddActionO LlDesignerAddActionA
     #else  // not UNICODE
       #define LlDesignerAddAction LlDesignerAddActionA
       #define LlDesignerAddActionO LlDesignerAddActionW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerAddActionA
	(
	HLLJOB               hLlJob,
	UINT                 nID,
	UINT                 nFlags,
	LPCSTR               pszMenuText,
	LPCSTR               pszMenuHierarchy,
	LPCSTR               pszTooltipText,
	UINT                 nIcon,
	LPVOID               pvReserved
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerAddActionW
	(
	HLLJOB               hLlJob,
	UINT                 nID,
	UINT                 nFlags,
	LPCWSTR              pszMenuText,
	LPCWSTR              pszMenuHierarchy,
	LPCWSTR              pszTooltipText,
	UINT                 nIcon,
	LPVOID               pvReserved
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDesignerGetOptionString LlDesignerGetOptionStringW
       #define LlDesignerGetOptionStringO LlDesignerGetOptionStringA
     #else  // not UNICODE
       #define LlDesignerGetOptionString LlDesignerGetOptionStringA
       #define LlDesignerGetOptionStringO LlDesignerGetOptionStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerGetOptionStringA
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerGetOptionStringW
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDesignerSetOptionString LlDesignerSetOptionStringW
       #define LlDesignerSetOptionStringO LlDesignerSetOptionStringA
     #else  // not UNICODE
       #define LlDesignerSetOptionString LlDesignerSetOptionStringA
       #define LlDesignerSetOptionStringO LlDesignerSetOptionStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerSetOptionStringA
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPCSTR               pszBuffer
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerSetOptionStringW
	(
	HLLJOB               hLlJob,
	INT                  nIndex,
	LPCWSTR              pszBuffer
	);
#endif // WIN32

CMBT_LL_WINAPI HLLJOB   DLLPROC  LlJobOpenCopy
	(
	HLLJOB               hJob
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetProjectParameter LlGetProjectParameterW
       #define LlGetProjectParameterO LlGetProjectParameterA
     #else  // not UNICODE
       #define LlGetProjectParameter LlGetProjectParameterA
       #define LlGetProjectParameterO LlGetProjectParameterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetProjectParameterA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszProjectName,
	LPCSTR               pszParameter,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetProjectParameterW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszProjectName,
	LPCWSTR              pszParameter,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlConvertBLOBToString LlConvertBLOBToStringW
       #define LlConvertBLOBToStringO LlConvertBLOBToStringA
     #else  // not UNICODE
       #define LlConvertBLOBToString LlConvertBLOBToStringA
       #define LlConvertBLOBToStringO LlConvertBLOBToStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertBLOBToStringA
	(
	_PCUINT8             pBytes,
	UINT                 nBytes,
	LPSTR                pszBuffer,
	UINT                 nBufSize,
	BOOL                 bWithCompression
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertBLOBToStringW
	(
	_PCUINT8             pBytes,
	UINT                 nBytes,
	LPWSTR               pszBuffer,
	UINT                 nBufSize,
	BOOL                 bWithCompression
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertBLOBToBSTR
	(
	_PCUINT8             pBytes,
	UINT                 nBytes,
	_PBSTR               pbsResult,
	BOOL                 bWithCompression
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlConvertStringToBLOB LlConvertStringToBLOBW
       #define LlConvertStringToBLOBO LlConvertStringToBLOBA
     #else  // not UNICODE
       #define LlConvertStringToBLOB LlConvertStringToBLOBA
       #define LlConvertStringToBLOBO LlConvertStringToBLOBW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStringToBLOBA
	(
	LPCSTR               pszText,
	_PUINT8              pBytes,
	UINT                 nBytes
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStringToBLOBW
	(
	LPCWSTR              pszText,
	_PUINT8              pBytes,
	UINT                 nBytes
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlConvertStreamToString LlConvertStreamToStringW
       #define LlConvertStreamToStringO LlConvertStreamToStringA
     #else  // not UNICODE
       #define LlConvertStreamToString LlConvertStreamToStringA
       #define LlConvertStreamToStringO LlConvertStreamToStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStreamToStringA
	(
	_PISTREAM            pStream,
	LPSTR                pszBuffer,
	UINT                 nBufSize,
	BOOL                 bWithCompression
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStreamToStringW
	(
	_PISTREAM            pStream,
	LPWSTR               pszBuffer,
	UINT                 nBufSize,
	BOOL                 bWithCompression
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStreamToBSTR
	(
	_PISTREAM            pStream,
	_PBSTR               pbsResult,
	BOOL                 bWithCompression
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlConvertStringToStream LlConvertStringToStreamW
       #define LlConvertStringToStreamO LlConvertStringToStreamA
     #else  // not UNICODE
       #define LlConvertStringToStream LlConvertStringToStreamA
       #define LlConvertStringToStreamO LlConvertStringToStreamW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStringToStreamA
	(
	LPCSTR               pszText,
	_PISTREAM            pStream
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStringToStreamW
	(
	LPCWSTR              pszText,
	_PISTREAM            pStream
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlConvertHGLOBALToString LlConvertHGLOBALToStringW
       #define LlConvertHGLOBALToStringO LlConvertHGLOBALToStringA
     #else  // not UNICODE
       #define LlConvertHGLOBALToString LlConvertHGLOBALToStringA
       #define LlConvertHGLOBALToStringO LlConvertHGLOBALToStringW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertHGLOBALToStringA
	(
	HGLOBAL              hMemory,
	LPSTR                pszBuffer,
	UINT                 nBufSize,
	BOOL                 bWithCompression
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertHGLOBALToStringW
	(
	HGLOBAL              hMemory,
	LPWSTR               pszBuffer,
	UINT                 nBufSize,
	BOOL                 bWithCompression
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertHGLOBALToBSTR
	(
	HGLOBAL              hMemory,
	_PBSTR               pbsResult,
	BOOL                 bWithCompression
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlConvertStringToHGLOBAL LlConvertStringToHGLOBALW
       #define LlConvertStringToHGLOBALO LlConvertStringToHGLOBALA
     #else  // not UNICODE
       #define LlConvertStringToHGLOBAL LlConvertStringToHGLOBALA
       #define LlConvertStringToHGLOBALO LlConvertStringToHGLOBALW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStringToHGLOBALA
	(
	LPCSTR               pszText,
	PHGLOBAL             phMemory
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlConvertStringToHGLOBALW
	(
	LPCWSTR              pszText,
	PHGLOBAL             phMemory
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlAztecEncode
	(
	LPVOID               inPtr,
	LPVOID               outPtr,
	INT                  fill
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbAddTableRelationEx LlDbAddTableRelationExW
       #define LlDbAddTableRelationExO LlDbAddTableRelationExA
     #else  // not UNICODE
       #define LlDbAddTableRelationEx LlDbAddTableRelationExA
       #define LlDbAddTableRelationExO LlDbAddTableRelationExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableRelationExA
	(
	HLLJOB               hJob,
	LPCSTR               pszTableID,
	LPCSTR               pszParentTableID,
	LPCSTR               pszRelationID,
	LPCSTR               pszRelationDisplayName,
	LPCSTR               pszKeyField,
	LPCSTR               pszParentKeyField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableRelationExW
	(
	HLLJOB               hJob,
	LPCWSTR              pszTableID,
	LPCWSTR              pszParentTableID,
	LPCWSTR              pszRelationID,
	LPCWSTR              pszRelationDisplayName,
	LPCWSTR              pszKeyField,
	LPCWSTR              pszParentKeyField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbAddTableSortOrderEx LlDbAddTableSortOrderExW
       #define LlDbAddTableSortOrderExO LlDbAddTableSortOrderExA
     #else  // not UNICODE
       #define LlDbAddTableSortOrderEx LlDbAddTableSortOrderExA
       #define LlDbAddTableSortOrderExO LlDbAddTableSortOrderExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableSortOrderExA
	(
	HLLJOB               hJob,
	LPCSTR               pszTableID,
	LPCSTR               pszSortOrderID,
	LPCSTR               pszSortOrderDisplayName,
	LPCSTR               pszField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableSortOrderExW
	(
	HLLJOB               hJob,
	LPCWSTR              pszTableID,
	LPCWSTR              pszSortOrderID,
	LPCWSTR              pszSortOrderDisplayName,
	LPCWSTR              pszField
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetUsedIdentifiersEx LlGetUsedIdentifiersExW
       #define LlGetUsedIdentifiersExO LlGetUsedIdentifiersExA
     #else  // not UNICODE
       #define LlGetUsedIdentifiersEx LlGetUsedIdentifiersExA
       #define LlGetUsedIdentifiersExO LlGetUsedIdentifiersExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUsedIdentifiersExA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszProjectName,
	UINT                 nIdentifierTypes,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUsedIdentifiersExW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszProjectName,
	UINT                 nIdentifierTypes,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetTempFileName LlGetTempFileNameW
       #define LlGetTempFileNameO LlGetTempFileNameA
     #else  // not UNICODE
       #define LlGetTempFileName LlGetTempFileNameA
       #define LlGetTempFileNameO LlGetTempFileNameW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetTempFileNameA
	(
	LPCSTR               pszPrefix,
	LPCSTR               pszExt,
	LPSTR                pszBuffer,
	UINT                 nBufSize,
	UINT                 nOptions
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetTempFileNameW
	(
	LPCWSTR              pszPrefix,
	LPCWSTR              pszExt,
	LPWSTR               pszBuffer,
	UINT                 nBufSize,
	UINT                 nOptions
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI UINT     DLLPROC  LlGetDebug
	(
	void
	);
#endif // WIN32

CMBT_LL_WINAPI HWND     DLLPROC  LlRTFEditorGetRTFControlHandle
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetDefaultPrinter LlGetDefaultPrinterW
       #define LlGetDefaultPrinterO LlGetDefaultPrinterA
     #else  // not UNICODE
       #define LlGetDefaultPrinter LlGetDefaultPrinterA
       #define LlGetDefaultPrinterO LlGetDefaultPrinterW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetDefaultPrinterA
	(
	LPSTR                pszPrinter,
	LLPUINT              pnPrinterBufSize,
	_PDEVMODEA           pDevMode,
	LLPUINT              pnDevModeBufSize,
	UINT                 nOptions
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetDefaultPrinterW
	(
	LPWSTR               pszPrinter,
	LLPUINT              pnPrinterBufSize,
	_PDEVMODEW           pDevMode,
	LLPUINT              pnDevModeBufSize,
	UINT                 nOptions
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlLocAddDictionaryEntry LlLocAddDictionaryEntryW
       #define LlLocAddDictionaryEntryO LlLocAddDictionaryEntryA
     #else  // not UNICODE
       #define LlLocAddDictionaryEntry LlLocAddDictionaryEntryA
       #define LlLocAddDictionaryEntryO LlLocAddDictionaryEntryW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocAddDictionaryEntryA
	(
	HLLJOB               hLlJob,
	_LCID                nLCID,
	LPCSTR               pszKey,
	LPCSTR               pszValue,
	UINT                 nType
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocAddDictionaryEntryW
	(
	HLLJOB               hLlJob,
	_LCID                nLCID,
	LPCWSTR              pszKey,
	LPCWSTR              pszValue,
	UINT                 nType
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlLocAddDesignLCID
	(
	HLLJOB               hLlJob,
	_LCID                nLCID
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI UINT     DLLPROC  LlIsUILanguageAvailable
	(
	INT                  nLanguage,
	UINT                 nTypesToLookFor
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI UINT     DLLPROC  LlIsUILanguageAvailableLCID
	(
	_LCID                nLCID,
	UINT                 nTypesToLookFor
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlDbAddTableEx LlDbAddTableExW
       #define LlDbAddTableExO LlDbAddTableExA
     #else  // not UNICODE
       #define LlDbAddTableEx LlDbAddTableExA
       #define LlDbAddTableExO LlDbAddTableExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableExA
	(
	HLLJOB               hJob,
	LPCSTR               pszTableID,
	LPCSTR               pszDisplayName,
	UINT                 nOptions
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDbAddTableExW
	(
	HLLJOB               hJob,
	LPCWSTR              pszTableID,
	LPCWSTR              pszDisplayName,
	UINT                 nOptions
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlRTFEditorSetEventSink
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	PIUNKNOWN            pUnkEventSink
	);

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlRTFSetTextEx LlRTFSetTextExW
       #define LlRTFSetTextExO LlRTFSetTextExA
     #else  // not UNICODE
       #define LlRTFSetTextEx LlRTFSetTextExA
       #define LlRTFSetTextExO LlRTFSetTextExW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRTFSetTextExA
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	UINT                 nFlags,
	LPCSTR               pszText
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRTFSetTextExW
	(
	HLLJOB               hLlJob,
	HLLRTFOBJ            hRTF,
	UINT                 nFlags,
	LPCWSTR              pszText
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlInplaceDesignerInteraction
	(
	HLLJOB               hLlJob,
	UINT                 nAction,
	WPARAM               wParam,
	LPARAM               lParam
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsExtractResourcefiles
	(
	LPCWSTR              pszREType,
	LPCWSTR              pszPath,
	_PBSTR               pbsFileList
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsAddResourcefilesHGLOBAL
	(
	LPCWSTR              pszName,
	HGLOBAL              hData,
	BOOL                 bPacked
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsAddResourcefilesStream
	(
	LPCWSTR              pszName,
	_PISTREAM            hData,
	BOOL                 bPacked
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsGetResourceString
	(
	HLLJOB               hLlJob,
	INT                  nResourceID,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlGDILockEnter
	(
	void
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlGDILockLeave
	(
	void
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlJobStateSave
	(
	HLLJOB               hLlJob,
	_PISTREAM            pStream,
	UINT                 nFlags,
	BOOL                 bPacked
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlJobStateRestore
	(
	HLLJOB               hLlJob,
	_PISTREAM            pStream,
	UINT                 nFlags
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsStreamFromFile
	(
	LPCWSTR              pszFilename,
	_PPISTREAM           ppStream,
	BOOL                 bReadOnly
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlGetProjectDescription LlGetProjectDescriptionW
       #define LlGetProjectDescriptionO LlGetProjectDescriptionA
     #else  // not UNICODE
       #define LlGetProjectDescription LlGetProjectDescriptionA
       #define LlGetProjectDescriptionO LlGetProjectDescriptionW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetProjectDescriptionA
	(
	HLLJOB               hLlJob,
	LPCSTR               pszProjectName,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetProjectDescriptionW
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszProjectName,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlPrintDbGetCurrentTableFilter
	(
	HLLJOB               hJob,
	PVARIANT             pvFilter,
	PVARIANT             pvParams
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprTranslateToHostExpression LlExprTranslateToHostExpressionW
       #define LlExprTranslateToHostExpressionO LlExprTranslateToHostExpressionA
     #else  // not UNICODE
       #define LlExprTranslateToHostExpression LlExprTranslateToHostExpressionA
       #define LlExprTranslateToHostExpressionO LlExprTranslateToHostExpressionW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprTranslateToHostExpressionA
	(
	HLLJOB               hJob,
	HLLEXPR              hExpr,
	PVARIANT             pvFilter,
	PVARIANT             pvParams,
	LPCSTR               pszCurrentTableName,
	_LPUINT              pnFlags
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprTranslateToHostExpressionW
	(
	HLLJOB               hJob,
	HLLEXPR              hExpr,
	PVARIANT             pvFilter,
	PVARIANT             pvParams,
	LPCWSTR              pszCurrentTableName,
	_LPUINT              pnFlags
	);
#endif // WIN32

CMBT_LL_WINAPI HLLTESTJOB DLLPROC  LlStgTestJobCreate
	(
	LPCWSTR              pwszStg1,
	LPCWSTR              pwszStg1Title,
	LPCWSTR              pwszStg2,
	LPCWSTR              pwszStg2Title,
	UINT                 nFlags,
	PVARIANT             pvErrors,
	PVARIANT             pvStorage,
	_PBOOL               p
	);

CMBT_LL_WINAPI INT      DLLPROC  LlStgTestJobCmpPage
	(
	HLLTESTJOB           hJob,
	UINT                 nPage,
	UINT                 nFlags,
	PVARIANT             pvErrors,
	PVARIANT             pvStorage
	);

CMBT_LL_WINAPI INT      DLLPROC  LlStgTestJobDestroy
	(
	HLLTESTJOB           hJob
	);

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlStgTestStgCmp
	(
	LPCWSTR              pwszStg1,
	LPCWSTR              pwszStg1Title,
	LPCWSTR              pwszStg2,
	LPCWSTR              pwszStg2Title,
	UINT                 nFlags,
	PVARIANT             pvErrors,
	PVARIANT             pvStorage
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI void     DLLPROC  LlStgTestStgCmpRUNDLL32
	(
	HWND                 hwnd,
	HINSTANCE            hinst,
	LPCSTR               lpszCmdLine,
	INT                  nCmdShow
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlStgTestStgCmp2
	(
	LPCWSTR              pwszStg1,
	LPCWSTR              pwszStg1Title,
	LPCWSTR              pwszStg2,
	LPCWSTR              pwszStg2Title,
	UINT                 nFlags,
	LPCWSTR              pwszStorage
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlStgTestJobCmpEmbeddedStorages
	(
	HLLTESTJOB           hJob,
	PVARIANT             pvErrors
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlSRTriggerExport
	(
	HLLJOB               hJob,
	HLLJOB               hSessionJob,
	LPCWSTR              pszID,
	LPCWSTR              pszExportFormat,
	UINT                 nFlags
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsGetVariantFromProfContentsInternal
	(
	LPCWSTR              pszText,
	PVARIANT             v
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsGetProfContentsFromVariantInternal
	(
	PCVARIANT            v,
	PVARIANT             vAsString
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
   #ifdef UNICODE
       #define LlExprGetUsedFunctions LlExprGetUsedFunctionsW
       #define LlExprGetUsedFunctionsO LlExprGetUsedFunctionsA
     #else  // not UNICODE
       #define LlExprGetUsedFunctions LlExprGetUsedFunctionsA
       #define LlExprGetUsedFunctionsO LlExprGetUsedFunctionsW
   #endif // UNICODE
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedFunctionsA
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPSTR                pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#if defined(WIN32) && !defined(_NO_CMLL28APIDEFINES)
#endif // WIN32, _NO_CMLL28APIDEFINES
#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedFunctionsW
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlDesignerTriggerJobInUIThread
	(
	HLLJOB               hLlJob,
	LPARAM               nUserData
	);

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsComparePrinterInformation
	(
	LPCWSTR              pszDevice1,
	LPCWSTR              pszDriver1,
	_PCDEVMODEW          pszDEVMODEW1,
	LPCWSTR              pszDevice2,
	LPCWSTR              pszDriver2,
	_PCDEVMODEW          pszDEVMODEW2,
	UINT                 nIgnoreFlags
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetUsedIdentifiersExV
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszProjectName,
	UINT                 nIdentifierTypes,
	PVARIANT             pvArray
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetPropertyV
	(
	HLLDOMOBJ            hDOMObj,
	LPCWSTR              pszName,
	PVARIANT             pvValue
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedFunctionsV
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	PVARIANT             pvArray
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprGetUsedVarsExV
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr,
	PVARIANT             pvArray,
	BOOL                 OrgName
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetTableRelationToActiveTable
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszTable,
	BOOL                 OrgName,
	PVARIANT             pvValue
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI HLLJOB   DLLPROC  LlJobOpenCopyEx
	(
	HLLJOB               hJob,
	UINT                 nFlags
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRepositoryCreateItemFromBLOB
	(
	LPCWSTR              psItemBLOB,
	PVARIANT             ppItem
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRepositoryCreateItemFromFile
	(
	HLLJOB               hLlJob,
	PIUNKNOWN            pRepository,
	LPCWSTR              pszID,
	LPCWSTR              pszParentID,
	LPCWSTR              psType,
	LPCWSTR              psFilename,
	LPCWSTR              pszUserDefinedID
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRepositoryGetNewID
	(
	PVARIANT             pvValue
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRepositoryCreateItemFromFileWithHierarchy
	(
	HLLJOB               hLlJob,
	PIUNKNOWN            pRepository,
	LPCTSTR              pszFolderID,
	LPCWSTR              pszID,
	LPCWSTR              pszParentID,
	LPCWSTR              psType,
	LPCWSTR              psFilename,
	LPCWSTR              pszUserDefinedID
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI HANDLE   DLLPROC  LlAddDebugSinkForThread
	(
	PIUNKNOWN            pSink
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlRemoveDebugSinkFromThread
	(
	HANDLE               hSink
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetDebugSinkProxyModule
	(
	LPCWSTR              pszPrefix,
	CTL_PGUID            pGUID,
	PVARIANT             pvSink
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetDebugSinkProxyCategory
	(
	INT                  nCategory,
	CTL_PGUID            pGUID,
	PVARIANT             pvSink
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDlgSelectFileOpen
	(
	HLLJOB               hJob,
	HWND                 hWndParent,
	LPCWSTR              pszReposType,
	LPCWSTR              pszTitle,
	BOOL                 bWithCreateNew,
	PVARIANT             vFilenameOrID
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsLcidFromLocaleName
	(
	LPCWSTR              pszLocaleName
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDesignerShowMessage
	(
	HLLJOB               hJob,
	LPCWSTR              pszTitle,
	LPCWSTR              pszMessage,
	UINT                 nFlags
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprConvertGlobalToLocal
	(
	HLLJOB               hJob,
	PVARIANT             pvVar
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprConvertLocalToGlobal
	(
	HLLJOB               hJob,
	PVARIANT             pvVar
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsGetProjectType
	(
	HLLJOB               hJob,
	LPCWSTR              pszProjectFilename
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetLastErrorText
	(
	HLLJOB               hJob,
	LPWSTR               pszBuffer,
	UINT                 nBufSize
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomGetCurrentObject
	(
	HLLJOB               hLlJob,
	INT                  nLevel,
	PHLLDOMOBJ           phDOMSubObj
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlUtilsIDFromOrgID
	(
	HLLJOB               hJob,
	PVARIANT             pvVar
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlProjectFindAndReplace
	(
	HLLJOB               hJob,
	LPCWSTR              pszSearchText,
	LPCWSTR              pszReplaceText,
	UINT                 nSARFlags
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlExprParseQueryDelayedDefine
	(
	HLLJOB               hLlJob,
	LPCWSTR              lpExprText,
	BOOL                 bIncludeFields,
	PIUNKNOWN            IUnkLLExprParseQuery
	);
#endif // WIN32

CMBT_LL_WINAPI INT      DLLPROC  LlExprTypeMask
	(
	HLLJOB               hLlJob,
	HLLEXPR              lpExpr
	);

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetAvailableInternalFunctions
	(
	HLLJOB               hLlJob,
	PVARIANT             pvArray
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlGetInternalFunctionInfo
	(
	HLLJOB               hLlJob,
	LPCWSTR              pszName,
	_PPIUNKNOWN          ppFunctionInfo
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomRenderObject
	(
	HLLDOMOBJ            hDOMObj,
	LPCWSTR              pszName
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlDomRenderObjectEx
	(
	HLLDOMOBJ            hDOMObj,
	LPCWSTR              pszName,
	_PRECT               prcDesigner,
	_PRECT               prcEffective
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlStgTestJobCmpEmbeddedStorages2
	(
	HLLTESTJOB           hJob,
	PVARIANT             pvErrors,
	PVARIANT             pvarListOfProblematicStorages
	);
#endif // WIN32

#ifdef WIN32
CMBT_LL_WINAPI INT      DLLPROC  LlStgTestJobAddResultJobs
	(
	HLLTESTJOB           hJob,
	PCVARIANT            pvarListOfProblematicStorages
	);
#endif // WIN32


#ifdef __cplusplus
}  // brace of extern "C"
#endif


#if __WATCOMC__ > 1000 || _MSC_VER >= 1400 /* Watcom C++ >= 10.x or MSC >= 2005 */
#pragma pack(pop)
#elif __BORLANDC__ /* Borland C++ */
#pragma option -a.
#else
#pragma pack() /* others */
#endif

#endif  /* #ifndef _RC_INVOKED_ */

#endif  /* #ifndef _LL28_H */

