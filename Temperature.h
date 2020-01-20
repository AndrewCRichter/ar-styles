//
// Created by Andrew on 1/20/2020.
//

#ifndef LAB1_CS120_TEMPERATURE_H
#define LAB1_CS120_TEMPERATURE_H

/*
 * This program contains:
 * The Temperature class.
 *
 *
 */

class Temperature
{
private:
    double f_fahrenheit;
public:
    Temperature() : f_fahrenheit(32){};
    double get_fahrenheit() const{};
    void set_fahrenheit(double p_fahrenheit){};
    //TODO NEED TO FIX
    double get_celsius() const{};
    //TODO NEED TO FIX
    void set_celsius(int p_celsius){};
};
#endif //LAB1_CS120_TEMPERATURE_H
