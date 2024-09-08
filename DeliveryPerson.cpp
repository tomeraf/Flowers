#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string Name) :Person(Name) {

}
void DeliveryPerson::deliver(Person* p , FlowersBouquet* fb) {
	std::cout << "Delivery Person " << getName() << " delivers flowers " << p->getName() << "." << '\n';
	p->acceptFlowers(fb);
	delete p;
}
