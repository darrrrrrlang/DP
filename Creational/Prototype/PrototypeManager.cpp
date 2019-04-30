#include "PrototypeManager.h"
#include "ConcretePrototypeA.h"
#include "ConcretePrototypeB.h"

EXAMPLE_BEGIN

std::shared_ptr<Notice> PrototypeManager::CreateNotice(NoticeType eNoticeType)
{
	auto it = m_mapNotice.find(eNoticeType);
	if (it == m_mapNotice.cend())
	{
		__InitType(eNoticeType);
	}

	auto it_again = m_mapNotice.find(eNoticeType);
	return it_again->second->Clone();
}


void PrototypeManager::__InitType(NoticeType eNoticeType)
{
	std::shared_ptr<Notice> ptrNewNotice;
	switch (eNoticeType)
	{
	case NoticeType::CRITICAL_ERROR:
		ptrNewNotice.reset(new NoticeCriticalError());
		break;
	case NoticeType::ILLEGAL_INPUT:
		ptrNewNotice.reset(new NoticeIllegalInput());
		break;
	default:
		break;
	}
	if (ptrNewNotice != nullptr)
		m_mapNotice[eNoticeType] = ptrNewNotice;
}

EXAMPLE_END