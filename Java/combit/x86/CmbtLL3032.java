//
// Java Declaration File
// constants and function definitions for combit List & Label 30
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 30.000
//

package combit.x86;

import java.util.StringTokenizer;

public final class CmbtLL3032
  {

  public native int LlJobOpen
	(
	int                  Language
	);

  public native int LlJobOpenLCID
	(
	int                  LCID
	);

  public native void LlJobClose
	(
	int                  LlJob
	);

  public native void LlSetDebug
	(
	int                  OnOff
	);

  public native int LlGetVersion
	(
	int                  Cmd
	);

  public native int LlGetNotificationMessage
	(
	int                  LlJob
	);

  public native int LlSetNotificationMessage
	(
	int                  LlJob,
	int                  Message
	);

  public native int LlDefineField
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents
	);

  public native int LlDefineFieldExt
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents,
	int                  Para,
	int                  Ptr
	);

  public native int LlDefineFieldExtHandle
	(
	int                  LlJob,
	final String         VarName,
	int                  Contents,
	int                  Para,
	int                  Ptr
	);

  public native void LlDefineFieldStart
	(
	int                  LlJob
	);

  public native int LlDefineVariable
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents
	);

  public native int LlDefineVariableExt
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents,
	int                  Para,
	int                  Ptr
	);

  public native int LlDefineVariableExtHandle
	(
	int                  LlJob,
	final String         VarName,
	int                  Contents,
	int                  Para,
	int                  Ptr
	);

  public native int LlDefineVariableName
	(
	int                  LlJob,
	final String         VarName
	);

  public native void LlDefineVariableStart
	(
	int                  LlJob
	);

  public native int LlDefineSumVariable
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents
	);

  public native int LlDefineLayout
	(
	int                  LlJob,
	int                  Wnd,
	final String         Title,
	int                  ObjType,
	final String         ObjName
	);

  public native int LlDlgEditLine
	(
	int                  LlJob,
	int                  Wnd,
	StringBuffer         Buf
	);

  public native int LlDlgEditLineEx
	(
	int                  LlJob,
	int                  Wnd,
	StringBuffer         Buffer,
	int                  ParaTypes,
	final String         Title,
	boolean              Table,
	int                  Reserved
	);

  public native int LlPreviewSetTempPath
	(
	int                  LlJob,
	final String         Path
	);

  public native int LlPreviewDeleteFiles
	(
	int                  LlJob,
	final String         ObjName,
	final String         Path
	);

  public native int LlPreviewDisplay
	(
	int                  LlJob,
	final String         ObjName,
	final String         Path,
	int                  Wnd
	);

  public native int LlPreviewDisplayEx
	(
	int                  LlJob,
	final String         ObjName,
	final String         Path,
	int                  Wnd,
	int                  Options,
	int                  Reserved
	);

  public native int LlPrint
	(
	int                  LlJob
	);

  public native int LlPrintAbort
	(
	int                  LlJob
	);

  public native boolean LlPrintCheckLineFit
	(
	int                  LlJob
	);

  public native int LlPrintEnd
	(
	int                  LlJob,
	int                  Pages
	);

  public native int LlPrintFields
	(
	int                  LlJob
	);

  public native int LlPrintFieldsEnd
	(
	int                  LlJob
	);

  public native int LlPrintGetCurrentPage
	(
	int                  LlJob
	);

  public native int LlPrintGetItemsPerPage
	(
	int                  LlJob
	);

  public native int LlPrintGetItemsPerTable
	(
	int                  LlJob
	);

  public native int LlPrintGetRemainingItemsPerTable
	(
	int                  LlJob,
	final String         Field
	);

  public native int LlPrintGetRemItemsPerTable
	(
	int                  LlJob,
	final String         Field
	);

  public native int LlPrintGetOption
	(
	int                  LlJob,
	int                  Index
	);

  public native int LlPrintGetPrinterInfo
	(
	int                  LlJob,
	StringBuffer         Prn,
	StringBuffer         Port
	);

  public native int LlPrintOptionsDialog
	(
	int                  LlJob,
	int                  Wnd,
	final String         Text
	);

  public native int LlPrintSelectOffsetEx
	(
	int                  LlJob,
	int                  Wnd
	);

  public native int LlPrintSetBoxText
	(
	int                  LlJob,
	final String         Text,
	int                  Percentage
	);

  public native int LlPrintSetOption
	(
	int                  LlJob,
	int                  Index,
	int                  Value
	);

  public native int LlPrintUpdateBox
	(
	int                  LlJob
	);

  public native int LlPrintStart
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName,
	int                  PrintOptions,
	int                  dummy
	);

  public native int LlPrintWithBoxStart
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName,
	int                  PrintOptions,
	int                  BoxType,
	int                  Wnd,
	final String         Title
	);

  public native int LlPrinterSetup
	(
	int                  LlJob,
	int                  Wnd,
	int                  ObjType,
	final String         ObjName
	);

  public native int LlSelectFileDlgTitleEx
	(
	int                  LlJob,
	int                  Wnd,
	final String         Title,
	int                  ObjType,
	StringBuffer         ObjName,
	int                  Reserved
	);

  public native void LlSetDlgboxMode
	(
	int                  Mode
	);

  public native int LlGetDlgboxMode
	(
	);

  public native int LlExprParse
	(
	int                  LlJob,
	final String         ExprText,
	boolean              IncludeFields
	);

  public native int LlExprType
	(
	int                  LlJob,
	int                  Expr
	);

  public native void LlExprError
	(
	int                  LlJob,
	StringBuffer         Buf
	);

  public native void LlExprFree
	(
	int                  LlJob,
	int                  Expr
	);

  public native int LlExprEvaluate
	(
	int                  LlJob,
	int                  Expr,
	StringBuffer         Buf
	);

  public native int LlExprGetUsedVars
	(
	int                  LlJob,
	int                  Expr,
	StringBuffer         Buffer
	);

  public native int LlSetOption
	(
	int                  LlJob,
	int                  Mode,
	int                  Value
	);

  public native int LlGetOption
	(
	int                  LlJob,
	int                  Mode
	);

  public native int LlSetOptionString
	(
	int                  LlJob,
	int                  Index,
	final String         Buffer
	);

  public native int LlGetOptionString
	(
	int                  LlJob,
	int                  Index,
	StringBuffer         Buffer
	);

  public native int LlPrintSetOptionString
	(
	int                  LlJob,
	int                  Index,
	final String         Buffer
	);

  public native int LlPrintGetOptionString
	(
	int                  LlJob,
	int                  Index,
	StringBuffer         Buffer
	);

  public native int LlDesignerProhibitAction
	(
	int                  LlJob,
	int                  MenuID
	);

  public native int LlDesignerProhibitFunction
	(
	int                  LlJob,
	final String         Function
	);

  public native int LlPrintEnableObject
	(
	int                  LlJob,
	final String         ObjectName,
	boolean              Enable
	);

  public native int LlSetFileExtensions
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjectExt,
	final String         PrinterExt,
	final String         SketchExt
	);

  public native int LlPrintGetTextCharsPrinted
	(
	int                  LlJob,
	final String         ObjectName
	);

  public native int LlPrintGetFieldCharsPrinted
	(
	int                  LlJob,
	final String         ObjectName,
	final String         Field
	);

  public native int LlPrintIsVariableUsed
	(
	int                  LlJob,
	final String         VarName
	);

  public native int LlPrintIsFieldUsed
	(
	int                  LlJob,
	final String         FieldName
	);

  public native int LlPrintOptionsDialogTitle
	(
	int                  LlJob,
	int                  Wnd,
	final String         Title,
	final String         Text
	);

  public native int LlSetPrinterToDefault
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName
	);

  public native int LlDefineSortOrderStart
	(
	int                  LlJob
	);

  public native int LlDefineSortOrder
	(
	int                  LlJob,
	final String         Identifier,
	final String         Text
	);

  public native int LlPrintGetSortOrder
	(
	int                  LlJob,
	StringBuffer         Buffer
	);

  public native int LlDefineGrouping
	(
	int                  LlJob,
	final String         Sortorder,
	final String         Identifier,
	final String         Text
	);

  public native int LlPrintGetGrouping
	(
	int                  LlJob,
	StringBuffer         Buffer
	);

  public native int LlAddCtlSupport
	(
	int                  Wnd,
	int                  Flags,
	final String         Inifile
	);

  public native int LlPrintGetFilterExpression
	(
	int                  LlJob,
	StringBuffer         Buffer
	);

  public native int LlPrintWillMatchFilter
	(
	int                  LlJob
	);

  public native int LlPrintDidMatchFilter
	(
	int                  LlJob
	);

  public native int LlGetFieldContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlGetVariableContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlGetSumVariableContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlGetUserVariableContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlGetVariableType
	(
	int                  LlJob,
	final String         Name
	);

  public native int LlGetFieldType
	(
	int                  LlJob,
	final String         Name
	);

  public native int LlSetPrinterDefaultsDir
	(
	int                  LlJob,
	final String         Dir
	);

  public native int LlCreateSketch
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName
	);

  public native int LlViewerProhibitAction
	(
	int                  LlJob,
	int                  MenuID
	);

  public native int LlPrintCopyPrinterConfiguration
	(
	int                  LlJob,
	final String         Filename,
	int                  Function
	);

  public native int LlRTFCreateObject
	(
	int                  LlJob
	);

  public native int LlRTFDeleteObject
	(
	int                  LlJob,
	int                  RTF
	);

  public native int LlRTFSetText
	(
	int                  LlJob,
	int                  RTF,
	final String         Text
	);

  public native int LlRTFGetTextLength
	(
	int                  LlJob,
	int                  RTF,
	int                  Flags
	);

  public native int LlRTFGetText
	(
	int                  LlJob,
	int                  RTF,
	int                  Flags,
	StringBuffer         Buffer
	);

  public native int LlRTFEditObject
	(
	int                  LlJob,
	int                  RTF,
	int                  Wnd,
	int                  PrnDC,
	int                  ProjectType,
	boolean              Modal
	);

  public native int LlRTFCopyToClipboard
	(
	int                  LlJob,
	int                  RTF
	);

  public native int LlRTFEditorProhibitAction
	(
	int                  LlJob,
	int                  RTF,
	int                  ControlID
	);

  public native int LlRTFEditorInvokeAction
	(
	int                  LlJob,
	int                  RTF,
	int                  ControlID
	);

  public native void LlDebugOutput
	(
	int                  Indent,
	final String         Text
	);

  public native int LlEnumGetFirstVar
	(
	int                  LlJob,
	int                  Flags
	);

  public native int LlEnumGetFirstField
	(
	int                  LlJob,
	int                  Flags
	);

  public native int LlEnumGetNextEntry
	(
	int                  LlJob,
	int                  Pos,
	int                  Flags
	);

  public native int LlPrintResetObjectStates
	(
	int                  LlJob
	);

  public native int LlXSetParameter
	(
	int                  LlJob,
	int                  ExtensionType,
	final String         ExtensionName,
	final String         Key,
	final String         Value
	);

  public native int LlXGetParameter
	(
	int                  LlJob,
	int                  ExtensionType,
	final String         ExtensionName,
	final String         Key,
	StringBuffer         Buffer
	);

  public native int LlPrintResetProjectState
	(
	int                  Job
	);

  public native void LlDefineChartFieldStart
	(
	int                  LlJob
	);

  public native int LlDefineChartFieldExt
	(
	int                  LlJob,
	final String         VarName,
	final String         Contents,
	int                  Para,
	int                  Ptr
	);

  public native int LlPrintDeclareChartRow
	(
	int                  LlJob,
	int                  Flags
	);

  public native int LlPrintGetChartObjectCount
	(
	int                  LlJob,
	int                  Type
	);

  public native int LlPrintIsChartFieldUsed
	(
	int                  LlJob,
	final String         FieldName
	);

  public native int LlGetChartFieldContents
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlEnumGetFirstChartField
	(
	int                  LlJob,
	int                  Flags
	);

  public native int LlPrintGetRemainingSpacePerTable
	(
	int                  LlJob,
	final String         Field,
	int                  Dimension
	);

  public native int LlSetDefaultProjectParameter
	(
	int                  LlJob,
	final String         Parameter,
	final String         Value,
	int                  Flags
	);

  public native int LlPrintSetProjectParameter
	(
	int                  LlJob,
	final String         Parameter,
	final String         Value,
	int                  Flags
	);

  public native int LlExprContainsVariable
	(
	int                  LlJob,
	int                  Expr,
	final String         Variable
	);

  public native int LlExprIsConstant
	(
	int                  LlJob,
	int                  Expr
	);

  public native int LlProfileStart
	(
	int                  Thread,
	final String         Descr,
	final String         Filename,
	int                  TicksMS
	);

  public native void LlProfileEnd
	(
	int                  Thread
	);

  public native int LlDbAddTable
	(
	int                  Job,
	final String         TableID,
	final String         DisplayName
	);

  public native int LlDbAddTableEx
	(
	int                  Job,
	final String         TableID,
	final String         DisplayName,
	int					 Options
	);

  public native int LlDbAddTableRelation
	(
	int                  Job,
	final String         TableID,
	final String         ParentTableID,
	final String         RelationID,
	final String         RelationDisplayName
	);

  public native int LlDbAddTableSortOrder
	(
	int                  Job,
	final String         TableID,
	final String         SortOrderID,
	final String         SortOrderDisplayName
	);

  public native int LlPrintDbGetCurrentTable
	(
	int                  Job,
	StringBuffer         TableID,
	boolean              CompletePath
	);

  public native int LlPrintDbGetCurrentTableRelation
	(
	int                  Job,
	StringBuffer         RelationID
	);

  public native int LlPrintDbGetCurrentTableSortOrder
	(
	int                  Job,
	StringBuffer         SortOrderID
	);

  public native int LlDbDumpStructure
	(
	int                  Job
	);

  public native int LlPrintDbGetRootTableCount
	(
	int                  Job
	);

  public native int LlDbSetMasterTable
	(
	int                  Job,
	final String         TableID
	);

  public native int LlDbGetMasterTable
	(
	int                  Job,
	StringBuffer         Buffer
	);

  public native int LlXSetExportParameter
	(
	int                  LlJob,
	final String         ExtensionName,
	final String         Key,
	final String         Value
	);

  public native int LlXGetExportParameter
	(
	int                  LlJob,
	final String         ExtensionName,
	final String         Key,
	StringBuffer         Buffer
	);

  public native int LlXlatName
	(
	int                  LlJob,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlDesignerProhibitEditingObject
	(
	int                  LlJob,
	final String         Object
	);

  public native int LlGetUsedIdentifiers
	(
	int                  LlJob,
	final String         ProjectName,
	StringBuffer         Buffer
	);

  public native int LlExprGetUsedVarsEx
	(
	int                  LlJob,
	int                  Expr,
	StringBuffer         Buffer,
	boolean              OrgName
	);

  public native long LlDomGetProject
	(
	int                  LlJob,
	int                  DOMObj
	);

  public native int LlDomGetProperty
	(
	int                  DOMObj,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlDomSetProperty
	(
	int                  DOMObj,
	final String         Name,
	final String         Value
	);

  public native long LlDomGetObject
	(
	int                  DOMObj,
	final String         Name,
	int                  DOMSubObj
	);

  public native int LlDomGetSubobjectCount
	(
	int                  DOMObj,
	int                  Count
	);

  public native long LlDomGetSubobject
	(
	int                  DOMObj,
	int                  Position,
	int                  DOMSubObj
	);

  public native long LlDomCreateSubobject
	(
	int                  DOMObj,
	int                  Position,
	final String         Type,
	int                  DOMSubObj
	);

  public native int LlDomDeleteSubobject
	(
	int                  DOMObj,
	int                  Position
	);

  public native int LlProjectOpen
	(
	int                  LlJob,
	int                  ObjType,
	final String         ObjName,
	int                  OpenMode
	);

  public native int LlProjectSave
	(
	int                  LlJob,
	final String         ObjName
	);

  public native int LlProjectClose
	(
	int                  LlJob
	);

  public native int LlAssociatePreviewControl
	(
	int                  LlJob,
	int                  WndControl,
	int                  Flags
	);

  public native int LlGetErrortext
	(
	int                  Error,
	StringBuffer         Buffer
	);

  public native int LlDesignerInvokeAction
	(
	int                  LlJob,
	int                  MenuID
	);

  public native int LlDesignerRefreshWorkspace
	(
	int                  LlJob
	);

  public native int LlDesignerFileOpen
	(
	int                  LlJob,
	final String         Filename,
	int                  Flags
	);

  public native int LlDesignerFileSave
	(
	int                  LlJob,
	int                  Flags
	);

  public native int LlDesignerAddAction
	(
	int                  LlJob,
	int                  ID,
	int                  Flags,
	final String         MenuText,
	final String         MenuHierarchy,
	final String         TooltipText,
	int                  Icon,
	int                  Reserved
	);

  public native int LlDesignerGetOptionString
	(
	int                  LlJob,
	int                  Index,
	StringBuffer         Buffer
	); // Unicode API

  public native int LlDesignerSetOptionString
	(
	int                  LlJob,
	int                  Index,
	final String         Buffer
	); // Unicode API

  public native int LlJobOpenCopy
	(
	int                  Job
	);

  public native int LlGetProjectParameter
	(
	int                  LlJob,
	final String         ProjectName,
	final String         Parameter,
	StringBuffer         Buffer
	); // Unicode API

  public native boolean LlSetNotificationCallback
      (
          int LlJob,
          combit.callbacks.Callback callback
      );

  public native int LlGetDebug
      (
      );

  public native int LlGetTempFileName
      (
          final String Prefix,
          final String Extension,
          StringBuffer Buffer,
          int Options
      );

  public native int LlGetUsedIdentifiersEx
      (
      int		LlJob,
      final String	ProjectName,
      int		IdentifierTypes,
      StringBuffer	Buffer
      );

  public native int LlDbAddTableRelationEx
      (
      int		Job,
      final String      TableID,
      final String      ParentTableID,
      final String      RelationID,
      final String      RelationDisplayName,
      final String      KeyField,
      final String      ParentKeyField
      );

  public native int LlDbAddTableSortOrderEx
      (
      int					Job,
      final String		TableID,
      final String		SortOrderID,
      final String		SortOrderDisplayName,
      final String		Field
      );
      
  public native int LlSetPrinterInPrinterFile
	  (
	  int					Job,
	  int					ObjectType,
	  final String		ObjectName,
	  int					PrinterIndex,
	  final String		PrinterName
	  );
	  
  public native int LlLocAddDictionaryEntry
	  (
	  int				Job,
	  int				LCID,
	  final String		Key,
	  final String		Value,
	  int				Type
	  );
	  
  public native int LlLocAddDesignLCID
	  (
	  int				Job,
	  int				LCID
	  );
	  
  public native int LlUtilsGetProjectType
	  (
	  int				Job,
	  final String		ProjectFilename
	  );

  private static String sJNIModuleName = "ListLabel30JNI_x86";
  private static String sMainLLModuleFile = "cmll30.dll";
  private static String sPreloadLLModuleFileList = "cmll30xl.dll;cmll30oc.llx;cmll30pw.llx;cmll30bc.llx;cmll30ht.llx;cmmx30.dll;";
  private static void PreloadLLModules()
  {
	  // just helper-code for pre-loading LL modules to avoid loader locks or runtime-errors while unloading app
	  String sMainDLLPath = null;
	  String sFileToLoad = null;
	  String sFileSeparator = System.getProperty("file.separator");

	  // get path to load LL modules from
	  StringTokenizer parserPath = new StringTokenizer(System.getProperty("java.library.path"), ";");
	  while (parserPath.hasMoreTokens())
	  {
		  sMainDLLPath = parserPath.nextToken();
		  sFileToLoad = sMainDLLPath + sFileSeparator + sMainLLModuleFile;
		  try
		  {
			  System.load(sFileToLoad);
			  break; // stop loop - we found the path loading main DLL was successful!
		  }
		  catch(UnsatisfiedLinkError e)
		  {
			  continue; // try next path to load from
		  }
	  }
	  
	  // pre-load all other LL modules
	  if(sMainDLLPath != null && !sMainDLLPath.isEmpty())
	  {
		  StringTokenizer parserFileList = new StringTokenizer(sPreloadLLModuleFileList.toString(), ";");
		  while (parserFileList.hasMoreTokens())
		  {
			  sFileToLoad = sMainDLLPath + sFileSeparator + parserFileList.nextToken();
			  try
			  {
				  System.load(sFileToLoad);
			  }
			  catch(UnsatisfiedLinkError e)
			  {
				  continue; // try next module to load - if exists, because some of them are optional (see also redist.txt)
			  }
		  }
	  }
  }
  
  static
  {
	  try
	  {
		  PreloadLLModules();
	  }
	  catch(Exception e)
	  {
	  }
	  
	  System.loadLibrary(sJNIModuleName.toString()); // use List & Label JNI x86
  }
};
