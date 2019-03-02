
#include "factory_method.h"
#include "abstract_factory.h"


void factory_main()
{
    PizzaFactory *nyFactory = new NYPizzaFactory;
    PizzaFactory *chiFactory = new ChicagoPizzaFactory;
    Pizza *pizzaList[4] = {NULL};
    pizzaList[0] = nyFactory->createPizza();
    pizzaList[1] = chiFactory->createPizza();
    pizzaList[2] = nyFactory->createPizza();
    pizzaList[3] = chiFactory->createPizza();
    for (int i = 0; i < 4; i++) {
        if (pizzaList[i] == NULL) {
            break;
        }
        pizzaList[i]->show();
    }
}