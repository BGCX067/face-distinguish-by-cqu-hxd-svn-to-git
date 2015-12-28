
// faceDection_V1View.h : CfaceDection_V1View 类的接口
//

#pragma once


class CfaceDection_V1View : public CView
{
protected: // 仅从序列化创建
	CfaceDection_V1View();
	DECLARE_DYNCREATE(CfaceDection_V1View)

// 特性
public:
	CfaceDection_V1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CfaceDection_V1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32772();
};

#ifndef _DEBUG  // faceDection_V1View.cpp 中的调试版本
inline CfaceDection_V1Doc* CfaceDection_V1View::GetDocument() const
   { return reinterpret_cast<CfaceDection_V1Doc*>(m_pDocument); }
#endif

