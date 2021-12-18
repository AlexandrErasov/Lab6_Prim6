#pragma once
#include <fstream>
#define N 100
#define M 100


//matrix input
void Read(int& n, int& m, int matrix[N][M]);

//finding the maximum element in a matrix
void FindMaxElem(int& n, int& m, int max, int matrix[N][M]);

//finding the minimum element in a matrix
void FindMinElem(int& n, int& m, int min, int matrix[N][M]);

//sum of digits of the maximum matrix element
void SumOfDigitMax(int sumMaxElem, int maxElem);

//sum of digits of the minimum matrix element
void SumOfDigitMin(int sumMinElem, int minElem);

//line element sum
void LineSum(int& n, int& m, int sumline[N], int matrix[N][M]);

/*If the sums of the digits minand max of the elements are
equal, then order the rows of the matrix in non-decreasing order of the sum of the elements*/
void Sort(int& n, int& m, int sumMaxElem, int sumMinElem, int sumline[N], int matrix[N][M]);

//output
void Write(int& n, int& m, int matrix[N][M], int sumline[N]);
