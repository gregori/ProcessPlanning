
// MainWindow.h : header file
//

#pragma once


// MainWindow dialog
class MainWindow : public CDialogEx
{
// Construction
public:
	MainWindow(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_PROCPLAN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
