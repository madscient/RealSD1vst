// RealSD1vst.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"
#include "RealSD1vst.h"


// ����́A�G�N�X�|�[�g���ꂽ�ϐ��̗�ł��B
REALSD1VST_API int nRealSD1vst=0;

// ����́A�G�N�X�|�[�g���ꂽ�֐��̗�ł��B
REALSD1VST_API int fnRealSD1vst(void)
{
    return 42;
}

// ����́A�G�N�X�|�[�g���ꂽ�N���X�̃R���X�g���N�^�[�ł��B
// �N���X��`�Ɋւ��Ă� RealSD1vst.h ���Q�Ƃ��Ă��������B
CRealSD1vst::CRealSD1vst()
{
    return;
}
