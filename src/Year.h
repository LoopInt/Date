#ifndef YEAR_H
#define YEAR_H

class Year
{
public:
    Year();
    Year(int newValue);
    ~Year();

    void setValue(int newValue);
    int getValue() const;
    bool isLeap() const;
    unsigned int getNbDays() const;
    
private:
    int value;
};

#endif