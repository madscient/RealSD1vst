// �ȉ��� ifdef �u���b�N�� DLL ����̃G�N�X�|�[�g��e�Ղɂ���}�N�����쐬���邽�߂� 
// ��ʓI�ȕ��@�ł��B���� DLL ���̂��ׂẴt�@�C���́A�R�}���h ���C���Œ�`���ꂽ REALSD1VST_EXPORTS
// �V���{�����g�p���ăR���p�C������܂��B���̃V���{���́A���� DLL ���g�p����v���W�F�N�g�ł͒�`�ł��܂���B
// �\�[�X�t�@�C�������̃t�@�C�����܂�ł��鑼�̃v���W�F�N�g�́A 
// REALSD1VST_API �֐��� DLL ����C���|�[�g���ꂽ�ƌ��Ȃ��̂ɑ΂��A���� DLL �́A���̃}�N���Œ�`���ꂽ
// �V���{�����G�N�X�|�[�g���ꂽ�ƌ��Ȃ��܂��B
#ifdef REALSD1VST_EXPORTS
#define REALSD1VST_API __declspec(dllexport)
#else
#define REALSD1VST_API __declspec(dllimport)
#endif

// ���̃N���X�� RealSD1vst.dll ����G�N�X�|�[�g����܂����B
class REALSD1VST_API CRealSD1vst {
public:
	CRealSD1vst(void);
	// TODO: ���\�b�h�������ɒǉ����Ă��������B
};

extern REALSD1VST_API int nRealSD1vst;

REALSD1VST_API int fnRealSD1vst(void);
