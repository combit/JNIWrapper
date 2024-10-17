
//
#include <jni.h>

#define __GLUE3(x,y,z) 	x ## y ## z


#if defined(_WIN64)

	#define FCT(f) __GLUE3(Java_combit_x64_CmbtLL30, 64, f)

	typedef jlong jHLLSTG;			// HLLSTG
	typedef jlong jHANDLE;			// HANDLE
	typedef jlong jHWND;			// HWND
	typedef jlong jHLSCNVJOB;		// HLSCNVJOB
	typedef jlong jHLSMAILJOB;		// HLSMAILJOB
	typedef jlong jHENHMETAFILE;	// HENHMETAFILE
	typedef jlong jHSTG;			// HSTG
	typedef jlong jLPVOID;			// LPVOID
	typedef jlong jINT_PTR;			// INT_PTR
	typedef jlong jHLLEXPR;			// HLLEXPR
	typedef jlong jHLLRTFOBJ;		// HLLRTFOBJ
	typedef jlong jHDC;				// HDC
	typedef jlong jHLISTPOS;		// HLISTPOS
	typedef jlong jPHLLDOMOBJ;		// PHLLDOMOBJ
	typedef jlong jHLLDOMOBJ;		// HLLDOMOBJ
	typedef jlong j_LPINTJAVADUMMY;	// _LPINTJAVADUMMY

#else

	#define FCT(f) __GLUE3(Java_combit_x86_CmbtLL30, 32, f)

	typedef jint jHLLSTG;
	typedef jint jHANDLE;			// HANDLE
	typedef jint jHWND;				// HWND
	typedef jint jHLSCNVJOB;		// HLSCNVJOB
	typedef jint jHLSMAILJOB;		// HLSMAILJOB
	typedef jint jHENHMETAFILE;		// HENHMETAFILE
	typedef jint jHSTG;				// HSTG
	typedef jint jLPVOID;			// LPVOID
	typedef jint jINT_PTR;			// INT_PTR
	typedef jint jHLLEXPR;			// HLLEXPR
	typedef jint jHLLRTFOBJ;		// HLLRTFOBJ
	typedef jint jHDC;				// HDC
	typedef jint jHLISTPOS;			// HLISTPOS
	typedef jint jPHLLDOMOBJ;		// PHLLDOMOBJ
	typedef jint jHLLDOMOBJ;		// HLLDOMOBJ
	typedef jint j_LPINTJAVADUMMY;	// _LPINTJAVADUMMY

#endif


#ifndef _Included_cmLL
#define _Included_cmLL
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint JNICALL FCT(_LlJobOpen)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlJobOpenLCID)(JNIEnv*, jobject, jint);
JNIEXPORT void JNICALL FCT(_LlJobClose)(JNIEnv*, jobject, jint);
JNIEXPORT void JNICALL FCT(_LlSetDebug)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlGetVersion)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlGetNotificationMessage)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlSetNotificationMessage)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlDefineField)(JNIEnv*, jobject, jint, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlDefineFieldExt)(JNIEnv*, jobject, jint, jstring, jstring, jint, jLPVOID);
JNIEXPORT jint JNICALL FCT(_LlDefineFieldExtHandle)(JNIEnv*, jobject, jint, jstring, jHANDLE, jint, jLPVOID);
JNIEXPORT void JNICALL FCT(_LlDefineFieldStart)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlDefineVariable)(JNIEnv*, jobject, jint, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlDefineVariableExt)(JNIEnv*, jobject, jint, jstring, jstring, jint, jLPVOID);
JNIEXPORT jint JNICALL FCT(_LlDefineVariableExtHandle)(JNIEnv*, jobject, jint, jstring, jHANDLE, jint, jLPVOID);
JNIEXPORT jint JNICALL FCT(_LlDefineVariableName)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT void JNICALL FCT(_LlDefineVariableStart)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlDefineSumVariable)(JNIEnv*, jobject, jint, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlDefineLayout)(JNIEnv*, jobject, jint, jHWND, jstring, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlDlgEditLine)(JNIEnv*, jobject, jint, jHWND, jobject);
JNIEXPORT jint JNICALL FCT(_LlDlgEditLineEx)(JNIEnv*, jobject, jint, jHWND, jobject, jint, jstring, jboolean, jLPVOID);
JNIEXPORT jint JNICALL FCT(_LlPreviewSetTempPath)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPreviewDeleteFiles)(JNIEnv*, jobject, jint, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlPreviewDisplay)(JNIEnv*, jobject, jint, jstring, jstring, jHWND);
JNIEXPORT jint JNICALL FCT(_LlPreviewDisplayEx)(JNIEnv*, jobject, jint, jstring, jstring, jHWND, jint, jLPVOID);
JNIEXPORT jint JNICALL FCT(_LlPrint)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintAbort)(JNIEnv*, jobject, jint);
JNIEXPORT jboolean JNICALL FCT(_LlPrintCheckLineFit)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintEnd)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintFields)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintFieldsEnd)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintGetCurrentPage)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintGetItemsPerPage)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintGetItemsPerTable)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintGetRemainingItemsPerTable)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintGetRemItemsPerTable)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jINT_PTR JNICALL FCT(_LlPrintGetOption)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintGetPrinterInfo)(JNIEnv*, jobject, jint, jobject, jobject);
JNIEXPORT jint JNICALL FCT(_LlPrintOptionsDialog)(JNIEnv*, jobject, jint, jHWND, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintSelectOffsetEx)(JNIEnv*, jobject, jint, jHWND);
JNIEXPORT jint JNICALL FCT(_LlPrintSetBoxText)(JNIEnv*, jobject, jint, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintSetOption)(JNIEnv*, jobject, jint, jint, jINT_PTR);
JNIEXPORT jint JNICALL FCT(_LlPrintUpdateBox)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintStart)(JNIEnv*, jobject, jint, jint, jstring, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintWithBoxStart)(JNIEnv*, jobject, jint, jint, jstring, jint, jint, jHWND, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrinterSetup)(JNIEnv*, jobject, jint, jHWND, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlSelectFileDlgTitleEx)(JNIEnv*, jobject, jint, jHWND, jstring, jint, jobject, jLPVOID);
JNIEXPORT void JNICALL FCT(_LlSetDlgboxMode)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlGetDlgboxMode)(JNIEnv*, jobject);
JNIEXPORT jHLLEXPR JNICALL FCT(_LlExprParse)(JNIEnv*, jobject, jint, jstring, jboolean);
JNIEXPORT jint JNICALL FCT(_LlExprType)(JNIEnv*, jobject, jint, jHLLEXPR);
JNIEXPORT void JNICALL FCT(_LlExprError)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT void JNICALL FCT(_LlExprFree)(JNIEnv*, jobject, jint, jHLLEXPR);
JNIEXPORT jint JNICALL FCT(_LlExprEvaluate)(JNIEnv*, jobject, jint, jHLLEXPR, jobject);
JNIEXPORT jint JNICALL FCT(_LlExprGetUsedVars)(JNIEnv*, jobject, jint, jHLLEXPR, jobject);
JNIEXPORT jint JNICALL FCT(_LlSetOption)(JNIEnv*, jobject, jint, jint, jINT_PTR);
JNIEXPORT jINT_PTR JNICALL FCT(_LlGetOption)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlSetOptionString)(JNIEnv*, jobject, jint, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlGetOptionString)(JNIEnv*, jobject, jint, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlPrintSetOptionString)(JNIEnv*, jobject, jint, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintGetOptionString)(JNIEnv*, jobject, jint, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlDesignerProhibitAction)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlDesignerProhibitFunction)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintEnableObject)(JNIEnv*, jobject, jint, jstring, jboolean);
JNIEXPORT jint JNICALL FCT(_LlSetFileExtensions)(JNIEnv*, jobject, jint, jint, jstring, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintGetTextCharsPrinted)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintGetFieldCharsPrinted)(JNIEnv*, jobject, jint, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintIsVariableUsed)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintIsFieldUsed)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintOptionsDialogTitle)(JNIEnv*, jobject, jint, jHWND, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlSetPrinterToDefault)(JNIEnv*, jobject, jint, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlDefineSortOrderStart)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlDefineSortOrder)(JNIEnv*, jobject, jint, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintGetSortOrder)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlDefineGrouping)(JNIEnv*, jobject, jint, jstring, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintGetGrouping)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlAddCtlSupport)(JNIEnv*, jobject, jHWND, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintGetFilterExpression)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlPrintWillMatchFilter)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintDidMatchFilter)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlGetFieldContents)(JNIEnv*, jobject, jint, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlGetVariableContents)(JNIEnv*, jobject, jint, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlGetSumVariableContents)(JNIEnv*, jobject, jint, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlGetUserVariableContents)(JNIEnv*, jobject, jint, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlGetVariableType)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlGetFieldType)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlSetPrinterDefaultsDir)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlCreateSketch)(JNIEnv*, jobject, jint, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlViewerProhibitAction)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintCopyPrinterConfiguration)(JNIEnv*, jobject, jint, jstring, jint);
JNIEXPORT jHLLRTFOBJ JNICALL FCT(_LlRTFCreateObject)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlRTFDeleteObject)(JNIEnv*, jobject, jint, jHLLRTFOBJ);
JNIEXPORT jint JNICALL FCT(_LlRTFSetText)(JNIEnv*, jobject, jint, jHLLRTFOBJ, jstring);
JNIEXPORT jint JNICALL FCT(_LlRTFGetTextLength)(JNIEnv*, jobject, jint, jHLLRTFOBJ, jint);
JNIEXPORT jint JNICALL FCT(_LlRTFGetText)(JNIEnv*, jobject, jint, jHLLRTFOBJ, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlRTFEditObject)(JNIEnv*, jobject, jint, jHLLRTFOBJ, jHWND, jHDC, jint, jboolean);
JNIEXPORT jint JNICALL FCT(_LlRTFCopyToClipboard)(JNIEnv*, jobject, jint, jHLLRTFOBJ);
JNIEXPORT jint JNICALL FCT(_LlRTFEditorProhibitAction)(JNIEnv*, jobject, jint, jHLLRTFOBJ, jint);
JNIEXPORT jint JNICALL FCT(_LlRTFEditorInvokeAction)(JNIEnv*, jobject, jint, jHLLRTFOBJ, jint);
JNIEXPORT void JNICALL FCT(_LlDebugOutput)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetFirstVar)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetFirstField)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetNextEntry)(JNIEnv*, jobject, jint, jHLISTPOS, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintResetObjectStates)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlXSetParameter)(JNIEnv*, jobject, jint, jint, jstring, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlXGetParameter)(JNIEnv*, jobject, jint, jint, jstring, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlPrintResetProjectState)(JNIEnv*, jobject, jint);
JNIEXPORT void JNICALL FCT(_LlDefineChartFieldStart)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlDefineChartFieldExt)(JNIEnv*, jobject, jint, jstring, jstring, jint, jLPVOID);
JNIEXPORT jint JNICALL FCT(_LlPrintDeclareChartRow)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintGetChartObjectCount)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintIsChartFieldUsed)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlGetChartFieldContents)(JNIEnv*, jobject, jint, jstring, jobject);
JNIEXPORT jHLISTPOS JNICALL FCT(_LlEnumGetFirstChartField)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintGetRemainingSpacePerTable)(JNIEnv*, jobject, jint, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlSetDefaultProjectParameter)(JNIEnv*, jobject, jint, jstring, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintSetProjectParameter)(JNIEnv*, jobject, jint, jstring, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlExprContainsVariable)(JNIEnv*, jobject, jint, jHLLEXPR, jstring);
JNIEXPORT jint JNICALL FCT(_LlExprIsConstant)(JNIEnv*, jobject, jint, jHLLEXPR);
JNIEXPORT jint JNICALL FCT(_LlProfileStart)(JNIEnv*, jobject, jHANDLE, jstring, jstring, jint);
JNIEXPORT void JNICALL FCT(_LlProfileEnd)(JNIEnv*, jobject, jHANDLE);
JNIEXPORT jint JNICALL FCT(_LlDbAddTable)(JNIEnv*, jobject, jint, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlDbAddTableEx)(JNIEnv*, jobject, jint, jstring, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlDbAddTableRelation)(JNIEnv*, jobject, jint, jstring, jstring, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlDbAddTableSortOrder)(JNIEnv*, jobject, jint, jstring, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetCurrentTable)(JNIEnv*, jobject, jint, jobject, jboolean);
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetCurrentTableRelation)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetCurrentTableSortOrder)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlDbDumpStructure)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlPrintDbGetRootTableCount)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlDbSetMasterTable)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlDbGetMasterTable)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlXSetExportParameter)(JNIEnv*, jobject, jint, jstring, jstring, jstring);
JNIEXPORT jint JNICALL FCT(_LlXGetExportParameter)(JNIEnv*, jobject, jint, jstring, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlXlatName)(JNIEnv*, jobject, jint, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlDesignerProhibitEditingObject)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlGetUsedIdentifiers)(JNIEnv*, jobject, jint, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlExprGetUsedVarsEx)(JNIEnv*, jobject, jint, jHLLEXPR, jobject, jboolean);
JNIEXPORT jHANDLE JNICALL FCT(_LlDomGetProject)(JNIEnv*, jobject, jint, jPHLLDOMOBJ);
JNIEXPORT jint JNICALL FCT(_LlDomGetProperty)(JNIEnv*, jobject, jHLLDOMOBJ, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlDomSetProperty)(JNIEnv*, jobject, jHLLDOMOBJ, jstring, jstring);
JNIEXPORT jHANDLE JNICALL FCT(_LlDomGetObject)(JNIEnv*, jobject, jHLLDOMOBJ, jstring, jPHLLDOMOBJ);
JNIEXPORT jint JNICALL FCT(_LlDomGetSubobjectCount)(JNIEnv*, jobject, jHLLDOMOBJ, j_LPINTJAVADUMMY);
JNIEXPORT jHANDLE JNICALL FCT(_LlDomGetSubobject)(JNIEnv*, jobject, jHLLDOMOBJ, jint, jPHLLDOMOBJ);
JNIEXPORT jHANDLE JNICALL FCT(_LlDomCreateSubobject)(JNIEnv*, jobject, jHLLDOMOBJ, jint, jstring, jPHLLDOMOBJ);
JNIEXPORT jint JNICALL FCT(_LlDomDeleteSubobject)(JNIEnv*, jobject, jHLLDOMOBJ, jint);
JNIEXPORT jint JNICALL FCT(_LlProjectOpen)(JNIEnv*, jobject, jint, jint, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlProjectSave)(JNIEnv*, jobject, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlProjectClose)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlAssociatePreviewControl)(JNIEnv*, jobject, jint, jHWND, jint);
JNIEXPORT jint JNICALL FCT(_LlGetErrortext)(JNIEnv*, jobject, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlDesignerInvokeAction)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlDesignerRefreshWorkspace)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlDesignerFileOpen)(JNIEnv*, jobject, jint, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlDesignerFileSave)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlDesignerAddAction)(JNIEnv*, jobject, jint, jint, jint, jstring, jstring, jstring, jint, jLPVOID);
JNIEXPORT jint JNICALL FCT(_LlDesignerGetOptionString)(JNIEnv*, jobject, jint, jint, jobject);
JNIEXPORT jint JNICALL FCT(_LlDesignerSetOptionString)(JNIEnv*, jobject, jint, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlJobOpenCopy)(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL FCT(_LlGetProjectParameter)(JNIEnv*, jobject, jint, jstring, jstring, jobject);
JNIEXPORT jint JNICALL FCT(_LlGetDebug)(JNIEnv*, jobject);																										// _o260 _b32 UINT DLLPROC LlGetDebug(void);
JNIEXPORT jint JNICALL FCT(_LlGetTempFileName)(JNIEnv*, jobject, jstring, jstring, jobject, jint);													// _o259 _b32 INT DLLPROC LlGetTempFileName(LPCSTR pszPrefix, LPCSTR pszExt, LPSTR pszBuffer, UINT nBufSize, UINT nOptions);
JNIEXPORT jint JNICALL FCT(_LlGetUsedIdentifiersEx)(JNIEnv*, jobject, jint, jstring, jint, jobject);													// _o258 _b32 INT DLLPROC LlGetUsedIdentifiersEx(HLLJOB hLlJob, LPCSTR pszProjectName, UINT nIdentifierTypes, LPSTR pszBuffer, UINT nBufSize);
JNIEXPORT jint JNICALL FCT(_LlDbAddTableRelationEx)(JNIEnv*, jobject, jint, jstring, jstring, jstring, jstring, jstring, jstring);			// _o438 _b32 INT DLLPROC LlDbAddTableRelationEx(HLLJOB hJob, LPCWSTR pszTableID, LPCWSTR pszParentTableID, LPCWSTR pszRelationID, LPCWSTR pszRelationDisplayName, LPCWSTR pszKeyField, LPCWSTR pszParentKeyField);
JNIEXPORT jint JNICALL FCT(_LlDbAddTableSortOrderEx)(JNIEnv*, jobject, jint, jstring, jstring, jstring, jstring);								// _o457 _b32 INT DLLPROC LlDbAddTableSortOrderEx(HLLJOB hJob, LPCWSTR pszTableID, LPCWSTR pszSortOrderID, LPCWSTR pszSortOrderDisplayName, LPCWSTR pszField);
JNIEXPORT jint JNICALL FCT(_LlSetPrinterInPrinterFile)(JNIEnv*, jobject, jint, jint, jstring, jint, jstring);
JNIEXPORT jint JNICALL FCT(_LlLocAddDictionaryEntry)(JNIEnv*, jobject, jint, jint, jstring, jstring, jint);
JNIEXPORT jint JNICALL FCT(_LlLocAddDesignLCID)(JNIEnv*, jobject, jint, jint);
JNIEXPORT jint JNICALL FCT(_LlUtilsGetProjectType)(JNIEnv*, jobject, jint, jstring);


#ifdef __cplusplus
}
#endif
#endif // #ifndef _Included_cmLL

