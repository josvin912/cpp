///-----------------------------------------------------------------
///
/// @file      MyAppFrm.cpp
/// @author    JSVN
/// Created:   09-06-2021 19:11:31
/// @section   DESCRIPTION
///            MyAppFrm class implementation
///
///------------------------------------------------------------------

#include "MyAppFrm.h"
#include <Winbase.h>
#include<iostream>
#include <cwchar>
using namespace std;

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// MyAppFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(MyAppFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(MyAppFrm::OnClose)
	EVT_ACTIVATE(MyAppFrm::MyAppFrmActivate)
	EVT_BUTTON(ID_WXBUTTON1,MyAppFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

MyAppFrm::MyAppFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

MyAppFrm::~MyAppFrm()
{
}

void MyAppFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Click me"), wxPoint(106, 123), wxSize(86, 33), 0, wxDefaultValidator, _("WxButton1"));

	SetTitle(_("MyApp"));
	SetIcon(wxNullIcon);
	SetSize(220,43,320,334);
	Center();
	
	////GUI Items Creation End
}

void MyAppFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void MyAppFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	unsigned char value = getPowerStatus();
}

unsigned char MyAppFrm::getPowerStatus(){
    
    SYSTEM_POWER_STATUS status;
    if(GetSystemPowerStatus(&status)) {
    unsigned char battery = status.BatteryLifePercent;
    /* battery := 0..100 or 255 if unknown */
        /**if(battery == 255) {
            wchar_t msg[500];
            wsprintf(msg,L"Battery Level Unknown");
            MessageBox(0,(msg), _T("Success"), MB_OK);
        
        }
        else {
             wchar_t msg[500];
             wsprintf(msg,L"Battery Level is %d",battery);
             MessageBox(0,(msg), _T("Success"), MB_OK);
        }**/
     return battery;
    } 
    else {
        return -1;
    }
}

/*
 * MyAppFrmActivate
 */
void MyAppFrm::MyAppFrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxButton2Click
 */

