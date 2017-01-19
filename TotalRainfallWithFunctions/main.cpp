#include <iostream>
using namespace std;

void GetInput(float &total, int &month);

int main()
{
	float total = 0, rain;
	int month = 1;
	GetInput(total, month);
	if (month == 1)
		cout << "No data has been entered" << endl;
	else
		cout << "The total rainfall for the " << month - 1 << " months is " << total << " inches." << endl;
	system("pause");
	return 0;
}
void GetInput(float &total, int &month)
{
	double rain;
	do
	{
		cout << "Enter the total rainfall in inches for month " << month << endl;
		cout << "Enter -1 when you are finished" << endl;
		cin >> rain;
		while (rain < 0 && rain > -1 || rain < -1)
		{
			cout << "Invalid number. Must be positive, or enter -1 to exit: ";
			cin >> rain;
		}
		if (rain != -1)
		{
			total = total + rain;
			month++;
		}
	} while (rain != -1);
}