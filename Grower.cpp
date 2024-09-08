#include "Grower.h"

Grower::Grower(std::string Name,Gardener* g) : Person(Name) {
	gardener = g;
}
FlowersBouquet* Grower::prepareOrder(std::vector < std::string > flowers) {
	std::cout << "Grower " << getName() << " forwards the request to Gardener " << gardener->getName() << "." << '\n';
	FlowersBouquet* fb = gardener->prepareBouquet(flowers);
	std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << getName() <<"." << '\n';
	return fb;
		
}