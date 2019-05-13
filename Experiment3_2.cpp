#include <iostream>
#include <conio.h>
using namespace std;
	const int prov = 3;
	const int days = 7;
	int main()
	{
		char arr[prov][prov] = { "A", "B", "C" };
		int temp[prov][days];
		cout << "Enter all temperature for a week of Province A, Province B, and then Province C.";
		for (int place = 0; place < prov; place++)
		{
			for (int day = 0; day < days; ++day)
			{
				cout << "\nProvince " << arr[place]  << ", Day " << day + 1 << " : ";
				cin >> temp[place][day];
			}
		}
		cout << "\nDisplaying Values: \n";
		for (int place = 0; place < prov; place++)
		{
			for (int day = 0; day < days; ++day)
			{
				cout << "\nProvince " << arr[place] << ", Day " << day + 1 << " : " << temp[place][day] << endl;

			}
		}
		getch();
		return 0;
}
	
