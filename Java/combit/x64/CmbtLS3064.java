//
// Java Declaration File
// constants and function definitions for combit List & Label 30
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 30.000
//

package combit.x64;

public final class CmbtLS3064
  {
  
  public native long LlStgsysStorageOpen
	(
	final String         Filename,
	final String         TempPath,
	boolean              ReadOnly,
	boolean              OneJobTranslation
	);

  public native void LlStgsysStorageClose
	(
	long                  Stg
	);

  public native int LlStgsysGetAPIVersion
	(
	long                  Stg
	);

  public native int LlStgsysGetFileVersion
	(
	long                  Stg
	);

  public native int LlStgsysGetFilename
	(
	long				Stg,
	int                 Job,
	int                 File,
	StringBuffer        Buffer
	);

  public native int LlStgsysGetJobCount
	(
	long                  Stg
	);

  public native int LlStgsysSetJob
	(
	long                 Stg,
	int                  Job
	);

  public native int LlStgsysGetJob
	(
	long                  Stg
	);

  public native int LlStgsysGetPageCount
	(
	long                  Stg
	);

  public native int LlStgsysGetJobOptionValue
	(
	long                  Stg,
	int                  Option
	);

  public native int LlStgsysGetPageOptionValue
	(
	long                 Stg,
	int                  PageIndex,
	int                  Option
	);

  public native int LlStgsysGetPageOptionString
	(
	long                 Stg,
	int                  PageIndex,
	int                  Option,
	StringBuffer         Buffer
	);

  public native int LlStgsysSetPageOptionString
	(
	long                 Stg,
	int                  PageIndex,
	int                  Option,
	final String         Buffer
	);

  public native int LlStgsysAppend
	(
	long                  Stg,
	long                  StgToAppend
	);

  public native int LlStgsysDeleteJob
	(
	long                 Stg,
	int                  PageIndex
	);

  public native int LlStgsysDeletePage
	(
	long                 Stg,
	int                  PageIndex
	);

  public native long LlStgsysGetPageMetafile
	(
	long                 Stg,
	int                  PageIndex
	);

  public native int LlStgsysDestroyMetafile
	(
	long                  MF
	);

  public native int LlStgsysGetLastError
	(
	long                  Stg
	);

  public native int LlStgsysDeleteFiles
	(
	long                  Stg
	);

  public native int LlStgsysPrint
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
	);

  public native int LlStgsysStoragePrint
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
	);

  public native void LsSetDebug
	(
	boolean              On
	);

  public native final String LsGetViewerControlClassName
	(
	);

  public native int LsGetViewerControlDefaultMessage
	(
	);

  public native int LsCreateViewerControlOverParent
	(
	long				 Stg,
	long                 ParentControl
	);

  public native int LlStgsysGetJobOptionStringEx
	(
	long                 Stg,
	final String         Key,
	StringBuffer         Buffer
	);

  public native int LlStgsysSetJobOptionStringEx
	(
	long                 Stg,
	final String         Key,
	final String         Buffer
	);

  public native long LsConversionJobOpen
	(
	long                 WndParent,
	int                  Language,
	final String         Format
	);

  public native int LsConversionJobClose
	(
	long                  CnvJob
	);

  public native int LsConversionConfigurationDlg
	(
	long                 CnvJob,
	long                 WndParent
	);

  public native int LsConversionSetOptionString
	(
	long                 CnvJob,
	final String         Key,
	final String         Data
	);

  public native int LsConversionGetOptionString
	(
	long                 CnvJob,
	final String         Key,
	StringBuffer         Buffer
	);

  public native int LsConversionConvertEMFToFile
	(
	long                 CnvJob,
	long                 EMF,
	final String         Filename
	);

  public native int LsConversionConvertStgToFile
	(
	long                CnvJob,
	long                Stg,
	final String		Filename
	);

  public native int LlStgsysStorageConvert
	(
	final String         StgFilename,
	final String         DstFilename,
	final String         Format
	);

  public native int LlStgsysConvert
	(
	long                 Stg,
	final String         DstFilename,
	final String         Format
	);

  public native int LsMailConfigurationDialog
	(
	long                 WndParent,
	final String         Subkey,
	int                  Flags,
	int                  Language
	);

  public native long LsMailJobOpen
	(
	int                  Language
	);

  public native int LsMailJobClose
	(
	long                  Job
	);

  public native int LsMailSetOptionString
	(
	long                 Job,
	final String         Key,
	final String         Value
	);

  public native int LsMailGetOptionString
	(
	long                 Job,
	final String         Key,
	StringBuffer         Buffer
	);

  public native int LsMailSendFile
	(
	long                  Job,
	long                  WndParent
	);

  public native int LsProfileStart
	(
	long                 Thread,
	final String         Descr,
	final String         Filename,
	int                  TicksMS
	);

  public native void LsProfileEnd
	(
	long                  Thread
	);

  public native int LsMailView
	(
	long                 WndParent,
	final String         MailFile,
	int                  Rights,
	int                  Language
	);

  public native int LsInternalCreateViewerControlOverParent13
	(
	long                 ParentControl,
	int                  Flags
	);

  public native long LsInternalGetViewerControlFromParent13
	(
	long                 ParentControl
	);

  public native void LsSetDlgboxMode
	(
	int                  Mode
	);

  public native int LsGetDlgboxMode
	(
	);

  static
  {
	  System.loadLibrary("ListLabel30JNI_x64"); // use List & Label JNI x64
  }
};
