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
    
private:
    int value;
};

#endif