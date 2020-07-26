#include <iostream>

using namespace std;

void problem01() {
	// Write a program in C++ to print a welcome text in a separate line.

	cout << "Hello, and welcome to this cpp program" << endl; 

}

/*
2. Write a program in C++ to print the sum of two numbers. Go to the editor
Sample Output:
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59

*/
void problem02() {
	
	
	cout << "Print the sum of two numbers: " << endl;
	int i{ 0 };
	int y{ 0 };
	cin >> i;
	cin >> y;

	cout << "The sum of " << i << " and " << y << " is: " << i + y << endl;

	
}
/*
	3. Write a program in C++ to find Size of fundamental data types. Go to the editor
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes

*/


void problem03() {
	cout << "The sizeof(" << " char" << " is: " << sizeof(char) << "bytes" << endl;
	cout << "The sizeof(" << " short" << " is: " << sizeof(short) << "bytes" << endl;
	cout << "The sizeof(" << " int" << " is: " << sizeof(int) << "bytes" << endl;
	cout << "The sizeof(" << " long" << " is: " << sizeof(long) << "bytes" << endl;
	cout << "The sizeof(" << " long long" << " is: " << sizeof(long long) << "bytes" << endl;
	cout << "The sizeof(" << " float" << " is: " << sizeof(float) << "bytes" << endl;
	cout << "The sizeof(" << " double" << " is: " << sizeof(double) << "bytes" << endl;
	cout << "The sizeof(" << " bool" << " is: " << sizeof(bool) << "bytes" << endl;

}


/* 
4. Write a program in C++ to print the sum of two numbers using variables. Go to the editor
Print the sum of two numbers :*/

void problem04() {
	problem02(); // did it before I guess 
}

/*
5. Write a program in C++ to check the upper and lower limits of integer. Go to the editor
Expected Output:
Check the upper and lower limits of integer :
--------------------------------------------------
The maximum limit of int data type : 2147483647
The minimum limit of int data type : -2147483648
The maximum limit of unsigned int data type : 4294967295
The maximum limit of long long data type : 9223372036854775807
The minimum limit of long long data type : -9223372036854775808
The maximum limit of unsigned long long data type : 18446744073709551615
The Bits contain in char data type : 8
The maximum limit of char data type : 127
The minimum limit of char data type : -128
The maximum limit of signed char data type : 127
The minimum limit of signed char data type : -128
The maximum limit of unsigned char data type : 255
The minimum limit of short data type : -32768
The maximum limit of short data type : 32767
The maximum limit of unsigned short data type : 65535
*/

void problem05() {
	cout << "The maximum limit of int data type :" << INT_MAX << endl;
	cout << "The minimum limit of int data type :" << INT_MIN << endl;
	cout << "The maximum limit of unsigned int data type :" << UINT_MAX << endl;
	cout << "The maximum limit of long long data type :" << LLONG_MAX << endl;
	cout << "The minimum limit of long long data type :" << LLONG_MIN << endl;
	cout << "The maximum limit of unsigned long long data type :" << ULLONG_MAX << endl;
	cout << "The Bits contain in char data type :" << CHAR_BIT << endl;
	cout << "The maximum limit of char data type :" << CHAR_MAX << endl;
	cout << "The minimum limit of char data type :" << CHAR_MIN << endl;
	cout << "The maximum limit of signed char data type :" << SCHAR_MAX << endl;
	cout << "The minimum limit of signed char data type :" << SCHAR_MIN << endl;
	cout << "The maximum limit of unsigned char data type :" << UCHAR_MAX << endl;
	cout << "The minimum limit of short data type :" << SHRT_MIN << endl;
	cout << "The maximum limit of short data type :" << SHRT_MAX << endl;
	cout << "The maximum limit of unsigned short data type :" << USHRT_MAX << endl; 
}

/*
6. Write a program in C++ to check whether the primitive values crossing the limits or not. Go to the editor
Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987
*/
void problem06() {
	cout << "Check whether the primitives are over the limit" << endl;

	char gender{ 'F' };
	bool married{ true };
	short sons = { 2 };
	short year_of_appointment{ 2009 };
	long long salary{ 150000 };
	double height{ 79.48 };
	double gpa{ 4.69 };
	int salary_drawn_upto{ 12047235 };
	int balance{ 99324987 };
	cout << "--------------------------------------------------------------------" << endl;
	cout << "	The Gender is : " << gender				<< endl;
	cout << "	Is she married ? : 1"		 << married	<< endl;
	cout << "	Number of sons she has : 2"	<< sons	<< endl;
	cout << "	Year of her appointment : 2009"<< year_of_appointment	<< endl;
	cout << "	Salary for a year : 1500000" << salary	<< endl;
	cout << "	Height is : 79.48"	<< height			<< endl;
	cout << "	GPA is 4.69"				<< gpa	<< endl;
	cout << "	Salary drawn upto : 12047235"<< salary_drawn_upto	<< endl;
	cout << "	Balance till : 995324987"<< balance		<< endl;



}
int main() {
	
	/*problem01();
	problem02();
	problem03();
	problem04();
	problem05();*/
	problem06(); // Not sure if understood this correctly
























	return 0;
}

