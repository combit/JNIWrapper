
//

#include <stdafx.h>
#include "callbacks.h"

#ifndef UNICODE
  #pragma message("Die DLL muﬂ als Unicode-DLL compiliert werden!")
#endif

#include "CmbtLL29.h"


#if defined(_MSC_VER)
  #pragma warning(disable:4242) // conversion: possible loss of data
#endif


// contains special types
#include "global.h"
Registry<JNIEnv*> jni_env_registry; // global declaration
Registry<jobject> jni_callback_registry; // global declaration


// ===========================================================
static jobject create_CMND_PAGE(
												JNIEnv* pJEnv, 
												jint hjob, 
												PSCLLPAGE page
												)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/PageCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(IZZII)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, BOOL2Java(page->_bDesignerPreview), BOOL2Java(page->_bPreDraw), (jint)(intptr_t)page->_hPaintDC, (jint)(intptr_t)page->_hRefDC);
	return res;
}


// ===========================================================
static jobject create_CMND_GETVIEWERBUTTONSTATE(
																				JNIEnv* pJEnv, 
																				jint hjob, 
																				INT nButtonID,
																				INT nButtonState
																				)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/GetViewerButtonStateCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(III)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, (jint)nButtonID, (jint)nButtonState);
	return res;
}


// ===========================================================
static jobject create_CMND_VIEWERBTNCLICKED(
																		JNIEnv* pJEnv, 
																		jint hjob, 
																		INT nButtonID
																		)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/ViewerBtnClickedCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(II)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, (jint)nButtonID);
	return res;
}


// ===========================================================
static jobject create_CMND_SELECTMENU(
															JNIEnv* pJEnv, 
															jint hjob, 
															INT nMenuID
															)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/SelectMenuCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(II)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, (jint)nMenuID);
	return res;
}


// ===========================================================
static jobject create_CMND_ENABLEMENU(
															JNIEnv* pJEnv, 
															jint hjob, 
															HMENU hMenu
															)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/EnableMenuCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(II)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, (jint)(intptr_t)hMenu);
	return res;
}


// ===========================================================
static jobject create_CMND_TABLEFIELD(
															JNIEnv* pJEnv, 
															jint hjob, 
															PSCLLTABLEFIELD tableField
															)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/TableFieldCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(IIIILjava/awt/Rectangle;IILjava/lang/String;Ljava/awt/Rectangle;)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// make jstring for _pszContents
	jstring jContent = (*pJEnv).NewString((jchar*) tableField->_pszContents, (jsize)wcslen(tableField->_pszContents));
	
	// make jobject for _rcPaint
	// hint: converting RECT (C++) into Rectangle (Java)
	jclass clazzRectangle = pJEnv->FindClass("java/awt/Rectangle");
	jmethodID methodRectangle = pJEnv->GetMethodID(clazzRectangle, "<init>", "(IIII)V");
	
	CRect rectPaint(tableField->_rcPaint);
	jint xPaint = rectPaint.TopLeft().x;
	jint yPaint = rectPaint.TopLeft().y;
	jint widthPaint = rectPaint.Width();
	jint heightPaint = rectPaint.Height();
	jobject jPaint = pJEnv->NewObject(clazzRectangle, methodRectangle, (jint)xPaint, (jint)yPaint, (jint)widthPaint, (jint)heightPaint);
	
	CRect rectSpacing(tableField->_rcSpacing);
	jint xSpacing = rectSpacing.TopLeft().x;
	jint ySpacing = rectSpacing.TopLeft().y;
	jint widthSpacing = rectSpacing.Width();
	jint heightSpacing = rectSpacing.Height();
	jobject jSpacing = pJEnv->NewObject(clazzRectangle, methodRectangle, (jint)xSpacing, (jint)ySpacing, (jint)widthSpacing, (jint)heightSpacing);
	
	// init/create object
	jobject res = pJEnv->NewObject(
													clazz, 
													method, 
													hjob, 
													(jint)tableField->_nType, 
													(jint)(intptr_t)tableField->_hPaintDC,
													(jint)(intptr_t)tableField->_hRefDC,
													(jobject)jPaint, 
													(jint)tableField->_nLineDef, 
													(jint)tableField->_nIndex, 
													jContent,
													(jobject)jSpacing
													);
	return res;
}


// ===========================================================
static jobject create_CMND_TABLELINE(
														JNIEnv* pJEnv, 
														jint hjob, 
														PSCLLTABLELINE tableLine
														)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/TableLineCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(IIIILjava/awt/Rectangle;IIIZLjava/awt/Rectangle;)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// make jobject for _rcPaint
	// hint: converting RECT (C++) into Rectangle (Java)
	jclass clazzRectangle = pJEnv->FindClass("java/awt/Rectangle");
	jmethodID methodRectangle = pJEnv->GetMethodID(clazzRectangle, "<init>", "(IIII)V");
	
	CRect rectPaint(tableLine->_rcPaint);
	jint xPaint = rectPaint.TopLeft().x;
	jint yPaint = rectPaint.TopLeft().y;
	jint widthPaint = rectPaint.Width();
	jint heightPaint = rectPaint.Height();
	jobject jPaint = pJEnv->NewObject(clazzRectangle, methodRectangle, (jint)xPaint, (jint)yPaint, (jint)widthPaint, (jint)heightPaint);

	CRect rectSpacing(tableLine->_rcSpacing);
	jint xSpacing = rectSpacing.TopLeft().x;
	jint ySpacing = rectSpacing.TopLeft().y;
	jint widthSpacing = rectSpacing.Width();
	jint heightSpacing = rectSpacing.Height();
	jobject jSpacing = pJEnv->NewObject(clazzRectangle, methodRectangle, (jint)xSpacing, (jint)ySpacing, (jint)widthSpacing, (jint)heightSpacing);
	
	// init/create object
	jobject res = pJEnv->NewObject(
													clazz, 
													method, 
													hjob, 
													(jint)tableLine->_nType, 
													(jint)(intptr_t)tableLine->_hPaintDC,
													(jint)(intptr_t)tableLine->_hRefDC,
													(jobject)jPaint, 
													(jint)tableLine->_nPageLine, 
													(jint)tableLine->_nLine, 
													(jint)tableLine->_nLineDef, 
													BOOL2Java(tableLine->_bZebra), 
													(jobject)jSpacing
													);
	return res;
}


// ===========================================================
static jobject create_CMND_PROJECT(
														JNIEnv* pJEnv, 
														jint hjob, 
														PSCLLPROJECT project
														)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/ProjectCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(IZZIILjava/awt/Rectangle;)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// make jobject for _rcPaint
	// hint: converting RECT (C++) into Rectangle (Java)
	jclass clazzRectangle = pJEnv->FindClass("java/awt/Rectangle");
	jmethodID methodRectangle = pJEnv->GetMethodID(clazzRectangle, "<init>", "(IIII)V");
	
	CRect rect(project->_rcPaint);
	jint x = rect.TopLeft().x;
	jint y = rect.TopLeft().y;
	jint width = rect.Width();
	jint height = rect.Height();
	jobject jRectangle = pJEnv->NewObject(clazzRectangle, methodRectangle, (jint)x, (jint)y, (jint)width, (jint)height);
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, BOOL2Java(project->_bDesignerPreview), BOOL2Java(project->_bPreDraw), (jint)(intptr_t)project->_hPaintDC, (jint)(intptr_t)project->_hRefDC, (jobject)jRectangle);
	return res;
}


// ===========================================================
static jobject create_CMND_OBJECT(
													JNIEnv* pJEnv, 
													jint hjob, 
													PSCLLOBJECT object
													)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/ObjectCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(IILjava/lang/String;ZIILjava/awt/Rectangle;)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// make jstring for _pszName
	jstring jName = (*pJEnv).NewString((jchar*) object->_pszName, (jsize)wcslen(object->_pszName));
	
	// make jobject for _rcPaint
	// hint: converting RECT (C++) into Rectangle (Java)
	jclass clazzRectangle = pJEnv->FindClass("java/awt/Rectangle");
	jmethodID methodRectangle = pJEnv->GetMethodID(clazzRectangle, "<init>", "(IIII)V");
	
	CRect rect(object->_rcPaint);
	jint x = rect.TopLeft().x;
	jint y = rect.TopLeft().y;
	jint width = rect.Width();
	jint height = rect.Height();
	jobject jRectangle = pJEnv->NewObject(clazzRectangle, methodRectangle, (jint)x, (jint)y, (jint)width, (jint)height);
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, (jint)object->_nType, jName, BOOL2Java(object->_bPreDraw), (jint)(intptr_t)object->_hPaintDC, (jint)(intptr_t)object->_hRefDC, (jobject)jRectangle);
	return res;
}


// ===========================================================
static jobject create_CMND_SAVEFILENAME(
																JNIEnv* pJEnv, 
																jint hjob, 
																LPCTSTR sFileName
																)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/SaveFileNameCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(ILjava/lang/String;)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// make jstring
	jstring jFileName = (*pJEnv).NewString((jchar*) sFileName, (jsize)wcslen(sFileName));
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, jFileName);
	return res;
}


// ===========================================================
static jobject create_CMND_VARHELPTEXT(
																JNIEnv* pJEnv, 
																jint hjob, 
																LPCTSTR sVarDesc
																)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/VarHelpTextCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(ILjava/lang/String;)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// make jstring
	jstring jVarDesc = (*pJEnv).NewString((jchar*) sVarDesc, (jsize)wcslen(sVarDesc));
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, jVarDesc);
	return res;
}


// ===========================================================
static jobject create_CMND_EVALUATE(
									JNIEnv* pJEnv, 
									jint hjob, 
									PSCLLEXTFCT extFunction
									)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/EvaluateCallback");
	if(clazz == (jclass)0)
		return (jobject)0; // Class is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(ILjava/lang/String;ZLjava/lang/String;ZLjava/lang/String;)V");
	if(method == (jmethodID)0)
		return (jobject)0; // Constructor is not found
	
	// make jstring for _pszContents
	jstring jContents = (*pJEnv).NewString((jchar*) extFunction->_pszContents, (jsize)wcslen(extFunction->_pszContents));
	
	// make jboolean for _Evaluate
	jboolean jEvaluate = BOOL2Java(extFunction->_bEvaluate);
	
	// make jstring for _szNewValue
	jstring jNewValue = (*pJEnv).NewString((jchar*) extFunction->_szNewValue, (jsize)wcslen(extFunction->_szNewValue));
	
	// make jboolean for _bError
	jboolean jError = BOOL2Java(extFunction->_bError); // default: FALSE
	
	// make jstring for _szError
	jstring jErrorText = (*pJEnv).NewString((jchar*) extFunction->_szError, (jsize)wcslen(extFunction->_szError));
	
	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, jContents, jEvaluate, jNewValue, jError, jErrorText);
	return res;
}


// ===========================================================
static jobject create_NTFY_DESIGNERPRINTJOB(
											JNIEnv* pJEnv,
											jint hjob,
											PSCLLDESIGNERPRINTJOB dpj
											)
// ===========================================================
{
	jclass clazz = pJEnv->FindClass("combit/callbacks/NtfyDesignerPrintJobCallback");
	if (clazz == (jclass)0)
		return (jobject)0; // Class is not found

	jmethodID method = pJEnv->GetMethodID(clazz, "<init>", "(IILjava/lang/String;Ljava/lang/String;IIIILjava/lang/String;Z)V");
	if (method == (jmethodID)0)
		return (jobject)0; // Constructor is not found

	jstring jPrjFileName = NULL;
	if (dpj->_pszProjectFileName != NULL)
		jPrjFileName = (*pJEnv).NewString((jchar*)dpj->_pszProjectFileName, (jsize)wcslen(dpj->_pszProjectFileName));

	jstring jOrigPrjFileName = NULL;
	if (dpj->_pszOriginalProjectFileName != NULL)
		jOrigPrjFileName = (*pJEnv).NewString((jchar*)dpj->_pszOriginalProjectFileName, (jsize)wcslen(dpj->_pszOriginalProjectFileName));

	jstring jExportFormat = NULL;
	if (dpj->_pszExportFormat != NULL)
		jExportFormat = (*pJEnv).NewString((jchar*)dpj->_pszExportFormat, (jsize)wcslen(dpj->_pszExportFormat));

	jboolean jWithoutDialog = BOOL2Java(dpj->_bWithoutDialog);

	// init/create object
	jobject res = pJEnv->NewObject(clazz, method, hjob, (jint)dpj->_nUserParam, jPrjFileName, jOrigPrjFileName, (jint)dpj->_nPages,
		(jint)dpj->_nFunction, (intptr_t)dpj->_hWnd, (intptr_t)dpj->_hEvent, jExportFormat, jWithoutDialog);

	return res;
}

// Utility function: calls "notify" method of the callback object
static void executeCallback(JNIEnv* pJEnv, jobject callback, jobject value)
{
	if(value == (jobject)0)
		return;
	
	jclass clazz = pJEnv->FindClass("combit/callbacks/Callback");
	if(clazz == (jclass)0)
		return; // Callback interface is not found
	
	jmethodID method = pJEnv->GetMethodID(clazz, "notify", "(Lcombit/callbacks/CallbackInfo;)V");
	if(method == (jmethodID)0)
		return; // Callback method is not found
	
	pJEnv->CallVoidMethod(callback, method, value);
}


// Generic LL callback dispatcher
static LRESULT CALLBACK CallbackDispatcher(UINT wParam, LPARAM lParam, UINT_PTR lUserParam)
{
    jint hjob = (jint)lUserParam;
    JNIEnv* pJEnv = jni_env_registry.get(hjob);
	
	if (pJEnv == (JNIEnv*)0)
		return 0;
	
	jobject callback = jni_callback_registry.get(hjob);
	if (callback == (jobject)0)
		return 0;
	
	if (lUserParam == (UINT_PTR)0)
		return 0;
	
	LRESULT lReply = 0;
	switch(wParam)
    {
		case LL_NTFY_VIEWERBTNCLICKED:
		{
			// get callback-data from lParam
			INT nButtonID = (INT)lParam;
			
			// create 'combit.callbacks.ViewerBtnClickedCallback'-object from Java
			jobject cmndViewerBtnClicked = create_CMND_VIEWERBTNCLICKED(pJEnv, hjob, nButtonID);
			if(cmndViewerBtnClicked == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.ViewerBtnClickedCallback'-object in Java
			executeCallback(pJEnv, callback, cmndViewerBtnClicked);
			
			// now we have to get the value from 'lResult_' in Java
			// to set returnvalue from callback
			jclass classViewerBtnClicked = pJEnv->GetObjectClass(cmndViewerBtnClicked);
			jfieldID fieldIDLResult = pJEnv->GetFieldID(classViewerBtnClicked, "lResult_", "I");
			jint intLResult = pJEnv->GetIntField(cmndViewerBtnClicked, fieldIDLResult);
			lReply = (int)intLResult;
		}
		break;
		
		case LL_CMND_GETVIEWERBUTTONSTATE:
		{
			// get callback-data from lParam
			INT nButtonID = HIWORD(lParam);
			INT nButtonState = LOWORD(lParam);
			
			// create 'combit.callbacks.GetViewerButtonStateCallback'-object from Java
			jobject cmndGetViewerButtonState = create_CMND_GETVIEWERBUTTONSTATE(pJEnv, hjob, nButtonID, nButtonState);
			if(cmndGetViewerButtonState == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.GetViewerButtonStateCallback'-object in Java
			executeCallback(pJEnv, callback, cmndGetViewerButtonState);
			
			// now we have to get the value from 'lResult_' in Java
			// to set returnvalue from callback
			jclass classGetViewerButtonState = pJEnv->GetObjectClass(cmndGetViewerButtonState);
			jfieldID fieldIDLResult = pJEnv->GetFieldID(classGetViewerButtonState, "lResult_", "I");
			jint intLResult = pJEnv->GetIntField(cmndGetViewerButtonState, fieldIDLResult);
			lReply = (int)intLResult;
		}
		break;
		
		case LL_CMND_SELECTMENU:
		{
			// get callback-data from lParam
			INT nMenuID = (INT)lParam;
			
			// create 'combit.callbacks.SelectMenuCallback'-object from Java
			jobject cmndSelectMenu = create_CMND_SELECTMENU(pJEnv, hjob, nMenuID);
			if(cmndSelectMenu == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.SelectMenuCallback'-object in Java
			executeCallback(pJEnv, callback, cmndSelectMenu);
			
			// now we have to get the value from 'lResult_' in Java
			// to set returnvalue from callback
			jclass classSelectMenu = pJEnv->GetObjectClass(cmndSelectMenu);
			jfieldID fieldIDLResult = pJEnv->GetFieldID(classSelectMenu, "lResult_", "Z");
			jboolean booleanLResult = pJEnv->GetBooleanField(cmndSelectMenu, fieldIDLResult);
			lReply = Java2BOOL(booleanLResult);
		}
		break;
		
		case LL_CMND_ENABLEMENU:
		{
			// get callback-data from lParam
			HMENU hMenu = (HMENU)lParam;
			
			// create 'combit.callbacks.EnableMenuCallback'-object from Java
			jobject cmndEnableMenu = create_CMND_ENABLEMENU(pJEnv, hjob, hMenu);
			if(cmndEnableMenu == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.EnableMenuCallback'-object in Java
			executeCallback(pJEnv, callback, cmndEnableMenu);
			
			// if in Jave are some changes in callback-data, LL have to know them to evaluate the new callback-data
			// currently only the following callback-data are observed:
			// menuFlags
			
			// get class-object from 'combit.callbacks.EnableMenuCallback'
			jclass classEnableMenu = pJEnv->GetObjectClass(cmndEnableMenu);
			
			// get classvariable 'menuItems_' (HashMap) to access it
			jfieldID fieldIDHashMap = pJEnv->GetFieldID(classEnableMenu, "menuItems_", "Ljava/util/HashMap;");
			jobject objectHashMap = pJEnv->GetObjectField(cmndEnableMenu, fieldIDHashMap);
			jclass classHashMap = pJEnv->GetObjectClass(objectHashMap);
			
			// 'size' -> number if key-value mappings in hashmap
			jfieldID fieldIDSize = pJEnv->GetFieldID(classHashMap, "size", "I");
			jint intSize = pJEnv->GetIntField(objectHashMap, fieldIDSize);
			
			if((int)intSize > 0)
			{
				// get collection of mappings in hashmap
				jmethodID methodeIDEntrySet = pJEnv->GetMethodID(classHashMap, "entrySet", "()Ljava/util/Set;");
				jobject objectEntrySet = pJEnv->CallObjectMethod(objectHashMap, methodeIDEntrySet);
				
				// get iterator from mappings
				jclass classSet = pJEnv->GetObjectClass(objectEntrySet);
				jmethodID methodIDIterator = pJEnv->GetMethodID(classSet, "iterator", "()Ljava/util/Iterator;");
				jobject objectIterator = pJEnv->CallObjectMethod(objectEntrySet, methodIDIterator);
				
				// het methods 'hasNext' and 'next' from iterator to iterate the mappings
				jclass classIterator = pJEnv->GetObjectClass(objectIterator);
				jmethodID methodIDHasNext = pJEnv->GetMethodID(classIterator, "hasNext", "()Z");
				jmethodID methodIDNext = pJEnv->GetMethodID(classIterator, "next", "()Ljava/lang/Object;");
				
				// iterate the mappings
				while(Java2BOOL(pJEnv->CallBooleanMethod(objectIterator, methodIDHasNext)))
				{
					// get iter
					jobject objectIter = pJEnv->CallObjectMethod(objectIterator, methodIDNext);
					
					// we need the class-object for the mappings -> Map.Entry
					// and from the Map.Entry we need its key and value
					jclass clazzMapEntry = pJEnv->GetObjectClass(objectIter);
					jmethodID methodIDGetKey = pJEnv->GetMethodID(clazzMapEntry, "getKey", "()Ljava/lang/Object;");
					jmethodID methodIDGetValue = pJEnv->GetMethodID(clazzMapEntry, "getValue", "()Ljava/lang/Object;");
					jobject objectKey = pJEnv->CallObjectMethod(objectIter, methodIDGetKey);
					jobject objectValue = pJEnv->CallObjectMethod(objectIter, methodIDGetValue);
					
					// to get the values we need to get their integer-value
					jclass clazzInteger = pJEnv->FindClass("Ljava/lang/Integer;");
					jmethodID methodIDIntValue = pJEnv->GetMethodID(clazzInteger, "intValue", "()I");
					jint key = (jint)pJEnv->CallIntMethod(objectKey, methodIDIntValue);
					jint value = (jint)pJEnv->CallIntMethod(objectValue, methodIDIntValue);
					::EnableMenuItem(hMenu, (int)key, (int)value);
				}
			}
		}
		break;
		
		case LL_CMND_PAGE:
		{
			PSCLLPAGE page = (PSCLLPAGE)lParam;
			
			// create 'combit.callbacks.TableFieldCallback'-object from Java
			jobject cmndPage = create_CMND_PAGE(pJEnv, hjob, page);
			if(cmndPage == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.PageCallback'-object in Java
			executeCallback(pJEnv, callback, cmndPage);
		}
		break;
		
		case LL_CMND_SAVEFILENAME:
		{
			LPCTSTR sFileName = (LPCTSTR)lParam;
			
			// create 'combit.callbacks.SaveFileNameCallback'-object from Java
			jobject cmndSaveFileName = create_CMND_SAVEFILENAME(pJEnv, hjob, sFileName);
			if(cmndSaveFileName == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.SaveFileNameCallback'-object in Java
			executeCallback(pJEnv, callback, cmndSaveFileName);
		}
		break;
		
		case LL_CMND_TABLEFIELD:
		{
			// get callback-data from lParam
			PSCLLTABLEFIELD tableField = (PSCLLTABLEFIELD)lParam;
			
			// create 'combit.callbacks.TableFieldCallback'-object from Java
			jobject cmndTableField = create_CMND_TABLEFIELD(pJEnv, hjob, tableField);
			if(cmndTableField == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.TableFieldCallback'-object in Java
			executeCallback(pJEnv, callback, cmndTableField);
			
			// if in Jave are some changes in callback-data, LL have to know them to evaluate the new callback-data
			// currently only the following callback-data are observed:
			// _rcPaint
			
			// get class-object from 'combit.callbacks.TableFieldCallback'
			jclass classTableField = pJEnv->GetObjectClass(cmndTableField);
			
			// get fieldID from classvariable 'paint_' to access it
			jfieldID fieldID_rcPaint = pJEnv->GetFieldID(classTableField, "paint_", "Ljava/awt/Rectangle;");
			
			// get value from variable 'paint_'
			jobject fieldValue_rcPaint = pJEnv->GetObjectField(cmndTableField, fieldID_rcPaint);
			
			// get class from object 'fieldValue_rcPaint' and read its members to update the C++ values for LL
			
			// get class-object from 'java.awt.Rectangle'
			jclass classRectangle = pJEnv->GetObjectClass(fieldValue_rcPaint);
			
			// get fieldIDs from classvariables 'x', 'y', 'width' and 'height' to access them
			jfieldID fieldID_x = pJEnv->GetFieldID(classRectangle, "x", "I");
			jfieldID fieldID_y = pJEnv->GetFieldID(classRectangle, "y", "I");
			jfieldID fieldID_width = pJEnv->GetFieldID(classRectangle, "width", "I");
			jfieldID fieldID_height = pJEnv->GetFieldID(classRectangle, "height", "I");
			
			// get values from class-variables
			jint fieldValue_x = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_x);
			jint fieldValue_y = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_y);
			jint fieldValue_width = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_width);
			jint fieldValue_height = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_height);
			
			// set new rect
			tableField->_rcPaint.top = fieldValue_y;
			tableField->_rcPaint.left = fieldValue_x;
			tableField->_rcPaint.right = (LONG)fieldValue_x + (LONG)fieldValue_width;
			tableField->_rcPaint.bottom = (LONG)fieldValue_y + (LONG)fieldValue_height;
			
			// set returnvalue for this callback
			lReply = 0;
		}
		break;
		
		case LL_CMND_TABLELINE:
		{
			// get callback-data from lParam 
			PSCLLTABLELINE tableLine = (PSCLLTABLELINE)lParam;
			
			// create 'combit.callbacks.TableLineCallback'-object from Java
			jobject cmndTableLine = create_CMND_TABLELINE(pJEnv, hjob, tableLine);
			if(cmndTableLine == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.TableLineCallback'-object in Java
			executeCallback(pJEnv, callback, cmndTableLine);
			
			// if in Jave are some changes in callback-data, LL have to know them to evaluate the new callback-data
			// currently only the following callback-data are observed:
			// _rcPaint
			
			// get class-object from 'combit.callbacks.TableLineCallback'
			jclass classTableLine = pJEnv->GetObjectClass(cmndTableLine);
			
			// get fieldID from classvariable 'paint_' to access it
			jfieldID fieldID_rcPaint = pJEnv->GetFieldID(classTableLine, "paint_", "Ljava/awt/Rectangle;");
			
			// get value from variable 'paint_'
			jobject fieldValue_rcPaint = pJEnv->GetObjectField(cmndTableLine, fieldID_rcPaint);
			
			// get class from object 'fieldValue_rcPaint' and read its members to update the C++ values for LL
			
			// get class-object from 'java.awt.Rectangle'
			jclass classRectangle = pJEnv->GetObjectClass(fieldValue_rcPaint);
			
			// get fieldIDs from classvariables 'x', 'y', 'width' and 'height' to access them
			jfieldID fieldID_x = pJEnv->GetFieldID(classRectangle, "x", "I");
			jfieldID fieldID_y = pJEnv->GetFieldID(classRectangle, "y", "I");
			jfieldID fieldID_width = pJEnv->GetFieldID(classRectangle, "width", "I");
			jfieldID fieldID_height = pJEnv->GetFieldID(classRectangle, "height", "I");
			
			// get values from class-variables
			jint fieldValue_x = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_x);
			jint fieldValue_y = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_y);
			jint fieldValue_width = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_width);
			jint fieldValue_height = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_height);
			
			// set new rect
			tableLine->_rcPaint.top = fieldValue_y;
			tableLine->_rcPaint.left = fieldValue_x;
			tableLine->_rcPaint.right = (LONG)fieldValue_x + (LONG)fieldValue_width;
			tableLine->_rcPaint.bottom = (LONG)fieldValue_y + (LONG)fieldValue_height;
			
			// set returnvalue for this callback
			lReply = 0;
		}
		break;
		
		case LL_CMND_PROJECT:
		{
			// get callback-data from lParam 
			PSCLLPROJECT project = (PSCLLPROJECT)lParam;
			
			// create 'combit.callbacks.ProjectCallback'-object from Java
			jobject cmndProject = create_CMND_PROJECT(pJEnv, hjob, project);
			if(cmndProject == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.ProjectCallback'-object in Java
			executeCallback(pJEnv, callback, cmndProject);
			
			// if in Jave are some changes in callback-data, LL have to know them to evaluate the new callback-data
			// currently only the following callback-data are observed:
			// _rcPaint
			
			// get class-object from 'combit.callbacks.ProjectCallback'
			jclass classProject = pJEnv->GetObjectClass(cmndProject);
			
			// get fieldID from classvariable 'paint_' to access it
			jfieldID fieldID_rcPaint = pJEnv->GetFieldID(classProject, "paint_", "Ljava/awt/Rectangle;");
			
			// get value from variable 'paint_'
			jobject fieldValue_rcPaint = pJEnv->GetObjectField(cmndProject, fieldID_rcPaint);
			
			// get class from object 'fieldValue_rcPaint' and read its members to update the C++ values for LL
			
			// get class-object from 'java.awt.Rectangle'
			jclass classRectangle = pJEnv->GetObjectClass(fieldValue_rcPaint);
			
			// get fieldIDs from classvariables 'x', 'y', 'width' and 'height' to access them
			jfieldID fieldID_x = pJEnv->GetFieldID(classRectangle, "x", "I");
			jfieldID fieldID_y = pJEnv->GetFieldID(classRectangle, "y", "I");
			jfieldID fieldID_width = pJEnv->GetFieldID(classRectangle, "width", "I");
			jfieldID fieldID_height = pJEnv->GetFieldID(classRectangle, "height", "I");
			
			// get values from class-variables
			jint fieldValue_x = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_x);
			jint fieldValue_y = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_y);
			jint fieldValue_width = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_width);
			jint fieldValue_height = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_height);
			
			// set new rect
			project->_rcPaint.top = fieldValue_y;
			project->_rcPaint.left = fieldValue_x;
			project->_rcPaint.right = (LONG)fieldValue_x + (LONG)fieldValue_width;
			project->_rcPaint.bottom = (LONG)fieldValue_y + (LONG)fieldValue_height;
			
			// set returnvalue for this callback
			lReply = 0;
		}
		break;
		
		case LL_CMND_OBJECT:
		{
			// get callback-data from lParam 
			PSCLLOBJECT object = (PSCLLOBJECT)lParam;
			
			// create 'combit.callbacks.ObjectCallback'-object from Java
			jobject cmndObject = create_CMND_OBJECT(pJEnv, hjob, object);
			if(cmndObject == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.ObjectCallback'-object in Java
			executeCallback(pJEnv, callback, cmndObject);
			
			// if in Jave are some changes in callback-data, LL have to know them to evaluate the new callback-data
			// currently only the following callback-data are observed:
			// _rcPaint
			// _lResult -> returnvalue for callback. pending on _bPreDraw it could be 0 (okay) or 1 (hide object)
			
			// get class-object from 'combit.callbacks.ObjectCallback'
			jclass classObject = pJEnv->GetObjectClass(cmndObject);
			
		// _rcPaint	
			
			// get fieldID from classvariable 'paint_' to access it
			jfieldID fieldID_rcPaint = pJEnv->GetFieldID(classObject, "paint_", "Ljava/awt/Rectangle;");
			
			// get value from variable 'paint_'
			jobject fieldValue_rcPaint = pJEnv->GetObjectField(cmndObject, fieldID_rcPaint);
			
			// get class from object 'fieldValue_rcPaint' and read its members to update the C++ values for LL
			
			// get class-object from 'java.awt.Rectangle'
			jclass classRectangle = pJEnv->GetObjectClass(fieldValue_rcPaint);
			
			// get fieldIDs from classvariables 'x', 'y', 'width' and 'height' to access them
			jfieldID fieldID_x = pJEnv->GetFieldID(classRectangle, "x", "I");
			jfieldID fieldID_y = pJEnv->GetFieldID(classRectangle, "y", "I");
			jfieldID fieldID_width = pJEnv->GetFieldID(classRectangle, "width", "I");
			jfieldID fieldID_height = pJEnv->GetFieldID(classRectangle, "height", "I");
			
			// get values from class-variables
			jint fieldValue_x = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_x);
			jint fieldValue_y = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_y);
			jint fieldValue_width = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_width);
			jint fieldValue_height = pJEnv->GetIntField(fieldValue_rcPaint, fieldID_height);
			
			// set new rect
			object->_rcPaint.top = fieldValue_y;
			object->_rcPaint.left = fieldValue_x;
			object->_rcPaint.right = (LONG)fieldValue_x + (LONG)fieldValue_width;
			object->_rcPaint.bottom = (LONG)fieldValue_y + (LONG)fieldValue_height;
			
		// _lResult
			
			// get fieldID from classvariable 'preDraw_' to access it
			jfieldID fieldID_preDraw = pJEnv->GetFieldID(classObject, "preDraw_", "Z");
			
			// get value from variable 'preDraw_'
			jboolean fieldValue_preDraw = pJEnv->GetBooleanField(cmndObject, fieldID_preDraw);
			
			// set returnvalue for this callback; pending on callback-data 'preDraw'
			// because only if 'preDraw' is TRUE, it is possible to use the resultvalue
			if(Java2BOOL(fieldValue_preDraw))
			{
				// now we have to get the value from 'lResult_' in Java
				// here its possible to decide, if the object should be hided or not
				jfieldID fieldID_lResult = pJEnv->GetFieldID(classObject, "lResult_", "I");
				jint fieldValue_lResult = pJEnv->GetIntField(cmndObject, fieldID_lResult);
				lReply = (int)fieldValue_lResult;
			}
			else
				lReply = 0;
		}
		break;
		
		case LL_CMND_VARHELPTEXT:
		{
			// get callback-data from lParam 
			LPCTSTR sVarDesc = (LPCTSTR)lParam;
			
			// create 'combit.callbacks.VarHelpTextCallback'-object from Java
			jobject cmndVarHelpText = create_CMND_VARHELPTEXT(pJEnv, hjob, sVarDesc);
			if(cmndVarHelpText == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.VarHelpTextCallback'-object in Java
			executeCallback(pJEnv, callback, cmndVarHelpText);
			
			// get var 'description_' and read its "new" value
			jclass clazz = pJEnv->GetObjectClass(cmndVarHelpText);
			jfieldID fieldID = pJEnv->GetFieldID(clazz, "description_", "Ljava/lang/String;");
			jstring fieldValue = (jstring)pJEnv->GetObjectField(cmndVarHelpText, fieldID);
			
			static TCHAR szHelpText[4096];
			const jchar* pwszTempStr1 = pJEnv->GetStringChars(fieldValue, 0);
			
			_tcsncpy_s(szHelpText, 4096, (const WCHAR*)pwszTempStr1, _TRUNCATE);
			pJEnv->ReleaseStringChars(fieldValue, pwszTempStr1);
			
			// set returnvalue for this callback
			lReply = (LPARAM)(const TCHAR*)szHelpText;
		}
		break;

		case LL_CMND_EVALUATE:
		{
			// get callback-data from lParam 
			PSCLLEXTFCT extFunction = (PSCLLEXTFCT)lParam;
			
			// create 'combit.callbacks.EvaluateCallback'-object from Java
			jobject cmndEvaluate = create_CMND_EVALUATE(pJEnv, hjob, extFunction);
			if(cmndEvaluate == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;
			
			// call method 'notify' in 'combit.callbacks.EvaluateCallback'-object in Java
			executeCallback(pJEnv, callback, cmndEvaluate);
			
			// if in Jave are some changes in callback-data, LL have to know them to evaluate the new callback-data
			// currently only the following callback-data are observed:
			// _szNewValue
			// _bError
			// _szError
			
			//
			jclass classEvaluate = pJEnv->GetObjectClass(cmndEvaluate);
			
			// _szNewValue
			jfieldID fieldIDNewValue = pJEnv->GetFieldID(classEvaluate, "newValue_", "Ljava/lang/String;");
			jstring fieldValueNewValue = (jstring)pJEnv->GetObjectField(cmndEvaluate, fieldIDNewValue);
			
			const jchar* pwszTempStr1 = pJEnv->GetStringChars(fieldValueNewValue, 0);
			
			_tcsncpy_s(extFunction->_szNewValue, sizeof(extFunction->_szNewValue)/sizeof(WCHAR), (const WCHAR*)pwszTempStr1, _TRUNCATE);
			pJEnv->ReleaseStringChars(fieldValueNewValue, pwszTempStr1);
			
			// _bError
			jfieldID fieldIDError = pJEnv->GetFieldID(classEvaluate, "error_", "Z");
			jboolean booleanError = pJEnv->GetBooleanField(cmndEvaluate, fieldIDError);
			extFunction->_bError = Java2BOOL(booleanError);
			
			// _szError
			jfieldID fieldIDErrorText = pJEnv->GetFieldID(classEvaluate, "errorText_", "Ljava/lang/String;");
			jstring fieldValueErrorText = (jstring)pJEnv->GetObjectField(cmndEvaluate, fieldIDErrorText);
			
			const jchar* pwszTempStr2 = pJEnv->GetStringChars(fieldValueErrorText, 0);
			
			_tcsncpy_s(extFunction->_szError, sizeof(extFunction->_szError)/sizeof(WCHAR), (const WCHAR*)pwszTempStr2, _TRUNCATE);
			pJEnv->ReleaseStringChars(fieldValueErrorText, pwszTempStr2);
			
			// set returnvalue for this callback
			lReply = 0;
		}
		break;

		case LL_NTFY_DESIGNERPRINTJOB:
		{
			PSCLLDESIGNERPRINTJOB printJobInfo = (PSCLLDESIGNERPRINTJOB)lParam;
			jobject ntfyDesignerPrintJob = create_NTFY_DESIGNERPRINTJOB(pJEnv, hjob, printJobInfo);
			if (ntfyDesignerPrintJob == (jobject)0) // leave callback, because someting is wrong while creating the specfied constructor in java
				return lReply;

			// call method 'notify' in 'combit.callbacks.EvaluateCallback'-object in Java
			executeCallback(pJEnv, callback, ntfyDesignerPrintJob);

			jclass classNtfyDesignerPrintJob = pJEnv->GetObjectClass(ntfyDesignerPrintJob);

			jfieldID fieldIDError = pJEnv->GetFieldID(classNtfyDesignerPrintJob, "lResult_", "I");
			lReply = pJEnv->GetIntField(ntfyDesignerPrintJob, fieldIDError);
		}
		break;
    }
    return(lReply);
}

// "New" LL function that allow user add or remove callback to LlJob
JNIEXPORT jboolean JNICALL FCT(_LlSetNotificationCallback)(
															JNIEnv* pJEnv, 
															jobject /*oJObject*/, // unused
															jint LlJob,
															jobject callback
															)
{
	jboolean res = JNI_FALSE;
	if (callback == (jobject)0)
	{
		jobject global_callback = jni_callback_registry.rem(LlJob);
		if (global_callback != (jobject)0)
		{
			pJEnv->DeleteGlobalRef(global_callback);
			LlSetNotificationCallback((HJOB)LlJob, NULL);
			res = JNI_TRUE;
		}
	}
	else
	{
		jobject global_callback = pJEnv->NewGlobalRef(callback);
		if (global_callback != (jobject)0)
		{
			jni_callback_registry.add(LlJob, global_callback);
			LlSetNotificationCallback((HJOB)LlJob, (FARPROC)CallbackDispatcher);
			res = JNI_TRUE;
		}
	}
	return res;
}
