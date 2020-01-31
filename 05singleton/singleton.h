#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
#include <string>

class Singleton
{
    public:
    static Singleton* getInstance()
    {
        if(nullptr == instance)
        {
            instance =  new Singleton();
        }
        return instance;
    }

    void show()
    {
        std::cout<<name_<<std::endl;
    }
    void setName(std::string name)
    {
        name_ = name;
    }
    private:
    static Singleton *instance;
    std::string name_ = "singleton";
    Singleton(){}
    ~Singleton(){} 
};

#endif
