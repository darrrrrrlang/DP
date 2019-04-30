#include "ConcreteFactoryB.h"

#include <iostream>
using std::cout;
using std::endl;

EXAMPLE_BEGIN

PRIVATE_BEGIN

class BlackButton : public ButtonAbstract
{
public:
	void Push() override
	{
		cout << "Black button is pressed" << endl;
	}
};

class BlackLabel : public LabelAbstract
{
public:
	void SetText(const std::string &text)
	{
		cout << "Black label set to (" << text << ")" << endl;
	}
};

PRIVATE_END

std::shared_ptr<ButtonAbstract> BlackWndFactory::CreateButton()
{
	return std::shared_ptr<ButtonAbstract>(new BlackButton());
}

std::shared_ptr<LabelAbstract> BlackWndFactory::CreateLabel()
{
	return std::shared_ptr<LabelAbstract>(new BlackLabel());
}

EXAMPLE_END