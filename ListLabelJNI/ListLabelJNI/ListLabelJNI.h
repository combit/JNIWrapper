// ListLabelJNI.h : main header file for the ListLabelJNI DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CListLabelJNIApp
// See ListLabelJNI.cpp for the implementation of this class
//

class CListLabelJNIApp : public CWinApp
{
public:
	CListLabelJNIApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};
