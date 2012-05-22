
// MainWindow.h : header file
//

#pragma once

#include "stdafx.h"
#include "ProcessController.h"
#include "OpenGLControl.h"

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
public:
	afx_msg void OnFileImportstl();

private:
	ProcessController pCtrl;
	COpenGLControl m_oglWindow;

public:
	afx_msg void OnSolidDisplaymesh();
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
