#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int arr[10], number, large, small, size;
	float total = 0, average;
	cout << "Enter array size:\n";
	cin >> size;
	if (size <= 10) {
		cout << "Enter "<< size <<" integers:\n";
		for (number = 0; number < size; number++)
			cin >> arr[number];
		large = arr[0];
		for (number = 0; number < size; number++)
		{
			if (large < arr[number])
				large = arr[number];
		}
		small = arr[0];
		for (number = 0; number < size; number++)
		{
			if (small > arr[number])
				small = arr[number];
		}
		cout << "The smallest integer is " << small << " and the largest integer is " <<large;
		for (number = 0; number < size; number++)
		{
			total += arr[number];
			average = total / size;
		}
		cout << "\nThe total of the array is " << total << "\nThe average of the array is " << average;
	}
	else
		cout << "Try a number less than or equal to 10.";
	getch();
	return 0;
}