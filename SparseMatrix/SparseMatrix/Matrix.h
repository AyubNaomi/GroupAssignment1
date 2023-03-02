#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <fstream>
using namespace std;

class Matrix {
public:
    Matrix(int, int);
    ~Matrix();

    void Insert(int row, int col, int value);
    void Print();

    Matrix operator+(const Matrix& rhs);

    Matrix transpose();
private:
    int numRows = 0; int numCols = 0;
    int** values;

};


#endif