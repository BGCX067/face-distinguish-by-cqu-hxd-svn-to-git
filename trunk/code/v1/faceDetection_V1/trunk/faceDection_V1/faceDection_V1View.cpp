
// faceDection_V1View.cpp : CfaceDection_V1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CfaceDection_V1View ����/����

CfaceDection_V1View::CfaceDection_V1View()
{
	// TODO: �ڴ˴���ӹ������

}

CfaceDection_V1View::~CfaceDection_V1View()
{
}

BOOL CfaceDection_V1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CfaceDection_V1View ����

void CfaceDection_V1View::OnDraw(CDC* /*pDC*/)
{
	CfaceDection_V1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CfaceDection_V1View ���

#ifdef _DEBUG
void CfaceDection_V1View::AssertValid() const
{
	CView::AssertValid();
}

void CfaceDection_V1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CfaceDection_V1Doc* CfaceDection_V1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CfaceDection_V1Doc)));
	return (CfaceDection_V1Doc*)m_pDocument;
}
#endif //_DEBUG


// CfaceDection_V1View ��Ϣ�������
//���ɨ��
void CfaceDection_V1View::On32772()
{
	// TODO: �ڴ���������������
	CScan scan;
	
	scan.DoModal();
	scan.myInit();
	//scan.myInit();
	/*ѡ��Ŀ¼ ֻ�ܵ�Ŀ¼ѡ��
	//MAX_PATHĬ��ֵ��260
	char szPath[MAX_PATH];     //���ѡ���Ŀ¼·�� 
    CString str;

    ZeroMemory(szPath, sizeof(szPath));  

    BROWSEINFO bi;   
    bi.hwndOwner = m_hWnd;   
    bi.pidlRoot = NULL;   
    bi.pszDisplayName = szPath;   
    bi.lpszTitle = "��ѡ����Ҫɨ���Ŀ¼";   
    bi.ulFlags = 0;   
    bi.lpfn = NULL;   
    bi.lParam = 0;   
    bi.iImage = 0;   
 //����ѡ��Ŀ¼�Ի���
    LPITEMIDLIST lp = SHBrowseForFolder(&bi);  

    if(lp && SHGetPathFromIDList(lp, szPath))   
    {
        str.Format("ѡ���Ŀ¼Ϊ %s", szPath);
        AfxMessageBox(str);

        
    }
    else   
        AfxMessageBox("��Ч��Ŀ¼��������ѡ��");*/ 




}
