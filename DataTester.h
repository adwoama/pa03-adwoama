//
// Created by robot on 3/9/2021.
//

#ifndef PA03_TEMPLATE_DATATESTER_H
#define PA03_TEMPLATE_DATATESTER_H

#include <random>
#include <chrono>
#include <stdlib.h>
#include "include/sorting_library.h"
# include "DSString.h"
using namespace std;

class DataTester{
private:
    int size1 = 5000;
    int size2 = 15000;
    int size3 = 50000;
    int size4 = 100000;
    int size5 = 500000;
    int * data1;
    int * data2;
    int * data3;
    int * data4;
    int * data5;


    DSString output;
    ofstream outFS;
public:
    DataTester();
    DataTester(const DSString&);
    //TODO Destructor
    //TODO Copy constructor
    void resetData();
    void setOutFile(const DSString&);
    void timeSorts();

};
#endif //PA03_TEMPLATE_DATATESTER_H
