
// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // �ꕔ�� CString �R���X�g���N�^�[�͖����I�ł��B

// ��ʓI�Ŗ������Ă����S�� MFC �̌x�����b�Z�[�W�̈ꕔ�̔�\�����������܂��B
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC �̃R�A����ѕW���R���|�[�l���g
#include <afxext.h>         // MFC �̊g������





#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �R���� �R���g���[�� �T�|�[�g
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �R���� �R���g���[�� �T�|�[�g
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // MFC �ɂ����郊�{���ƃR���g���[�� �o�[�̃T�|�[�g









#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


//#include <stdio.h>
//#include <memory>
//#include <utility>
//#include <stdarg.h>
//#include <typeinfo>
#include <iostream>
//#include <strstream>
//#include <fstream> 
#include <vector>
#include <list>
#include <set>
//#include <map>
//#include <algorithm>
//#include <limits>
//#include <deque>
#include <regex>
#include <condition_variable>
#include <mutex>
#include <csignal>
#include <thread>
#include <string>

//#include <boost/algorithm/string/replace.hpp>
//#include <boost/any.hpp>
#include <boost/archive/iterators/base64_from_binary.hpp>
#include <boost/archive/iterators/binary_from_base64.hpp>
#include <boost/archive/iterators/transform_width.hpp>
#include <boost/archive/iterators/insert_linebreaks.hpp>
#include <boost/asio.hpp>
//#include <boost/asio/steady_timer.hpp>
#include <boost/asio/spawn.hpp>
//#include <boost/bind.hpp>
//#include <boost/chrono/chrono.hpp>
//#include <boost/core/null_deleter.hpp>
//#include <boost/cstdint.hpp>
//#include <boost/crc.hpp>
//#include <boost/enable_shared_from_this.hpp>
//#include <boost/function.hpp>
//#include <boost/lexical_cast.hpp>
//#include <boost/log/expressions.hpp>
//#include <boost/log/sinks.hpp>
//#include <boost/log/sinks/debug_output_backend.hpp>
//#include <boost/log/support/date_time.hpp>
//#include <boost/log/utility/setup/file.hpp>
//#include <boost/log/utility/setup/common_attributes.hpp>
//#include <boost/log/trivial.hpp>
#include <boost/noncopyable.hpp>
//#include <boost/math/special_functions/round.hpp>
//#include <boost/move/unique_ptr.hpp>
//#include <boost/optional.hpp>
#include <boost/program_options.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
//#include <boost/range.hpp>
//#include <boost/regex.hpp>
//#include <boost/shared_ptr.hpp>
//#include <boost/thread.hpp>
//#include <boost/thread/condition.hpp>
//#include <boost/tuple/tuple.hpp>
#include <boost/uuid/uuid.hpp>
//#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid_generators.hpp>
//#include <boost/version.hpp>
//#include <boost/weak_ptr.hpp>

