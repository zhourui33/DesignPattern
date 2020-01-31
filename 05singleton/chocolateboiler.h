#pragma once

class ChocolateBoiler
{
    public:
    static ChocolateBoiler* getInstance()
    {
        if(nullptr == cbInstance)
        {
            cbInstance =  new ChocolateBoiler();
        }
        return cbInstance;
    }

    void fill()
    {
        if(empty)
        {
            empty = false;
            boiled = false;
        }
    }
    private:
    bool empty;
    bool boiled;
    static ChocolateBoiler *cbInstance;
    ChocolateBoiler()
    {
        empty = true;
        boiled = false;
    }
};