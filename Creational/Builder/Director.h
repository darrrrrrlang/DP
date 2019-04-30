#pragma once

#include <string>
#include <Public/DesignPatterns.h>
#include "Builder.h"

EXAMPLE_BEGIN

class Director
{
public:
	void Construct(Builder &builder);
};

EXAMPLE_END