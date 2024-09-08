#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector < std::string > b) {
	bouquet = b;
	is_arranged = false;
	
}
void FlowersBouquet::arrange() {
	is_arranged = true;
}

void FlowersBouquet::ToPrint() {
	int i;
	for (i = 0; i < bouquet.size() - 1; i++) {
		std::cout << bouquet[i] << ", ";
	}
	std::cout << bouquet[i] << '.' << '\n';
}
