#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string Name):Person(Name){}
void FlowerArranger::arrangeFlowers(FlowersBouquet* fb) {
	std::cout << "Flower Arranger " << getName() << " arranges flowers." << '\n';
	fb->arrange();
}
