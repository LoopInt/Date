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

bool Year::isLeap()
{
    bool result = false;

    if(this->value % 400 == 0 ||
    (this->value % 4 == 0 && this->value % 100 !=0))
    {
        result = true;
    }

    return result;
}