#pragma once
#include <vector>
#include <string>
#include <iostream>
class FlowersBouquet
{
private:
	std::vector < std::string > bouquet;
	bool is_arranged;
public:
	FlowersBouquet(std::vector<std::string>);
	 
	void arrange();
	void ToPrint();
};

