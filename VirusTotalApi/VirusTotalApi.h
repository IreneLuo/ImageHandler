// �U�C ifdef �϶��O�إߥ����H��U�q DLL �ץX���зǤ覡�C
// �o�� DLL �����Ҧ��ɮ׳��O�ϥΩR�O�C���ҩw�q VIRUSTOTALAPI_EXPORTS �Ÿ��sĶ���C
// �b�R�O�C�w�q���Ÿ��C����M�׳������w�q�o�ӲŸ�
// �o�ˤ@�ӡA��l�{���ɤ��]�t�o�ɮת������L�M��
// �|�N VIRUSTOTALAPI_API �禡�����q DLL �פJ���A�ӳo�� DLL �h�|�N�o�ǲŸ�����
// �ץX���C
#ifdef VIRUSTOTALAPI_EXPORTS
#define VIRUSTOTALAPI_API __declspec(dllexport)
#else
#define VIRUSTOTALAPI_API __declspec(dllimport)
#endif

// �o�����O�O�q VirusTotalApi.dll �ץX��
class VIRUSTOTALAPI_API CVirusTotalApi {
public:
	CVirusTotalApi(void);
	// TODO:  �b���[�J�z����k�C
};

extern VIRUSTOTALAPI_API int nVirusTotalApi;

VIRUSTOTALAPI_API int fnVirusTotalApi(void);
