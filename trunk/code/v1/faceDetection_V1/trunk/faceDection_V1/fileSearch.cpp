//根据所选路径，查找下面所有的图片
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
	// TODO: 在此添加控件通知处理程序代码
    picture_address.open("d:\\我的文档\\Visual Studio 2010\\Projects\\multiFolder\\multiFolder\\picture_address.txt") ;    
	PictureSearch((CString)"E:\\test") ;
    picture_address.close() ;
}
//
//CfileSearch::~CfileSearch()
//{
//	Free();
//}