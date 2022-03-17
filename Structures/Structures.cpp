// Персональный шаблон проекта С++
#include <iostream>

using namespace std;


struct coordinates {
	int x;
	int y;
};


void showCoordinates(coordinates &C) {
	C.x = 0;
	C.y = 0;
	//cout << &C << endl;
	//cout << "X = " << C.x << endl << "Y = " << C.y << endl;
}
coordinates inputObj() {
	coordinates newObj;
	cout << "Введите х: ";
	cin >> newObj.x;
	cout << "Введите у: ";
	cin >> newObj.y;
	return newObj;
}

void fillObj(coordinates& C) {
	cout << "Введите х: ";
	cin >> C.x;
	cout << "Введите y: ";
	cin >> C.y;

}

int main() {
	setlocale(LC_ALL, "Russian");

	struct date {
		int day;
		int month;
		int year;
		string note;
	} birthday, date1;
	birthday.day = 10;
	birthday.month = 5;
	birthday.year = 1990;
	birthday.note = "Ivan Ivanov";

	cout << birthday.day << "." << birthday.month << "." << birthday.year << " - " << birthday.note << endl;
	
	date1 = { 15, 5, 1996, "WA" };
	date1.day += 10;
	date1.month = 3;
	cin >> date1.year;
	date1.note += "!";
	cout << date1.day << "." << date1.month << "." << date1.year << " - " << date1.note << endl;

	date date2; // или date date2 = { *, *, *, "*" };
	

	// объект структуры как поле другой структуры

	struct date {
		int day;
		int month;
		int year;
		string note;
	};
	struct person {
		string name;
		date birthday;
	} Tom;
	Tom.name = "Tom Smith";
	Tom.birthday = { 3, 5, 1993 };
	cout << Tom.name << endl << Tom.birthday.day << "." << Tom.birthday.month << "." << Tom.birthday.year << endl;
	
	person Bob = { "Bob Smith", {1, 3, 1990} };
	cout << Bob.name << endl << Bob.birthday.day << "." << Bob.birthday.month << "." << Bob.birthday.year << endl;

	// указатели
	person* pB = &Bob;
	cout << pB->name << endl;

	pB->name = "Bob Thompson";
	cout << Bob.name << endl;

	pB = &Tom; // перенаправление указателя на другой объект

	cout << pB->name << endl;
	

	coordinates pointA = { 7, 5 };
	coordinates pointB = { 8, 1 };
	coordinates pointC = { 71, 51 };

	coordinates pointE;
	fillObj(pointE);
	cout << "Е.х = " << pointE.x << endl;
	cout << "Е.у = " << pointE.y << endl;
 
	coordinates pointD = inputObj();

	cout << pointD.x << " " << pointD.y << endl;

	pointA = inputObj();
	cout << pointA.x << " " << pointA.y << endl;

	cout << inputObj().x << endl;

	cout << "Point A: " << endl;
	showCoordinates(pointA);

	cout << "Point B: " << endl;
	showCoordinates(pointB);

	cout << "Point C: " << endl;
	showCoordinates(pointC);

	cout << &pointA << endl;

	showCoordinates(pointA);

	cout << pointA.x << " " << pointA.y << endl;

	 

	return 0;
}