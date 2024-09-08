#include "Person.h"
#include "Florist.h"

Person::Person(std::string Name) {
	name = Name;
}
std::string Person::getName() { return name; }
void Person::orderFlowers(Florist* f, Person* op, std::vector < std::string > flowers)
{
	FlowersBouquet* fb = new FlowersBouquet(flowers);
	std::cout << name << " orders flowers to " << op->getName() << " from Florist " << f->getName() << ":";
	fb->ToPrint();
	f->acceptOrder(op, flowers);
	delete f;
	
	
}

void Person::acceptFlowers(FlowersBouquet* fb) {
	std::cout << getName() << " accepts the flowers: ";
	fb->ToPrint(); 
	delete fb;
}