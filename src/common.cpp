
#include "factory_method.h"
#include "abstract_factory.h"
#include "singleton.h"

Singleton *Singleton::inst = NULL;
HungrySingleton *HungrySingleton::inst = new HungrySingleton;

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

void singleton_main()
{
    Singleton *a = Singleton::getInstance();
    Singleton *b = Singleton::getInstance();
    LazySingleton *c = LazySingleton::getInstance();
    LazySingleton *d = LazySingleton::getInstance();
    std::cout<<"a="<<a<<std::endl;
    std::cout<<"b="<<b<<std::endl;
    std::cout<<"c="<<c<<std::endl;
    std::cout<<"d="<<d<<std::endl;
}