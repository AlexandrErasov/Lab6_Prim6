#pragma once
#include <fstream>
#define N 100
#define M 100


//ввод матрицы
void Read(int& n, int& m, int matrix[N][M]);

//поиск максимального элемента в матрице
void FindMaxElem(int& n, int& m, int max, int matrix[N][M]);

//поиск минимального элемента в матрице
void FindMinElem(int& n, int& m, int min, int matrix[N][M]);

//сумма цифр максимального элемента матрицы
void SumOfDigitMax(int sumMaxElem, int maxElem);

//сумма цифр минимального элемента матрицы
void SumOfDigitMin(int sumMinElem, int minElem);

// сумма элементов строки
void LineSum(int& n, int& m, int sumline[N], int matrix[N][M]);

//Если суммы цифр мин и макс элементов равны, то упорядочить строки матрицы по неубыванию суммы элементов
void Sort(int& n, int& m, int sumMaxElem, int sumMinElem, int sumline[N], int matrix[N][M]);

//вывод
void Write(int& n, int& m, int matrix[N][M], int sumline[N]);
