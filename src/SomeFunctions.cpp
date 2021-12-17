#include "../inc/SomeFunctions.hpp"


//ввод матрицы
void Read(int& n, int& m, int matrix[N][M])
{
	std::ifstream in("input.txt");
	in >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			in >> matrix[i][j];
		}
}

//поиск максимального элемента в матрице
void FindMaxElem(int& n, int& m, int max, int matrix[N][M])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (max < matrix[i][j])
				max = matrix[i][j];
}

//поиск минимального элемента в матрице
void FindMinElem(int& n, int& m, int min, int matrix[N][M])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (min < matrix[i][j])
				min = matrix[i][j];
}


//сумма цифр максимального элемента матрицы
void SumOfDigitMax(int sumMaxElem, int maxElem)
{
	while (maxElem > 0)
	{
		int digit = maxElem % 10;
		sumMaxElem = sumMaxElem + digit;

		maxElem = maxElem / 10;
	}
}

//сумма цифр минимального элемента матрицы
void SumOfDigitMin(int sumMinElem, int minElem)
{
	while (minElem > 0)
	{
		int digit2 = minElem % 10;
		sumMinElem = sumMinElem + digit2;

		minElem = minElem / 10;
	}
}

// сумма элементов строки
void LineSum(int& n, int& m, int sumline[N], int matrix[N][M])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			sumline[i] += matrix[i][j];
		}
}

//Если суммы цифр мин и макс элементов равны, то упорядочить строки матрицы по неубыванию суммы элементов
void Sort(int& n, int& m, int sumMaxElem, int sumMinElem, int sumline[N], int matrix[N][M])
{
	for (int i = 0; i < n - 1; i++)
		for (int k = i + 1; k < n; k++)
			for (int j = 0; j < m; j++)
			{
				if (sumMaxElem == sumMinElem)
					if (sumline[i] > sumline[k])
						std::swap(matrix[i][j], matrix[k][j]);
			}
}

//вывод
void Write(int& n, int& m, int matrix[N][M], int sumline[N])
{
	std::ofstream out("output.txt");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			out << matrix[i][j] << " ";
		}
		out << std::endl;
	}
}