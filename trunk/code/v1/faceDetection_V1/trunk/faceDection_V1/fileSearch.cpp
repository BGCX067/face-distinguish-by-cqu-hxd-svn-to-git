//������ѡ·���������������е�ͼƬ
#include "stdafx.h"
#include "fileSearch.h"

void PictureSearch( const CString& strDir){
	WIN32_FIND_DATA FindFileData;
    CString strDirTmp;
	strDirTmp = strDir;
	strDirTmp += "\\*.*";
	HANDLE hFind=::FindFirstFile(strDirTmp,&FindFileData);

	if(INVALID_HANDLE_VALUE == hFind)	
		return ;
	while(TRUE) {
		if(FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY){
			if(FindFileData.cFileName[0]!= _T('.')) {
				strDirTmp = strDir;
				strDirTmp += "\\";
				strDirTmp += FindFileData.cFileName;
				PictureSearch(strDirTmp) ;
			}
		}
		else{
			strDirTmp = strDir;
			strDirTmp += "\\";
			strDirTmp += FindFileData.cFileName;
			// vecFile.push_back(strDirTmp);
			int loc_temp=strDirTmp.ReverseFind('.');
			
			CString p=strDirTmp.Right(strDirTmp.GetLength()-loc_temp);
			p.MakeLower();
			if(loc_temp!=-1&&(!strcmp(".jpg",p)||!strcmp(".jpeg",p)||!strcmp(".bmp",p)||!strcmp(".gif",p)||!strcmp(".png",p)))
				picture_address <<  strDirTmp << endl ;
     		}
		if(!FindNextFile(hFind,&FindFileData))    
			break;
		
	}
	 
	 FindClose(hFind);
}

void fileSearch()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
    picture_address.open("d:\\�ҵ��ĵ�\\Visual Studio 2010\\Projects\\multiFolder\\multiFolder\\picture_address.txt") ;    
	PictureSearch((CString)"E:\\test") ;
    picture_address.close() ;
}
//
//CfileSearch::~CfileSearch()
//{
//	Free();
//}