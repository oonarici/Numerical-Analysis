#include "centraldifferentiation.h"

double
derivate(std::vector<double> x, std::vector<double> y, double x0){

    if (x[x.size() -1] < x0 || x[0] > x0 ){
        std::cout << "Out of range\n";
        return NULL;
    }

    dataOfIndex data = binarySearch(x, x0);
    double result = (y[data.index2] - y[data.index1]) / (x[data.index2] - x[data.index1]);
    return result;
}

dataOfIndex
binarySearch(std::vector<double> x, double x0){

    dataOfIndex data;
    long int startingPoint = 0;
    long int endPoint = x.size() - 1;

    for (int i = 0; i < 1000; i++){

        long midPoint = abs((startingPoint + endPoint) / 2);
        if (x0 > x[midPoint]){
            startingPoint = midPoint;
        } else
            endPoint = midPoint;
        data.index1 = startingPoint;
        data.index2 = endPoint;
    }
    return data;
}

