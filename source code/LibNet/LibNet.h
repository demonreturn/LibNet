// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� LIBNET_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// LIBNET_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef LIBNET_EXPORTS
#define LIBNET_API __declspec(dllexport)
#else
#define LIBNET_API __declspec(dllimport)
#endif

// �����Ǵ� LibNet.dll ������
class LIBNET_API CLibNet {
public:
	CLibNet(void);
	// TODO: �ڴ�������ķ�����
};

extern LIBNET_API int nLibNet;

LIBNET_API int fnLibNet(void);
