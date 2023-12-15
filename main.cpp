#include <iostream>
#include <chrono>
#include <stdlib.h>
#include "include/sorting_library.h"

#include "DataTester.h"
#include "DSString.h"

using namespace std;

int main() {
    DSString outputName = "output1.txt";
    DataTester myData(outputName);
    myData.resetData();
    myData.timeSorts();
    //data set sizes
    /*int size1 = 5000;
    int size2 = 15000;
    int size3 = 50000;
    int size4 = 100000;
    int size5 = 500000;
    //make some data to sort
    int data1[size1];
    int data2[size1];
    int data3[size1];
    int data4[size1];
    int data5[size1];
    for (int i = 0; i < size1; i++)
        data1[i] = rand();


    for (int i = 0; i < size2; i++)
        data2[i] = rand();


    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    print_version_number();
    //create a start and end time_point object
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

    //get the current time, run the algo, then get the current time again
    start = std::chrono::high_resolution_clock::now();
    mystery03(data1, 50);
    end = std::chrono::high_resolution_clock::now();

    //calculate the duration between start and end and print to the terminal
    std::chrono::duration<double> time_in_seconds = end - start;
    std::cout << std::fixed << "Duration: " << time_in_seconds.count() << std::endl;
     */
    return 0;
}
