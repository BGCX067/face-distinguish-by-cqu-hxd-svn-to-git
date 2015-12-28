
// faceDection_V1View.cpp : CfaceDection_V1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "faceDection_V1.h"
#endif

#include "faceDection_V1Doc.h"
#include "faceDection_V1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include "ScanDlg.h"
// CfaceDection_V1View

IMPLEMENT_DYNCREATE(CfaceDection_V1View, CView)

BEGIN_MESSAGE_MAP(CfaceDection_V1View, CView)
	ON_COMMAND(ID_32772, &CfaceDection_V1View::On32772)
END_MESSAGE_MAP()

// CfaceDection_V1View 构造/析构

CfaceDection_V1View::CfaceDection_V1View()
{
	// TODO: 在此处添加构造代码

}

CfaceDection_V1View::~CfaceDection_V1View()
{
}

BOOL CfaceDection_V1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CfaceDection_V1View 绘制

void CfaceDection_V1View::OnDraw(CDC* /*pDC*/)
{
	CfaceDection_V1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CfaceDection_V1View 诊断

#ifdef _DEBUG
void CfaceDection_V1View::AssertValid() const
{
	CView::AssertValid();
}

void CfaceDection_V1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CfaceDection_V1Doc* CfaceDection_V1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CfaceDection_V1Doc)));
	return (CfaceDection_V1Doc*)m_pDocument;
}
#endif //_DEBUG


// CfaceDection_V1View 消息处理程序
//添加扫描
void CfaceDection_V1View::On32772()
{
	// TODO: 在此添加命令处理程序代码
	CScan scan;
	
	scan.DoModal();
	scan.myInit();
	//scan.myInit();
	/*选择目录 只能单目录选择
	//MAX_PATH默认值是260
	char szPath[MAX_PATH];     //存放选择的目录路径 
    CString str;

    ZeroMemory(szPath, sizeof(szPath));  

    BROWSEINFO bi;   
    bi.hwndOwner = m_hWnd;   
    bi.pidlRoot = NULL;   
    bi.pszDisplayName = szPath;   
    bi.lpszTitle = "请选择需要扫描的目录";   
    bi.ulFlags = 0;   
    bi.lpfn = NULL;   
    bi.lParam = 0;   
    bi.iImage = 0;   
 //弹出选择目录对话框
    LPITEMIDLIST lp = SHBrowseForFolder(&bi);  

    if(lp && SHGetPathFromIDList(lp, szPath))   
    {
        str.Format("选择的目录为 %s", szPath);
        AfxMessageBox(str);

        
    }
    else   
        AfxMessageBox("无效的目录，请重新选择");*/ 




}
