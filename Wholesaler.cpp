#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string Name,Grower* g):Person(Name){
	grower = g;
	
}
FlowersBouquet* Wholesaler::acceptOrder(std::vector < std::string > flowers)
{
		
	std::cout << "Wholesaler " << getName() << " forwards the request to Grower " << grower->getName() <<"."<< '\n';
	FlowersBouquet* fb = grower->prepareOrder(flowers);
	std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << getName() << "." << '\n';

	return fb;
}