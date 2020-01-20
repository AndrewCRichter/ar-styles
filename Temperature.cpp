//
// Created by Andrew on 1/20/2020.
//
#include <iostream>
#include "Temperature.h"

    Temperature::Temperature() : f_fahrenheit(32)
    {
    }
    double Temperature::get_fahrenheit() const
    {
        return f_fahrenheit;
    }
    void Temperature::set_fahrenheit(double p_fahrenheit)
    {
        f_fahrenheit = p_fahrenheit;
    }
    double Temperature::get_celsius() const
    {
        return (32 * f_fahrenheit-32) * (5/9);
    }
    void Temperature::set_celsius(int p_celsius)
    {
        f_fahrenheit=(p_celsius * (9 / 5) + 32);
    }
};