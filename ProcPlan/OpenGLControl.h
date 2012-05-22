#pragma once
#include "afxwin.h"
#include "Graphics.h"
#include <gl/GL.h>
#include <gl/GLU.h>

class COpenGLControl :
	public CWnd
{
public:
	/******************/
	/* Public Members */
	/******************/
	// Timer
	UINT_PTR m_unpTimer;

	float m_fPosX, m_fPosY;
	float m_fZoom, m_fRotX, m_fRotY;
	float m_fLastX, m_fLastY;
	bool m_bIsMaximized;

private:
	/*******************/
	/* Private Members */
	/*******************/
	// Window information
	CWnd *hWnd;
	HDC hdc;
	HGLRC hrc;
	int m_nPixelFormat;
	CRect m_rect;
	CRect m_oldWindow;
	CRect m_originalRect;
	Graphics* gr;
	Geometry* geom;

public:
	COpenGLControl(void);
	virtual ~COpenGLControl(void);
	void oglCreate(CRect rect, CWnd *parent, Geometry* g);
	void oglInitialize(void);
	void oglDrawScene(void);

	afx_msg void callOnSize(UINT nType, int cx, int cy);

	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDraw(CDC *pDC);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);

	DECLARE_MESSAGE_MAP()
};

