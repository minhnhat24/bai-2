
// vehinh.h : main header file for the vehinh application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CvehinhApp:
// See vehinh.cpp for the implementation of this class
//

class CvehinhApp : public CWinApp
{
public:
	CvehinhApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CvehinhApp theApp;
