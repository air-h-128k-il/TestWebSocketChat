
// TestWebSocketChatGuiDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once

#include "ChatServer.h"

// CTestWebSocketChatGuiDlg �_�C�A���O
class CTestWebSocketChatGuiDlg : public CDialogEx
{
	boost::asio::io_service			m_ioService;
	std::unique_ptr<CChatServer>	m_upChatServer;

// �R���X�g���N�V����
public:
	CTestWebSocketChatGuiDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTWEBSOCKETCHATGUI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedButtonRun();
public:
	CString m_sPortNo;
};
