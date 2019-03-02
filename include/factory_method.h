#ifndef _FACTORY_METHOD_H_
#define _FACTORY_METHOD_H_
#include<iostream>

//披萨工厂
class Pizza {
public:
    virtual void show() = 0;
};

class NYPizza : public Pizza {
public:
    void show()
    {
        std::cout<<"NYPizza"<<std::endl;
    }
};

class ChicagoPizza : public Pizza {
public:
    void show()
    {
        std::cout<<"ChicagoPizza"<<std::endl;
    }
};

class PizzaFactory {
public:
    virtual Pizza *createPizza() = 0;
};

class NYPizzaFactory : public PizzaFactory {
public:
    NYPizza *createPizza()
    {
        return new NYPizza;
    }
};

class ChicagoPizzaFactory : public PizzaFactory {
public:
    ChicagoPizza *createPizza()
    {
        return new ChicagoPizza;
    }
};

//缺点：工厂方法模式每增加一种披萨，会产生一个新的工厂类。



#endif