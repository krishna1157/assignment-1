#include<iostream>
using namespace std;
int main()
{
	int choice = 0;
	double pounds = 0, kgs = 0, feet = 0, centi = 0, fah = 0, cels = 0;
	cout << "enter 1 for pounds into kilograms\n\n";
	cout << "enter 2 for kilograms into pounds\n\n";
	cout << "enter 3 for feet into meters\n\n";
	cout << "enter 4 for centimeters into feet\n\n";
	cout << "enter 5 for fahrenheit into celsius\n\n";
	cout << "enter 6 for celsius into fahrenheit\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "enter unit in pounds";
		cin >> pounds;
		kgs = pounds * 0.454;
		cout << "total unit in kilograms is\n" << kgs << endl;
	}
	break;
	case 2:
	{
		cout << "enter unit in kilograms\n";
		cin >> kgs;
		pounds = kgs * 2.205;
		cout << "total unit in pounds is\n" << kgs << endl;
	}
	break;
	case 3: {
		cout << " enter distance in feet\n";
		cin >> feet;
		centi = feet * 3.281;
		cout << "total distance in meter is\n" << centi << endl;
	}
	break;
	case 4: {
		cout << "enter distance in meter\n";
		cin >> centi;
		feet = centi * 0.394;
		cout << "Total distance in feet is\n" << feet << endl;
	}
	break;
	case 5: {
		cout << "enter tempreture in celsius\n";
		cin >> cels;
		fah = (9 * cels) / 5 + 32;
		cout << "tempreture in fahrenheit is\n" << fah << endl;
	}
	break;
	case 6: {
		cout << "enter tempreture in fahrenheit\n";
		cin >> fah;
		cels = (fah - 32) * 5 / 9;
		cout << "tempreture in celsius is\n" << cels << endl;
	}
		  break;
	}

	return 0;
}
