#include "Gardener.h"

Gardener::Gardener(std::string Name):Person(Name){}
FlowersBouquet* Gardener::prepareBouquet(std::vector < std::string > flowers) {
	std::cout << "Gardener " << getName() << " prepares flowers." << '\n';
	return new FlowersBouquet(flowers);
}