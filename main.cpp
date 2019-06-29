#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>


/*template <typename T>
T Sum(T a, T b)
	{
		return a + b;
	}

template <class _Ty>
class MyArray
{
public:
	_Ty table[];

	void push_back(_Ty element);
};*/
using namespace std;

int main()
{
	/*int sumNumber = Sum(5, 7);
	float floatingSum = Sum(3.4f, 7.7f);

	std::cout << "Zbroj int-ova: " << sumNumber << std::endl;
	std::cout << "Zbroj float-ova: " << floatingSum << std::endl;

	std::string first = "Maja";
	std::string second = "dev";
	std::string stringSum = Sum(first, second);
	std::cout << "Zbroj stringova-ova: " << stringSum << std::endl;

	std::vector<int> vectorTemplate;
	std::vector<float> vectorTemplate;
	std::vector<std::string> vectorTemplate;*/

/*
	//ALOCIRANJE MEMORIJE (2 nacina):
	// Prvi:
	int myNumberArray[4];
	myNumberArray[0] = 5;
	myNumberArray[1] = 7;
	myNumberArray[2] = 8;
	myNumberArray[3] = 2;
	//myNumberArray[4] = 10;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << myNumberArray[i] << std::endl;
	}
	std::cout << std::endl;
	
	//Drugi:
	int* myArray = (int*)malloc(4 * sizeof(int));
	myArray[0] = 9;
	myArray[1] = 8;
	myArray[2] = 7;
	myArray[3] = 6;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << myArray[i] << std::endl;
	}
	std::cout << "\n" << std::endl;

	//MATRICE:

	int matrix[4][4];
	// 5xxx
	// x7xx
	// xxxx
	// xx9x
	matrix[0][0] = 5;
	matrix[1][1] = 7;
	matrix[3][2] = 9;
	

	int threeD[4][4][4];
*/

	//Prvi zadatak:
	int matrica[10][10];
	int N, M;

	std::cout << "Upisi dimenziju matrice: " << std::endl;
	std::cin >> N;
	M = N;
	matrica[N][M];
	

	/*
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Matrica [" << i << "," << j << "] ---> ";
			cin >> matrica[i][j];
		}
	}
	*/
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i < j)
			{
				cout << matrica[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
	
	/*
	int A, B, N, M;


	if (2 < N < 10)
	{
		std::cout << "test" << std::endl;
	}
	else
	{
		std::cout << "Nedozvoljena dimenzija!" << std::endl;
		return 0;
	}
	for (size_t i = 0; i < N; i++)
	{
		std::cout << matrica[i][i] << std::endl;
	}

	std::cin.get();
	*/

}