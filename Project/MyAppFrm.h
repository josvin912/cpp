///-----------------------------------------------------------------
///
/// @file      MyAppFrm.h
/// @author    JSVN
/// Created:   09-06-2021 19:11:30
/// @section   DESCRIPTION
///            MyAppFrm class declaration
///
///------------------------------------------------------------------

#ifndef __MYAPPFRM_H__
#define __MYAPPFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef MyAppFrm_STYLE
#define MyAppFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class MyAppFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		unsigned char getPowerStatus();
		
	public:
		MyAppFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("MyApp"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = MyAppFrm_STYLE);
		virtual ~MyAppFrm();
		void WxButton1Click(wxCommandEvent& event);
		void MyAppFrmActivate(wxActivateEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *WxButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
