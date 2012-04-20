#include <afxwin.h>

class MFC_Tutorial_Window: public CFrameWnd
{
public:
	MFC_Tutorial_Window()
	{
		Create(NULL, "MFC Tutorial Part 1 CoderSourceWindow");
	}
};

class MyApp: public CWinApp
{
	MFC_Tutorial_Window *wnd;
public:
	BOOL InitInstance()
	{
		wnd = new MFC_Tutorial_Window();
		m_pMainWnd = wnd;
		m_pMainWnd->ShowWindow(SW_SHOW);
		return TRUE;
	}
};

MyApp theApp;