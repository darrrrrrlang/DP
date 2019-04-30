#include "ConcreteFactoryA.h"

#include <iostream>
using std::cout;
using std::endl;

EXAMPLE_BEGIN

namespace
{
	class BlueButton : public ButtonAbstract
	{
	public:
		void Push() override
		{
			cout << "Blue button is pressed" << endl;
		}
	};

	class BlueLabel : public LabelAbstract
	{
	public:
		void SetText(const std::string &text)
		{
			cout << "Blue label set to (" << text << ")" << endl;
		}
	};
}

std::shared_ptr<ButtonAbstract> BlueWndFactory::CreateButton()
{
	return std::shared_ptr<ButtonAbstract>(new BlueButton());
}

std::shared_ptr<LabelAbstract> BlueWndFactory::CreateLabel()
{
	return std::shared_ptr<LabelAbstract>(new BlueLabel());
}

EXAMPLE_END