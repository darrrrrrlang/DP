#pragma once

#include "Prototype.h"
#include <string>

EXAMPLE_BEGIN

/*
具体的原型。
*/

class NoticeIllegalInput : public Notice
{
public:
	NoticeIllegalInput();
	std::shared_ptr<Notice> Clone() const override;
	const std::string &Title() const override;
	const std::string &Message() const override;
private:
	std::string m_strTitle;
	std::string m_strMessage;
};

EXAMPLE_END