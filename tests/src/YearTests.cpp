#include "gtest/gtest.h"

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