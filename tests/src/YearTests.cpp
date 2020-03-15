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

TEST(YearClass, getNbDays)
{
    Year year;
    year.value=2020;
    WHEN_CALLED(year.isLeap()).Return(true);
    ASSERT_EQ(year.getNbDays(),366);
    year.value=2008;
    WHEN_CALLED(year.isLeap()).Return(true);
    ASSERT_EQ(year.getNbDays(),366);
    year.value=2013;
    WHEN_CALLED(year.isLeap()).Return(false);
    ASSERT_EQ(year.getNbDays(),365);
}