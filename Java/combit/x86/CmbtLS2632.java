//
// Java Declaration File
// constants and function definitions for combit List & Label 26
// Copyright (c) combit Software GmbH, Konstanz, Germany
// Version: 26.000
//

package combit.x86;

public final class CmbtLS2632
  {
  
  public native int LlStgsysStorageOpen
	(
	final String         Filename,
	final String         TempPath,
	boolean              ReadOnly,
	boolean              OneJobTranslation
	);

  public native void LlStgsysStorageClose
	(
	int                  Stg
	);

  public native int LlStgsysGetAPIVersion
	(
	int                  Stg
	);

  public native int LlStgsysGetFileVersion
	(
	int                  Stg
	);

  public native int LlStgsysGetFilename
	(
	int					Stg,
	int                 Job,
	int                 File,
	StringBuffer        Buffer
	);

  public native int LlStgsysGetJobCount
	(
	int                  Stg
	);

  public native int LlStgsysSetJob
	(
	int                  Stg,
	int                  Job
	);

  public native int LlStgsysGetJob
	(
	int                  Stg
	);

  public native int LlStgsysGetPageCount
	(
	int                  Stg
	);

  public native int LlStgsysGetJobOptionValue
	(
	int                  Stg,
	int                  Option
	);

  public native int LlStgsysGetPageOptionValue
	(
	int                  Stg,
	int                  PageIndex,
	int                  Option
	);

  public native int LlStgsysGetPageOptionString
	(
	int                  Stg,
	int                  PageIndex,
	int                  Option,
	StringBuffer         Buffer
	);

  public native int LlStgsysSetPageOptionString
	(
	int                  Stg,
	int                  PageIndex,
	int                  Option,
	final String         Buffer
	);

  public native int LlStgsysAppend
	(
	int                  Stg,
	int                  StgToAppend
	);

  public native int LlStgsysDeleteJob
	(
	int                  Stg,
	int                  PageIndex
	);

  public native int LlStgsysDeletePage
	(
	int                  Stg,
	int                  PageIndex
	);

  public native int LlStgsysGetPageMetafile
	(
	int                  Stg,
	int                  PageIndex
	);

  public native int LlStgsysDestroyMetafile
	(
	int                  MF
	);

  public native int LlStgsysGetLastError
	(
	int                  Stg
	);

  public native int LlStgsysDeleteFiles
	(
	int                  Stg
	);

  public native int LlStgsysPrint
	(
	int                	Stg,
	final String		PrinterName1,
	final String		PrinterName2,
	int					StartPageIndex,
	int					EndPageIndex,
	int					Copies,
	int					Flags,
	final String		Message,
	int					WndParent
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
	int                  WndParent
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
	int				 	Stg,
	int                 ParentControl
	);

  public native int LlStgsysGetJobOptionStringEx
	(
	int	                 Stg,
	final String         Key,
	StringBuffer         Buffer
	);

  public native int LlStgsysSetJobOptionStringEx
	(
	int                  Stg,
	final String         Key,
	final String         Buffer
	);

  public native int LsConversionJobOpen
	(
	int                 WndParent,
	int                 Language,
	final String        Format
	);

  public native int LsConversionJobClose
	(
	int                  CnvJob
	);

  public native int LsConversionConfigurationDlg
	(
	int                 CnvJob,
	int                 WndParent
	);

  public native int LsConversionSetOptionString
	(
	int                 CnvJob,
	final String        Key,
	final String        Data
	);

  public native int LsConversionGetOptionString
	(
	int                 CnvJob,
	final String        Key,
	StringBuffer        Buffer
	);

  public native int LsConversionConvertEMFToFile
	(
	int                 CnvJob,
	long                EMF,
	final String        Filename
	);

  public native int LsConversionConvertStgToFile
	(
	int                	CnvJob,
	int                	Stg,
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
	int                 Stg,
	final String        DstFilename,
	final String        Format
	);

  public native int LsMailConfigurationDialog
	(
	int                 WndParent,
	final String        Subkey,
	int                 Flags,
	int                 Language
	);

  public native int LsMailJobOpen
	(
	int                  Language
	);

  public native int LsMailJobClose
	(
	int                  Job
	);

  public native int LsMailSetOptionString
	(
	int                 Job,
	final String        Key,
	final String        Value
	);

  public native int LsMailGetOptionString
	(
	int                 Job,
	final String        Key,
	StringBuffer        Buffer
	);

  public native int LsMailSendFile
	(
	int                  Job,
	int                  WndParent
	);

  public native int LsProfileStart
	(
	int                 Thread,
	final String        Descr,
	final String        Filename,
	int                 TicksMS
	);

  public native void LsProfileEnd
	(
	int                  Thread
	);

  public native int LsMailView
	(
	int                 WndParent,
	final String        MailFile,
	int                 Rights,
	int                 Language
	);

  public native int LsInternalCreateViewerControlOverParent13
	(
	int                 ParentControl,
	int                 Flags
	);

  public native int LsInternalGetViewerControlFromParent13
	(
	int                 ParentControl
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
	  System.loadLibrary("ListLabel26JNI_x86"); // use List & Label JNI x86
  }
};
