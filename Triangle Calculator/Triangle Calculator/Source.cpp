#include <iostream>
#include <string>
using namespace std;

int rightChoice()
{
	/*int sideChoice;

	cout << "What side are you solving for? Side A(1) Side B(2) Side C(3) ";
	cin >> sideChoice;

	if (sideChoice == 1)
	{
		rightA();
	}
	else if (sideChoice == 2)
	{
		rightB;
	}
	else if (sideChoice == 3)
	{

	}
	
	return 0;
}

int rightTriangle()
{

	double rA;
	double rB;
	double rC;
	double rP;
	double rArea;
	double squareRoot;

	/*cout << "Insert A: ";
	cin >> rA;
	cout << "Insert B: ";
	cin >> rB;

	rC = (rA*rA) + (rB*rB);
	squareRoot = sqrt(rC * 1);
	rP = rA + rB + squareRoot;
	rArea = (rA * rB) / 2;

	cout << "C = " << squareRoot << endl;
	cout << "Perimeter = " << rP << endl;
	cout << "Area = " << rArea << endl;
	*/
	return 0;
}

int isoceles()
{
	double iA;
	double iB;
	double iC;
	double iH;
	double iP;
	double iArea;
	double squareI;

	cout << "Insert A: ";
	cin >> iA;
	cout << "Insert B: ";
	cin >> iB;

	iC = iB / 2;
	iH = (iA * iA) + (iC * iC);
	squareI = sqrt(iH * 1);
	iP = iA + iA + iB;
	iArea = (iB * iH) / 2;

	cout << "Height = " << squareI << endl;
	cout << "Perimeter = " << iP << endl;
	cout << "Area = " << iArea << endl;

	return 0;
}

int equilateral()
{

	double eA;
	double eP;
	double eArea;

	cout << "Insert side length: ";
	cin >> eA;

	eP = eA + eA + eA;
	eArea = sqrt(3) / 4 * (eA * eA);

	cout << "Perimeter = " << eP << endl;
	cout << "Area = " << eArea << endl;

	return 0;
}

int main()
{

	double triangleChoice;

	cout << "Welcome to the triangle calculator." << endl;
	do {
		cout << "What type of triangle are you solving for?" << endl;
		cout << "1. Right triangle 2. Isoceles 3. Equilateral ";
		cin >> triangleChoice;

		if (triangleChoice == 1)
		{
			rightChoice();
		}
		else if (triangleChoice == 2)
		{
			isoceles();
		}
		else if (triangleChoice == 3)
		{
			equilateral();
		}
	} while (triangleChoice !=4);
	system("pause");
	return 0;
}