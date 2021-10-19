//---------------------------------------------------------------------------
//
// Name:        MyAppApp.cpp
// Author:      JSVN
// Created:     09-06-2021 19:11:30
// Description: 
//
//---------------------------------------------------------------------------

#include "MyAppApp.h"
#include "MyAppFrm.h"

IMPLEMENT_APP(MyAppFrmApp)

bool MyAppFrmApp::OnInit()
{
    MyAppFrm* frame = new MyAppFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int MyAppFrmApp::OnExit()
{
	return 0;
}
