#pragma once



struct font_xc_
{
	object_ object;
	//-----------------------
	HFONT     hFont;
	LOGFONTW   info;

	int    refCount; //���ü���,��ֵΪ0ʱ ���ٶ���
};

//�Ų�����,����������ĳ��Ԫ�ع�����,���Զ��ͷ�.


XC_API HFONTX WINAPI XFont_Create(int size);//��������
XC_API HFONTX WINAPI XFont_Create2(wchar_t *pName=L"����",int size=12,BOOL bBold=FALSE,BOOL bItalic=FALSE,BOOL bUnderline=FALSE,BOOL bStrikeOut=FALSE);
XC_API HFONTX WINAPI XFont_CreateEx(LOGFONTW *pFontInfo);
XC_API void  WINAPI XFont_Destroy(HFONTX hFontX);  //��������
XC_API HFONT WINAPI XFont_GetHFONT(HFONTX hFontX);



//˽�з���:
void  Font_AddFontX(HFONTX &hFontX,HFONTX hFontXNew); //������Ԫ�ع������������ü���
HFONTX Font_AddRef(HFONTX hFontX);   //�������ü���