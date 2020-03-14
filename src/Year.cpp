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