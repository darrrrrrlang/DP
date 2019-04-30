
#include "ConcretePrototypeA.h"

EXAMPLE_BEGIN

NoticeCriticalError::NoticeCriticalError()
	:m_strTitle("Critical Error!"),
	m_strMessage("Critical Error Occured!")
{

}

std::shared_ptr<Notice> NoticeCriticalError::Clone() const
{
	std::shared_ptr<NoticeCriticalError> ptrNewNotice(new NoticeCriticalError());
	ptrNewNotice->m_strMessage = m_strMessage;
	ptrNewNotice->m_strTitle = m_strTitle;
	return ptrNewNotice;
}

const std::string &NoticeCriticalError::Title() const
{
	return m_strTitle;
}

const std::string &NoticeCriticalError::Message() const
{
	return m_strMessage;
}

EXAMPLE_END