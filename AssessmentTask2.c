
#define _USE_MATH_DEFINES 
#define _CRT__secure_no_warnings
#define MINIMUM -4
#define MAXIMUM 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculatingArraySize();
double** calculatingAndStoring(int* sizeOfArray);
void printingMyArray(double** myArray, int sizeOfArray);
int findingMaximum(double** myArray, double* pMaxX, double* pMaxY);
void printingMaximum(double pMaxY, double pMaxX);
void sortingAscendingArray(double** Arr, int size);
int MaximumIntervalSegment(double pMaxY, double pMaxX, int sizeOfArray, double** myArray);

int main()
{

	double* pMaxX;
	double* pMaxY;


	double MaxX, MaxY;

	int c;
	c = findingMaximum(myArray, pMaxX, pMaxY);
	pMaxX = &MaxX;
	pMaxY = &MaxY;

	int dSizeOfArray = calculatingArraySize();
	double** myArray = calculatingAndStoring(dSizeOfArray);
	printingMyArray(myArray, dSizeOfArray);

	system("pause");
	system("CLS");

	findingMaximum(myArray, pMaxX, pMaxY);
	printingMaximum(MaxY, MaxX);

	system("pause");
	system("CLS");

	sortingAscendingArray(myArray, dSizeOfArray);
	printingMyArray(myArray, dSizeOfArray);

	system("pause");
	system("CLS");

	MaximumIntervalSegment(MaxY, MaxX, dSizeOfArray, myArray);

	system("pause");
	system("CLS");

	free(myArray);
	system("pause");
	return 0;
}

int calculatingArraySize()
{

	int sizeOfArray = 0;

	for (double i = MINIMUM; i <= MAXIMUM; i += 0.001)
	{
		sizeOfArray++;
	}
	printf("%d\n", sizeOfArray);
	return sizeOfArray;
}

double** calculatingAndStoring(int sizeOfArray)
{

	double** myArray = (double**)malloc(sizeOfArray * sizeof(double*));

	for (int i = 0; i < sizeOfArray; i++)
	{
		myArray[i] = (double*)malloc(2 * sizeof(double));
	}
	int c = 0;
	for (double i = MINIMUM; i <= MAXIMUM; i += 0.001)
	{

		myArray[c][0] = i;
		myArray[c][1] = -1 * pow(myArray[c][0], 4) + 3 * pow(myArray[c][0], 3) + 2 * pow(myArray[c][0], 2) - 5 * myArray[c][0] + 0.5;
		c++;
	}

	return myArray;
}

void printingMyArray(double** myArray, int sizeOfArray)
{
	for (int c = 0; c < sizeOfArray; c++)
	{
		printf("y = %.4lf when x =%.4lf\n", myArray[c][1], myArray[c][0]);
	}
}

int findingMaximum(double** myArray, double* pMaxX, double* pMaxY)

{
	double maxX;
	double maxY;
	maxY = myArray[0][1];
	int c = 0;
	for (double i = MINIMUM; i <= MAXIMUM; i += 0.001)
	{

		if (myArray[c][1] > maxY)
		{

			maxY = myArray[c][1];
			maxX = i;

		}
		c++;

	}
	*pMaxY = maxY;
	*pMaxX = maxX;
	system("pause");

	return c;
}

void printingMaximum(double pMaxY, double pMaxX)
{
	printf("Y maximum is %lf when X = %lf \n", pMaxY, pMaxX);
}

int MaximumIntervalSegment(double MaxX, int sizeOfArray, double** myArray)
{
	int x;
	double xValue;
	MaxX = xValue;
	int c = 0;
	printf("%lf\n", x);
	printf("%lf\n", x);
	printf("%d\n", x);
	double** myMaxSegArray = (double**)malloc(sizeOfArray * sizeof(double*));
	while (myArray[x][1] > 0)
	{

		printf("bibis keusai\n"); 
		x--;
	}
	while (myArray[x][1] > 0)
	{


		myMaxSegArray[c][0] = x;
		myMaxSegArray[c][1] = myArray[x][1];
		x++;
		c++;
		printf("%lf\n", myMaxSegArray[c][0]);
		printf("%lf\n", myMaxSegArray[c][1]);
	}

	return 0;
}

//void printingMaximumSegment()
// {
// }


void sortingAscendingArray(double** lfSortArr, int dArraySize)
{
	double temp;
	for (int i = 0; i < dArraySize - 1; i++)
	{
		for (int j = 0; j < dArraySize - i - 1; j++)
		{
			if (lfSortArr[j][1] > lfSortArr[j + 1][1])
			{
				temp = lfSortArr[j][1];
				lfSortArr[j][1] = lfSortArr[j + 1][1];
				lfSortArr[j + 1][1] = temp;
				temp = lfSortArr[j][0];
				lfSortArr[j][0] = lfSortArr[j + 1][0];
				lfSortArr[j + 1][0] = temp;
			}
		}
	}
}


