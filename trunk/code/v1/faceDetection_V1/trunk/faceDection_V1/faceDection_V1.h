
// faceDection_V1.h : faceDection_V1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CfaceDection_V1App:
// �йش����ʵ�֣������ faceDection_V1.cpp
//

class CfaceDection_V1App : public CWinApp
{
public:
	CfaceDection_V1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CfaceDection_V1App theApp;
