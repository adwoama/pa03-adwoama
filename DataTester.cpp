//
// Created by robot on 3/9/2021.
//
#include <random>
#include <chrono>
#include <stdlib.h>
#include <fstream>
#include <exception>
#include "include/sorting_library.h"
#include "DataTester.h"
DataTester::DataTester(){
    output = "";
    data1 = new int [size1];
    data2 = new int [size2];
    data3 = new int [size3];
    data4 = new int [size4];
    data5 = new int [size5];
}
DataTester::DataTester(const DSString& outFile) {
    output = outFile;
    data1 = new int [size1];
    data2 = new int [size2];
    data3 = new int [size3];
    data4 = new int [size4];
    data5 = new int [size5];
    cout << "output file: " << output << endl;
}
/**
 * fills each array with random numbers
 */
void DataTester::resetData(){
    cout << "Started resetData()" << endl;
    random_device device;
    mt19937 generator(device());
    uniform_int_distribution<int>distribution(-200000,200000);
    for (int i = 0; i < size1; i++)
        data1[i] = distribution(generator);
    for (int i = 0; i < size2; i++)
        data2[i] = distribution(generator);
    for (int i = 0; i < size3; i++)
        data3[i] = distribution(generator);
    for (int i = 0; i < size4; i++)
        data4[i] = distribution(generator);
    for (int i = 0; i < size5; i++)
        data5[i] = distribution(generator);
    cout << "Ended resetData()" << endl;
}
void DataTester::setOutFile(const DSString& outFile) {
    output = outFile;
    cout << "output file: " << outFile << endl;
}
void DataTester::timeSorts(){
    cout << "Started timeSorts()" << endl;
    int repeat = 1;
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

    outFS.open(output.c_str());
    if(!outFS.is_open()){
        cout << "DataTester() Failed to Open File: " << output << endl;
        throw ios_base::failure("bad file name");
    }
    else{
        cout << "DataTester() Successfully Opened: " << output << endl;
    }
    outFS << "Size,Time" << endl;

    for(int i = 0; i < repeat; i++){
        //TODO put values into 2dimensional array size x time
        //========== TEST MYSTERY01 ==========
        cout << "Testing Mystery 1" << endl;
        start = std::chrono::high_resolution_clock::now();
        mystery01(data1, size1);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        outFS<< fixed << size1 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size1 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery01(data2, size2);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size2 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size2 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery01(data3, size3);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size3 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size3 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery01(data4, size4);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size4 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size4 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery01(data5, size5);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size5 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size5 << "," << time_in_seconds.count() << endl;

        outFS << endl << endl << endl;
        cout << endl << endl << endl;
        //========== TEST MYSTERY02 ==========
        cout << "Testing Mystery 2" << endl;
        start = std::chrono::high_resolution_clock::now();
        mystery02(data1, size1);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size1 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size1 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery02(data2, size2);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size2 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size2 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery02(data3, size3);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size3 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size3 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery02(data4, size4);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size4 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size4 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery02(data5, size5);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size5 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size5 << "," << time_in_seconds.count() << endl;

        outFS << endl << endl << endl;
        cout << endl <<endl <<endl;

        //========== TEST MYSTERY03 ==========
        cout << "Testing Mystery 3" << endl;
        start = std::chrono::high_resolution_clock::now();
        mystery03(data1, size1);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size1 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size1 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery03(data2, size2);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size2 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size2 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery03(data3, size3);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size3 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size3 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery03(data4, size4);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size4 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size4 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery03(data5, size5);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size5 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size5 << "," << time_in_seconds.count() << endl;

        outFS << endl << endl << endl;
        cout << endl << endl << endl;

        //========== TEST MYSTERY04 ==========
        cout << "Testing Mystery 4" << endl;
        start = std::chrono::high_resolution_clock::now();
        mystery04(data1, size1);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size1 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size1 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery04(data2, size2);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size2 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size2 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery04(data3, size3);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size3 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size3 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery04(data4, size4);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size4 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size4 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery04(data5, size5);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size5 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size5 << "," << time_in_seconds.count() << endl;

        outFS << endl << endl << endl;
        cout << endl << endl << endl;

        //========== TEST MYSTERY05 ==========
        cout << "Testing Mystery 5" << endl;
        start = std::chrono::high_resolution_clock::now();
        mystery05(data1, size1);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size1 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size1 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery05(data2, size2);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size2 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size2 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery05(data3, size3);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size3 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size3 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery05(data4, size4);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size4 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size4 << "," << time_in_seconds.count() << endl;

        start = std::chrono::high_resolution_clock::now();
        mystery05(data5, size5);
        end = std::chrono::high_resolution_clock::now();
        time_in_seconds = end - start;
        outFS<< fixed << size5 << "," << time_in_seconds.count() << endl;
        cout<< fixed << size5 << "," << time_in_seconds.count() << endl;
    }//do each size 10 times

    cout << "finished testing" << endl;
    //TODO output 2d array to csv file
    outFS.close();
}