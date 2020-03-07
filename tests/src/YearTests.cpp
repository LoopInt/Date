#include "gtest/gtest.h"

#define private public

#include "Year.h"

TEST(YearClass, emptyConstructor)
{
    Year year;
    ASSERT_EQ(year.value,0);
}