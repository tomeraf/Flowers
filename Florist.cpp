#include "Florist.h"

Florist::Florist(std::string Name,Wholesaler* w,FlowerArranger* f,DeliveryPerson* d):Person(Name) {
	wholesaler = w;
	flowerArranger = f;
	deliveryPerson = d;
	
}
void Florist::acceptOrder(Person* p, std::vector < std::string > flowers) {
	std::cout << "Florist " << getName() << " forwards request to Wholesaler " << wholesaler->getName() << "." << '\n';
	FlowersBouquet*  fb = wholesaler->acceptOrder(flowers);
	std::cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << getName() << "." << '\n';
	std::cout << "Florist " << getName() << " request flowers arrangement from Flower Arranger " << flowerArranger->getName() << "." << '\n';
	flowerArranger->arrangeFlowers(fb);
	std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << getName() << "." << '\n';
	std::cout << "Florist " << getName() << " forwards flowers to Delivery Person " << deliveryPerson->getName() << "." << '\n';
	deliveryPerson->deliver(p, fb);
}