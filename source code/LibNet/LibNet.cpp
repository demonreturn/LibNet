// LibNet.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "LibNet.h"


// ���ǵ���������һ��ʾ��
LIBNET_API int nLibNet=0;

// ���ǵ���������һ��ʾ����
LIBNET_API int fnLibNet(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� LibNet.h
CLibNet::CLibNet()
{
	return;
}
