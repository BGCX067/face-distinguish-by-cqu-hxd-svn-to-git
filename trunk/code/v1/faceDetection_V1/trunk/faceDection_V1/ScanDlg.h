#pragma once
#include "afxcmn.h"
#include "folderTreeCtrl.h"
#include "folderList.h"
// CScan �Ի���

class CScan : public CDialog
{
	DECLARE_DYNAMIC(CScan)

public:
	CScan(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CScan();

// �Ի�������
	enum { IDD = IDD_SCAN };

//�ļ��б�
	//CListView m_list;
private:
   void CreateMyListView();
   

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	bool Save();
	void Load();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	
	void myInit();

	
	CFolderTreeCtrl m_tree;

	BOOL OnInitDialog();
	afx_msg void OnBnClickedSave();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedSaveAndScan();
};


