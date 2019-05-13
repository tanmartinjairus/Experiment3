#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main() {
	int size, max;
	char arr[100];
	cout << "Enter array size: ";
	cin >> size;
	cout << "Enter array elements\n";
	for (int element1 = 0; element1 < size; element1++)
	{
		cin >> arr[element1];
	}
	cout << "Sorting array...\n";
	for (int element1 = 0; element1 < size; element1++)
	{
		for (int element2 = 0; element2 < size; element2++)
		{
			if (arr[element1] < arr[element2])
			{
				max = arr[element1];
				arr[element1] = arr[element2];
				arr[element2] = max;
			}
		}
	}
	for (int element1 = 0; element1 < size; element1++)
	{
		cout << arr[element1] << "";
	}
	getch();
	return 0;
}