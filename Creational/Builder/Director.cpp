#include "Director.h"

EXAMPLE_BEGIN

void Director::Construct(Builder &builder)
{
	builder.BuildBody();
	builder.BuildHead();
	builder.BuildArm();
	builder.BuildHand();
	builder.BuildLeg();
	builder.BuildFeet();
}

EXAMPLE_END