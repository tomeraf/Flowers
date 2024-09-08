#include "FlowersBouquet.h"
#include "Person.h"
#include "Gardener.h"
#include "Grower.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include  "Florist.h"

int main(int argc, char* argv[]) {
	Person* Chris = new Person(std::string("Chris"));
	Person* Robin = new Person(std::string("Robin"));

	Gardener* Garett = new Gardener(std::string("Garett"));
	Grower* Gray = new Grower(std::string("Gray"), Garett);
	Wholesaler* Watson = new Wholesaler(std::string("Watson"), Gray);

	FlowerArranger* Flora = new FlowerArranger(std::string("Flora"));

	DeliveryPerson* Dylan = new DeliveryPerson(std::string("Dylan"));

	Florist* Fred = new Florist(std::string("Fred"), Watson, Flora, Dylan);

	std::vector < std::string > flowers;
	
	flowers.push_back(std::string("Roses"));
	flowers.push_back(std::string("Violets"));
	flowers.push_back(std::string("Gladiolus"));

	Chris->orderFlowers(Fred, Robin, flowers);

	delete Chris;
	delete Garett;
	delete Gray;
	delete Watson;
	delete Flora;
	delete Dylan;
	
}
