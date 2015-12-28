// Scan.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "faceDection_V1.h"
#include "ScanDlg.h"
#include "afxdialogex.h"
//#include <io.h>
//#include <direct.h>
//#include   <imagehlp.h> 
//#pragma   comment(lib, "imagehlp.lib ") 


// CScan �Ի���

IMPLEMENT_DYNAMIC(CScan, CDialog)

CScan::CScan(CWnd* pParent /*=NULL*/)
	: CDialog(CScan::IDD, pParent)
{

}
BOOL CScan::OnInitDialog(){
	BOOL ret=CDialog::OnInitDialog();
	
	return ret;
}
CScan::~CScan()
{
}

void CScan::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_tree);
	 m_tree.Init();
    //m_tree.AddDrive("D:\\"); // or use m_tree.AddAllDrive();
	 m_tree.AddAllDrive();
	 Load();
	
}
void CScan::myInit(){
	//this->DoModal();
	
}
void CScan::CreateMyListView()
{
   
	
 }

BEGIN_MESSAGE_MAP(CScan, CDialog)
	ON_BN_CLICKED(IDOK, &CScan::OnBnClickedSave)
	ON_BN_CLICKED(IDCANCEL, &CScan::OnBnClickedCancel)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &CScan::OnTvnSelchangedTree1)
	ON_BN_CLICKED(IDC_BUTTONSCAN, &CScan::OnBnClickedSaveAndScan)
END_MESSAGE_MAP()


// CScan ��Ϣ�������


void CScan::OnBnClickedSave()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CDialog::OnOK();
	if(	!Save()){
		MessageBox("����ʧ��");
	}
	/*if((int)ShellExecuteA(NULL,NULL,"DataScanedFile.ini",NULL,NULL,SW_SHOW)<=32)
		MessageBox("error");*/
	CDialog::EndDialog(IDOK);
	
}


void CScan::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	CDialog::OnCancel();
}


void CScan::OnBnClickedSaveAndScan()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if(	!Save()){
		MessageBox("����ʧ��");
	}

}
bool CScan::Save(){
	CFolderList FolderList;
	FolderList.AddFolderFromTree(&m_tree);
	
	DWORD dwAttr=GetFileAttributes("Data\\");
	//���ļ��в����ڣ������ļ���
	if(dwAttr==0xFFFFFFFF) 
		CreateDirectory("Data\\",NULL);
	return FolderList.SaveListInFile("Data\\ScanedFile.ini");
}
void  CScan::Load(){

	CFolderList FolderList;
	if(!FolderList.LoadListFromFile("Data\\ScanedFile.ini")){
	}else{
		FolderList.AddFolderInTree(&m_tree);
	}
}

void CScan::OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}


