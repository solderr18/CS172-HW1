#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();
int doubleFxn(int number);
int sumFxn(int number1, int number2);
double arrayFxn1(int bloops[], int arraySize);
double arrayFxn2(int bloops[], int arraySize);

int main() {
	srand(time(NULL)); //for the random values
	///EX01_01
	cout << "ex02 \n";
	ex02();
	///EX01_02
	cout << "ex03 \n";
	ex03();
	///EX01_03
	cout << "ex04 \n";
	ex04();
	///EX01_04
	cout << "ex05 \n";
	ex05();
	
	cout << "END OF EX01\n";
	return 0;
}
///EX01_01
void ex02() { //and write them>?
	///a
	bool hasPassedTest = true;
	///b
	int x = rand() % 10 + 1, y = rand() % 10 + 1; //two random integers btwn 1 and 10
	cout << "Let x = " << x << " and y = " << y << ".\n";
	if (x > y)
		cout << "x (" << x << ") is greater than y (" << y << ").\n";
	else if (y > x)
		cout << "y (" << y << ") is greater than x (" << x << ").\n";
	else
		cout << "x (" << x << ") is equal to y (" << y << ").\n\n";
	///c
	int numberOfShares;
	cout << "Number of shares: ";
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "The number of shares (" << numberOfShares << ") is less than 100.\n\n";
	///d
	int box, book;
	cout << "Box width: ";
	cin >> box;
	cout << "Book width: ";
	cin >> book;
	if (box%book == 0)
		cout << "The box width (" << box << ") is evenly divisible by the book width (" << book << ").\n\n";
	else
		cout << "The box width (" << box << ") is not evenly divisible by the book width (" << book << ").\n\n";
	///e
	double shelfLife, temp;
	cout << "Shelf life of box of chocolate: ";
	cin >> shelfLife;
	cout << "Outside temperature: ";
	cin >> temp;
	if (temp > 90)
		shelfLife -= 4;
	cout << "Shelf life is " << shelfLife << ".\n\n\n";
}
///EX01_02
void ex03() {
	///a
	double area;
	cout << "Area of square: ";
	cin >> area;
	cout << "Length of diagonal: " << (sqrt(area) * sqrt(2)) << endl << endl;
	///b
	char a;
	cout << "y or n? ";
	cin >> a;
	a = tolower(a);
	if (a == 'y')
		cout << "yes\n\n";
	else if (a == 'n')
		cout << "no\n\n";
	else
		cout << "you chose neither y nor n.\n\n";
	///c
	char t = '\t';
	///d
	string mailingAddress;
	cout << "Mailing address: ";
	cin.ignore();
	getline(cin, mailingAddress);
	cout << endl << "You entered: " << mailingAddress << endl << endl;
	///e
	string empty = "";
	cout << endl;
}
///EX01_03
void ex04() {
	///a
	int num; //Instructions are unclear, but I'm assuming "number" means integer bc of part b
	do {
		cout << "Enter an integer between 1 and 10: ";
		cin >> num;
		if (num < 1)
			cout << "That integer is less than 1.\n";
		else if (num > 10)
			cout << "That integer is greater than 10.\n";
	} while (num < 1 || num > 10);
	cout << endl << endl;
	///b
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += (i*i*i);
	}
	cout << "Sum of cubes from 1 to " << num << " = " << sum << endl << endl;

	///c
	cout << num << " astericks:\n";
	int b = 0;
	do {
		cout << "*";
		b++;
	} while (b < num);
	cout << endl << endl;
	///d
	cout << "Even numbers between 0 and 40: \n";
	for (int i = 0; i <= 40; i++) {
		if (i%2 == 0)
			cout << i << " ";
	}
	cout << endl << endl;
	///e
	cout << "Doubling function using " << num << " : \n";
	cout << num; //still using integer from pt a
	int twiceNum = doubleFxn(num);
	cout << " x 2 = " << twiceNum << endl << endl;
	///f
	cout << "Adding function using two random integers: \n";
	int x = rand() % 10 + 1, y = rand() % 10 + 1; //two random integers btwn 1 and 10
	int add = sumFxn(x, y);
	cout << x << " + " << y << " = " << add << endl << endl;
}
//EX01_03 part e --- doubling function
int doubleFxn(int number) {
	return (number * 2);
}
//EX01_03 part f --- summation function 
int sumFxn(int number1, int number2) {
	return (number1 + number2);
}
///EX01_04
void ex05() {
	///a
	cout << "Entering values into some size 5 array: \n";
	int bloop[5];
	int sum = 0, product = 1; //for part b
	for (int i = 0; i < 5; i++) {
		cout << "Integer " << i + 1 << ": ";
		cin >> bloop[i];
	///b
		sum += bloop[i];
		product *= bloop[i];
	}
	cout << endl << endl;
	cout << "Sum of components: " << sum << endl; //b
	cout << "Product of components: " << product << endl << endl; //b
	///c
	arrayFxn1(bloop, 5);
	cout << endl << endl;
	///d
	arrayFxn2(bloop, 5);
	cout << endl << endl;
}
//EX01_04 part c --- outputs all values in array
double arrayFxn1(int bloops[], int arraySize) {
	cout << "All values in your array: ";
	for (int i = 0; i < arraySize; i++) {
		cout << bloops[i] << " ";
	}
	return 0;
}
//EX01_04 part d --- outputs whether or not array contains specified value
double arrayFxn2(int bloops[], int arraySize) {
	int value;
	cout << "Some integer: ";
	cin >> value;
	bool contains = false;
	for (int i = 0; i < arraySize; i++) {
		if (bloops[i] == value)
			contains = true;
	}
	if (contains == true)
		cout << "The array does contain the value " << value << ".\n\n";
	else
		cout << "The array does not contan the value " << value << ".\n\n";
	return 0;
}