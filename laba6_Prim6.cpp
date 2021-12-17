#include <iostream>
#include "inc/SomeFunctions.hpp"


int main()
{
	
	int n, m;
	int matrix[N][M];
	Read(n, m, matrix);

	int max = matrix[0][0];
	FindMaxElem(n, m, max, matrix);
	
	int min = matrix[0][0];
	FindMinElem(n, m, min, matrix);
	
	int sumMaxElem = 0;
	int maxElem = max;
	SumOfDigitMax(sumMaxElem, maxElem);

	int sumMinElem = 0;
	int minElem = min;
	SumOfDigitMin(sumMinElem, minElem);

	int sumline[N] = { 0 };
	LineSum(n, m, sumline, matrix);

	Sort(n, m, sumMaxElem, sumMinElem, sumline, matrix);

	Write(n, m, matrix, sumline);

	return 0;
}