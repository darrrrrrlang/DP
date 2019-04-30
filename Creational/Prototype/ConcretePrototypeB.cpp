
#include "ConcretePrototypeB.h"

EXAMPLE_BEGIN

NoticeIllegalInput::NoticeIllegalInput()
	:m_strTitle("Warning"), 
	m_strMessage("Illegal Input!")
{

}

std::shared_ptr<Notice> NoticeIllegalInput::Clone() const
{
	std::shared_ptr<NoticeIllegalInput> ptrNewNotice(new NoticeIllegalInput());
	ptrNewNotice->m_strMessage = m_strMessage;
	ptrNewNotice->m_strTitle = m_strTitle;
	return ptrNewNotice;
}

const std::string &NoticeIllegalInput::Title() const
{
	return m_strTitle;
}

const std::string &NoticeIllegalInput::Message() const
{
	return m_strMessage;
}

EXAMPLE_END