#ifndef YEAR_H
#define YEAR_H

class Year
{
public:
    Year();
    Year(int newValue);
    ~Year();

    void setValue(int newValue);
    bool isLeap();
    unsigned int getNbDays();
    
private:
    int value;
};

#endif