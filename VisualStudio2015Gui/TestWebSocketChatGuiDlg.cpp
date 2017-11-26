
// TestWebSocketChatGuiDlg.cpp : �����t�@�C��
//

#include "stdafx.h"
#include "TestWebSocketChatGui.h"
#include "TestWebSocketChatGuiDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestWebSocketChatGuiDlg �_�C�A���O

CTestWebSocketChatGuiDlg::CTestWebSocketChatGuiDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TESTWEBSOCKETCHATGUI_DIALOG, pParent)
	, m_sPortNo(_T("11111"))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestWebSocketChatGuiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PORTNO, m_sPortNo);
}

BEGIN_MESSAGE_MAP(CTestWebSocketChatGuiDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_RUN, &CTestWebSocketChatGuiDlg::OnBnClickedButtonRun)
	ON_WM_DESTROY()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CTestWebSocketChatGuiDlg ���b�Z�[�W �n���h���[

BOOL CTestWebSocketChatGuiDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���̃_�C�A���O�̃A�C�R����ݒ肵�܂��B�A�v���P�[�V�����̃��C�� �E�B���h�E���_�C�A���O�łȂ��ꍇ�A
	//  Framework �́A���̐ݒ�������I�ɍs���܂��B
	SetIcon(m_hIcon, TRUE);			// �傫���A�C�R���̐ݒ�
	SetIcon(m_hIcon, FALSE);		// �������A�C�R���̐ݒ�

	// TODO: �������������ɒǉ����܂��B
	SetTimer(1, 1, nullptr );

	return TRUE;  // �t�H�[�J�X���R���g���[���ɐݒ肵���ꍇ�������ATRUE ��Ԃ��܂��B
}

// �_�C�A���O�ɍŏ����{�^����ǉ�����ꍇ�A�A�C�R����`�悷�邽�߂�
//  ���̃R�[�h���K�v�ł��B�h�L�������g/�r���[ ���f�����g�� MFC �A�v���P�[�V�����̏ꍇ�A
//  ����́AFramework �ɂ���Ď����I�ɐݒ肳��܂��B

void CTestWebSocketChatGuiDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �`��̃f�o�C�X �R���e�L�X�g

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// �N���C�A���g�̎l�p�`�̈���̒���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �A�C�R���̕`��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ���[�U�[���ŏ��������E�B���h�E���h���b�O���Ă���Ƃ��ɕ\������J�[�\�����擾���邽�߂ɁA
//  �V�X�e�������̊֐����Ăяo���܂��B
HCURSOR CTestWebSocketChatGuiDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CTestWebSocketChatGuiDlg::OnDestroy() 
{
	__super::OnDestroy();

	// TODO: ���̈ʒu�Ƀ��b�Z�[�W �n���h���p�̃R�[�h��ǉ����Ă�������
	m_upChatServer.reset();

}

void CTestWebSocketChatGuiDlg::OnTimer(UINT_PTR nIDEvent)
{
	try{
		m_ioService.poll();
	}catch(std::exception& e){
		std::cerr << "Exception: " << e.what() << "\n";
	}
}


void CTestWebSocketChatGuiDlg::OnBnClickedButtonRun()
{
	if( m_upChatServer ){
		m_upChatServer.reset();
	}else{
		uint16_t nPortNo = static_cast<uint16_t>(std::stoi(std::wstring(m_sPortNo)));
		boost::asio::ip::tcp::endpoint ep( boost::asio::ip::tcp::v4(), nPortNo );
		m_upChatServer = std::make_unique<CChatServer>(m_ioService,ep);
	}
}
