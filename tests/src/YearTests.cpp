#include "gtest/gtest.h"
#include "isolator.h"

#define private public

#include "Year.h"

TEST(YearClass, emptyConstructor)
{
    Year year;
    ASSERT_EQ(year.value,0);
}

TEST(YearClass, valueConstructor)
{
    Year year(10);
    ASSERT_EQ(year.value,10);
}

TEST(YearClass, setValue)
{
    Year year;
    year.setValue(10);
    ASSERT_EQ(year.value,10);
}

TEST(YearClass, isLeap)
{
    Year year;
    year.value=2020;
    ASSERT_EQ(year.isLeap(),true);
    year.value=2008;
    ASSERT_EQ(year.isLeap(),true);
    year.value=2013;
    ASSERT_EQ(year.isLeap(),false);
}