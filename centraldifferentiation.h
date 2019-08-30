#ifndef CENTRALDIFFERENTIATION_H
#define CENTRALDIFFERENTIATION_H
#include <vector>
#include <iostream>

struct dataOfIndex{
    long index1;
    long index2;
};

double derivate(std::vector<double> x, std::vector<double> y, double x0);
dataOfIndex binarySearch(std::vector<double> x, double x0);

#endif // CENTRALDIFFERENTIATION_H
