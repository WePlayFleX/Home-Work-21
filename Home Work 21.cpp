#include <iostream>
#include <ctime>

using namespace std;

const int nMatr = 5;

void Average()
{
	srand(time(0));

	double iSumm = 0, iRes = 0;
	double aArray[nMatr][nMatr] = { {0} };

	for (int i = 0; i < nMatr; i++)
	{
		for (int j = 0; j < nMatr; j++)
		{
			aArray[i][j] = (rand() % 1000 - 500) * 0.1;
			cout << "\t" << aArray[i][j] << "  ";
			iSumm += aArray[i][j];
			iRes = iSumm / (nMatr * nMatr);
		}
		cout << endl;
	}
	cout << endl;
	cout << "The sum of the array elements is - " << iSumm << endl;
	cout << endl;
	cout << "The orithmetic mean of array elements is - " << iRes << endl;
	cout << endl;
}

int main()
{
	Average();
	system("pause");
	return 0;
}
