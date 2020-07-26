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

int main() {
	
	problem01();
	problem02();
	problem03();

























	return 0;
}

