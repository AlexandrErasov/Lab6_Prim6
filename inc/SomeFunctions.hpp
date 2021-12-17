#pragma once
#include <fstream>
#define N 100
#define M 100


//���� �������
void Read(int& n, int& m, int matrix[N][M]);

//����� ������������� �������� � �������
void FindMaxElem(int& n, int& m, int max, int matrix[N][M]);

//����� ������������ �������� � �������
void FindMinElem(int& n, int& m, int min, int matrix[N][M]);

//����� ���� ������������� �������� �������
void SumOfDigitMax(int sumMaxElem, int maxElem);

//����� ���� ������������ �������� �������
void SumOfDigitMin(int sumMinElem, int minElem);

// ����� ��������� ������
void LineSum(int& n, int& m, int sumline[N], int matrix[N][M]);

//���� ����� ���� ��� � ���� ��������� �����, �� ����������� ������ ������� �� ���������� ����� ���������
void Sort(int& n, int& m, int sumMaxElem, int sumMinElem, int sumline[N], int matrix[N][M]);

//�����
void Write(int& n, int& m, int matrix[N][M], int sumline[N]);
