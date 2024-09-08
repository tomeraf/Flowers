#pragma once

#include "FlowersBouquet.h"
#include "Person.h"

class Gardener : public Person
{
public:
	Gardener(std::string);
	FlowersBouquet* prepareBouquet(std::vector < std::string >);
};


