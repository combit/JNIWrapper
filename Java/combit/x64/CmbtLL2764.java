//
// Java Declaration File
// constants and function definitions for combit List & Label 27
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 27.000
//

package combit.x64;

public final class CmbtLL2764
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
	long                 Ptr
	);

  public native int LlDefineFieldExtHandle
	(
	int                  LlJob,
	final String         VarName,
	long                 Contents,
	int                  Para,
	long                 Ptr
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
	long                 Ptr
	);

  public native int LlDefineVariableExtHandle
	(
	int                  LlJob,
	final String         VarName,
	long                 Contents,
	int                  Para,
	long                 Ptr
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
	long                 Wnd,
	final String         Title,
	int                  ObjType,
	final String         ObjName
	);

  public native int LlDlgEditLine
	(
	int                  LlJob,
	long                 Wnd,
	StringBuffer         Buf
	);

  public native int LlDlgEditLineEx
	(
	int                  LlJob,
	long                 Wnd,
	StringBuffer         Buffer,
	int                  ParaTypes,
	final String         Title,
	boolean              Table,
	long                 Reserved
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
	long                 Wnd
	);

  public native int LlPreviewDisplayEx
	(
	int                  LlJob,
	final String         ObjName,
	final String         Path,
	long                 Wnd,
	int                  Options,
	long                 Reserved
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

  public native long LlPrintGetOption
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
	long                 Wnd,
	final String         Text
	);

  public native int LlPrintSelectOffsetEx
	(
	int                  LlJob,
	long                 Wnd
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
	long                 Value
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
	long                 Wnd,
	final String         Title
	);

  public native int LlPrinterSetup
	(
	int                  LlJob,
	long                 Wnd,
	int                  ObjType,
	final String         ObjName
	);

  public native int LlSelectFileDlgTitleEx
	(
	int                  LlJob,
	long                 Wnd,
	final String         Title,
	int                  ObjType,
	StringBuffer         ObjName,
	long                 Reserved
	);

  public native void LlSetDlgboxMode
	(
	int                  Mode
	);

  public native int LlGetDlgboxMode
	(
	);

  public native long LlExprParse
	(
	int                  LlJob,
	final String         ExprText,
	boolean              IncludeFields
	);

  public native int LlExprType
	(
	int                  LlJob,
	long                 Expr
	);

  public native void LlExprError
	(
	int                  LlJob,
	StringBuffer         Buf
	);

  public native void LlExprFree
	(
	int                  LlJob,
	long                 Expr
	);

  public native int LlExprEvaluate
	(
	int                  LlJob,
	long                 Expr,
	StringBuffer         Buf
	);

  public native int LlExprGetUsedVars
	(
	int                  LlJob,
	long                 Expr,
	StringBuffer         Buffer
	);

  public native int LlSetOption
	(
	int                  LlJob,
	int                  Mode,
	long                 Value
	);

  public native long LlGetOption
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
	long                 Wnd,
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
	long                 Wnd,
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

  public native long LlRTFCreateObject
	(
	int                  LlJob
	);

  public native int LlRTFDeleteObject
	(
	int                  LlJob,
	long                 RTF
	);

  public native int LlRTFSetText
	(
	int                  LlJob,
	long                 RTF,
	final String         Text
	);

  public native int LlRTFGetTextLength
	(
	int                  LlJob,
	long                 RTF,
	int                  Flags
	);

  public native int LlRTFGetText
	(
	int                  LlJob,
	long                 RTF,
	int                  Flags,
	StringBuffer         Buffer
	);

  public native int LlRTFEditObject
	(
	int                  LlJob,
	long                 RTF,
	long                 Wnd,
	long                 PrnDC,
	int                  ProjectType,
	boolean              Modal
	);

  public native int LlRTFCopyToClipboard
	(
	int                  LlJob,
	long                 RTF
	);

  public native int LlRTFEditorProhibitAction
	(
	int                  LlJob,
	long                 RTF,
	int                  ControlID
	);

  public native int LlRTFEditorInvokeAction
	(
	int                  LlJob,
	long                 RTF,
	int                  ControlID
	);

  public native void LlDebugOutput
	(
	int                  Indent,
	final String         Text
	);

  public native long LlEnumGetFirstVar
	(
	int                  LlJob,
	int                  Flags
	);

  public native long LlEnumGetFirstField
	(
	int                  LlJob,
	int                  Flags
	);

  public native long LlEnumGetNextEntry
	(
	int                  LlJob,
	long                 Pos,
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
	long                 Ptr
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

  public native long LlEnumGetFirstChartField
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
	long                 Expr,
	final String         Variable
	);

  public native int LlExprIsConstant
	(
	int                  LlJob,
	long                 Expr
	);

  public native int LlProfileStart
	(
	long                 Thread,
	final String         Descr,
	final String         Filename,
	int                  TicksMS
	);

  public native void LlProfileEnd
	(
	long                 Thread
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
	long                 Expr,
	StringBuffer         Buffer,
	boolean              OrgName
	);

  public native long LlDomGetProject
	(
	int                  LlJob,
	long                 DOMObj
	);

  public native int LlDomGetProperty
	(
	long                 DOMObj,
	final String         Name,
	StringBuffer         Buffer
	);

  public native int LlDomSetProperty
	(
	long                 DOMObj,
	final String         Name,
	final String         Value
	);

  public native long LlDomGetObject
	(
	long                 DOMObj,
	final String         Name,
	long                 DOMSubObj
	);

  public native int LlDomGetSubobjectCount
	(
	long                 DOMObj,
	long                 Count
	);

  public native long LlDomGetSubobject
	(
	long                 DOMObj,
	int                  Position,
	long                 DOMSubObj
	);

  public native long LlDomCreateSubobject
	(
	long                 DOMObj,
	int                  Position,
	final String         Type,
	long                 DOMSubObj
	);

  public native int LlDomDeleteSubobject
	(
	long                 DOMObj,
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
	long                 WndControl,
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
	long                 Reserved
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

  static
  {
	  System.loadLibrary("ListLabel27JNI_x64"); // use List & Label JNI x64
  }
};
