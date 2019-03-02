#ifndef _ABSTRACT_FATORY_H_
#define _ABSTRACT_FATORY_H_
#include<iostream>
/* 在工厂方法模式的基础上，工厂生产的产品变成了产品族。
 * 示例对象为生产披萨原料的工厂
 * 工厂可生产各种酱料
 */

class Sauce {
public:
    virtual void show() = 0;
};

class SauceA : public Sauce {
public:
    void show()
    {
        std::cout<<"sauceA"<<std::endl;
    }
};

class SauceB : public Sauce {
public:
    void show()
    {
        std::cout<<"sauceB"<<std::endl;
    }
};

class Cheese {
public:
    virtual void show() = 0;
};

class CheeseA : public Cheese {
public:
    void show()
    {
        std::cout<<"cheeseA"<<std::endl;
    }
};

class CheeseB : public Cheese {
public:
    void show()
    {
        std::cout<<"cheeseB"<<std::endl;
    }
};

class Pepper {
public:
    virtual void show() = 0;
};

class PepperA : public Pepper{
public:
    void show()
    {
        std::cout<<"pepperA"<<std::endl;
    }
};

class PepperB : public Pepper{
public:
    void show()
    {
        std::cout<<"pepperB"<<std::endl;
    }
};

class IngredientFactory {
public:
    virtual Sauce *createSauce() = 0;
    virtual Cheese *createCheese() = 0;
    virtual Pepper *createPepper() = 0;
};

class FactoryA : public IngredientFactory {
public:
    SauceA *createSauce()
    {
        return new SauceA;
    }

    CheeseA *createCheese()
    {
        return new CheeseA;
    }

    PepperA *createPepper()
    {
        return new PepperA;
    }
};

class FactoryB : public IngredientFactory {
public:
    SauceB *createSauce()
    {
        return new SauceB;
    }

    CheeseB *createCheese()
    {
        return new CheeseB;
    }

    PepperB *createPepper()
    {
        return new PepperB;
    }
};


#endif
