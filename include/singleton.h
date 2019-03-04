#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include<iostream>

// 懒汉模式，在getInstance中创建实例
class Singleton {
public:
    static Singleton *getInstance()
    {
        if(inst == NULL) {
            inst = new Singleton;
        }
        return inst;
    }
private:
    Singleton()
    {
    }

    Singleton(const Singleton &);
    Singleton& operator=(const Singleton &);
    
    static Singleton *inst;
};



/* 饿汉模式，单例类定义时就将Singleton实例构造好了，Singleton *Singleton::inst = new Singleton();
 * 多线程常用饿汉模式，以空间换取时间，避免不断的加锁
 */

class HungrySingleton {
public:
    static HungrySingleton *getInstance()
    {
        return inst;
    }
private:
    HungrySingleton(){};
    HungrySingleton(const HungrySingleton&);
    HungrySingleton& operator=(const HungrySingleton&);
    static HungrySingleton *inst;
};

//函数内部静态变量实现的懒汉单例模式,不需要初始化
class LazySingleton {
public:
    static LazySingleton *getInstance()
    {
        // lock()
        static LazySingleton inst;
        // unlock()
        return &inst;
    }
private:
    LazySingleton(){};
    LazySingleton(const LazySingleton&);
    LazySingleton& operator=(const LazySingleton&);
};

#endif
