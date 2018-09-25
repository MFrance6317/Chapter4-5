#include <iostream>
#include <string>

using namespace std;

int main()
{

	int age;
	string stringAnswer;
	string college;

	//26-30, 31-40, 41-50, 51-75, 75+

	cout << "What is your age? ";
	cin >> age;

	if (age <= 12)
		stringAnswer = "You are a minor. ";
	else if (age > 13 && age <= 18)
		stringAnswer = "Still a minor";

	else if (age > 18 && age <= 25) {

		cout << "Did you go to college: Yes No ";
		cin >> college;

		if (college == "Yes") {
			stringAnswer = "Yay debt and sleep deprivation!!! ";
		}
		else
			stringAnswer = "Well... McDonalds is still hiring ";
	}

	else if (age > 26 && age <= 30)
		stringAnswer = "How goes the job hunt? ";

	else if (age > 31 && age <= 40)
		stringAnswer = "Got a wife yet? ";

	else if (age > 41 && age <= 50)
		stringAnswer = "Welcome to AARP! ";

	else if (age > 51 && age <= 75)
		stringAnswer = "Almost to the finish line!! ";

	else if (age > 75)
		stringAnswer = "You're still alive??? ";

	cout << stringAnswer << endl;

	system("pause");
	return 0;
}