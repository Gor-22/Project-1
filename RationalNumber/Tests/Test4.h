#pragma once
#include "../RationalNumber.h"
#include "Utils/CustomAsserts.h"

namespace test 
{
struct Test4 
{
    Test4()
    {
        numbers::RationalNumber<int> rationalNumber1(4, 3);
        numbers::RationalNumber<int> rationalNumber2(5);
        numbers::RationalNumber<int> rationalNumber3(19, 5);

        // In order to understand this part - first read about static_cast,
        // then read about casting operators overloading.
        assertFloatEqual(static_cast<double>(rationalNumber1), 1.3333333, __LINE__, __FILE__);
        assertFloatEqual(static_cast<float>(rationalNumber2), 5, __LINE__, __FILE__);
        assertFloatEqual(static_cast<int>(rationalNumber3), 3, __LINE__, __FILE__);
    }
};

static Test4 test4;
} // namespace test