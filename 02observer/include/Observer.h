#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Observer
{
    public:
    virtual void update(float temp, float humi, float pres) = 0;
};

#endif