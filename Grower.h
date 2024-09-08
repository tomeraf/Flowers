#pragma once
#include "Gardener.h"

class Grower: public Person
{
private:
	Gardener*  gardener;
public:
	Grower(std::string,Gardener*);
	FlowersBouquet* prepareOrder(std::vector < std::string >);

};


