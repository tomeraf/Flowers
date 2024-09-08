#pragma once
#include "flowerArranger.h"
#include "DeliveryPerson.h"
#include "Wholesaler.h"

class Florist : public Person
{
	private:
		Wholesaler* wholesaler;
		FlowerArranger* flowerArranger ;
		DeliveryPerson* deliveryPerson ;
	public:
		Florist(std::string,Wholesaler*,FlowerArranger*,DeliveryPerson*);
		void acceptOrder(Person*, std::vector < std::string >);


};
