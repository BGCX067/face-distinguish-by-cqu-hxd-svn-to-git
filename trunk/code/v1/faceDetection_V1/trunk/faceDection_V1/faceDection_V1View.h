
// faceDection_V1View.h : CfaceDection_V1View ��Ľӿ�
//

#pragma once


class CfaceDection_V1View : public CView
{
protected: // �������л�����
	CfaceDection_V1View();
	DECLARE_DYNCREATE(CfaceDection_V1View)

// ����
public:
	CfaceDection_V1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CfaceDection_V1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32772();
};

#ifndef _DEBUG  // faceDection_V1View.cpp �еĵ��԰汾
inline CfaceDection_V1Doc* CfaceDection_V1View::GetDocument() const
   { return reinterpret_cast<CfaceDection_V1Doc*>(m_pDocument); }
#endif

