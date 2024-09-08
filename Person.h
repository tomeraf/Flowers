#pragma once
#include "FlowersBouquet.h"
class Florist;


class Person
{
	private:
		std::string name;
	public:
		Person(std::string);
		std::string getName();
		void orderFlowers(Florist*, Person*, std::vector < std::string >);
		void acceptFlowers(FlowersBouquet*);
};
