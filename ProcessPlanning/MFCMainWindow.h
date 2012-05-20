#pragma once

#include <afxwin.h>
#include "resource.h"
using namespace ProcessPlanning;

class MFCMainWindow :
	public CFrameWnd
{
private:
	CMenu mainMenu;

public:
	MFCMainWindow(void);
	~MFCMainWindow(void);

	DECLARE_MESSAGE_MAP()
 
	void OnFileImportSTL(void);

};

