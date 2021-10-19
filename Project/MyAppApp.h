//---------------------------------------------------------------------------
//
// Name:        MyAppApp.h
// Author:      JSVN
// Created:     09-06-2021 19:11:30
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __MYAPPFRMApp_h__
#define __MYAPPFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class MyAppFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
