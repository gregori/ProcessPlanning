#include "MFCMainWindow.h"

BEGIN_MESSAGE_MAP( MFCMainWindow, CFrameWnd)
     ON_COMMAND(ID_FILE_IMPORTSTL,OnFileImportSTL)
END_MESSAGE_MAP()
 

MFCMainWindow::MFCMainWindow(void)
{
	Create(NULL,"Process Planning");
    mainMenu.LoadMenu(IDR_MENU1);
    SetMenu(&mainMenu);
}

MFCMainWindow::~MFCMainWindow(void)
{
}

void MFCMainWindow::OnFileImportSTL(void)
{
	MessageBox("Clicked File->New");
}

