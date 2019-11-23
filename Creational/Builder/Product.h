#pragma once

#include <Public/DesignPatterns.h>
#include <string>

EXAMPLE_BEGIN

class Product
{
};

/*
这里创建一个Person，作为Builder模式的Product。
其具有固定的创建过程，但每个过程的变化较大，且过程之间可能存在依赖关系。
*/

class Person : public Product
{
public:
	const std::string &head() const { return m_head; }
	const std::string &body() const { return m_body; }
	const std::string &arm() const { return m_arm; }
	const std::string &hand() const { return m_hand; }
	const std::string &leg() const { return m_leg; }
	const std::string &feet() const { return m_feet; }

	void setHead(const std::string &strHead) { m_head = strHead; }
	void setBody(const std::string &strBody) { m_body = strBody; }
	void setArm(const std::string &strArm) { m_arm = strArm; }
	void setHand(const std::string &strHand) { m_hand = strHand; }
	void setLeg(const std::string &strLeg) { m_leg = strLeg; }
	void setFeet(const std::string &strFoot) { m_feet = strFoot; }

	void show() const;
private:
	std::string m_head;
	std::string m_body;
	std::string m_arm;
	std::string m_hand;
	std::string m_leg;
	std::string m_feet;
};

EXAMPLE_END