#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "Observer.h"

class Subject
{
    public:
    virtual void attachObserver(Observer *ob) = 0;
    virtual void detachObserver(Observer *ob) = 0;
    virtual void notifyObserver() = 0;
};

#endif