#pragma once
#include "Prototype.h"
#include <map>

EXAMPLE_BEGIN

enum class NoticeType
{
	CRITICAL_ERROR,
	ILLEGAL_INPUT
};

class PrototypeManager
{
public:
	std::shared_ptr<Notice> CreateNotice(NoticeType eNoticeType);
private:
	void __InitType(NoticeType eNoticeType);
private:
	std::map<NoticeType, std::shared_ptr<Notice>> m_mapNotice;
};

EXAMPLE_END