#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	int alpha, num;
	char enter[50];
	char element[50];
	cout << "Enter array: ";
	cin >> enter;
	cout << "The reverse order is: \n";
	int amount = strlen(enter);
	for (alpha = 0, num = amount; alpha <= amount; alpha++, num--)
		{
			element[num] = enter[alpha];
		}
	for (alpha = 0; alpha <= amount; alpha++)
		{
			cout << element[alpha];
		}
	cout << "\nThe size of array is: " << amount;
	getch();
	return 0;
}