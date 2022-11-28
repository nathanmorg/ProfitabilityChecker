#include "Building.h"

#include <math.h>

Building::Building(int buildingPrice, int averageRent, int numberOfUnits) {
    price = buildingPrice;
    rent = averageRent;
    units = numberOfUnits;
}
int Building::getDownPayment() {
    return (price * .2) + (price * .03);
}
//Calculates total expenses given building properties and base values
int Building::getExpenses() {
    int expenses, propertyTax, insurance, repairs, utilities, mortgage;
    propertyTax = price * 0.0253;
    insurance = units * 400;
    repairs = units * 1200;
    utilities = units * 1200;
    mortgage = calcMortgage() * 12;
    return mortgage + utilities + repairs + insurance + propertyTax;
}

//Calculates total rents from 12 months
int Building::getRents() {
    return rent * units * 12;
}

//Calculates estimated profitability based on rents and expenses
int Building::getProfit() {
    return getRents() - getExpenses();
}

//Calculates the monthly mortgage payment
double Building::calcMortgage() {
    int p = price - (price * .2);
    int n = 30 * 12;
    double r = 0.04375 / 12;
    double rateExp = pow((r + 1), -n);
    return p * r / (1 - rateExp);
}