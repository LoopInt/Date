#include "Year.h"

Year::Year():
value(0)
{

}

Year::Year(int newValue):
value(newValue)
{

}

Year::~Year()
{
       
}

void Year::setValue(int newValue)
{
    this->value=newValue;
}

int Year::getValue() const
{
    return this->value;
}

bool Year::isLeap() const 
{
    bool result = false;

    if(this->value % 400 == 0 ||
    (this->value % 4 == 0 && this->value % 100 !=0))
    {
        result = true;
    }

    return result;
}

unsigned int Year::getNbDays() const
{
    unsigned int nbDays = 365;

    if(this->isLeap())
    {
        nbDays = 366;
    }

    return nbDays;
}