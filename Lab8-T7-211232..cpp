#include <iostream>
/*a program that inputs two integers. It passes first integer to a function that calculates
and returns its square. It passes second integer to another function that calculates and
returns its cube. The main functions adds both returned values and displays the result.*/
using namespace std;

double square(int num1); //FUNCTION DECLARATION 
double cube(int num2); //FUNCTION DECLLARATION

int main() 
{
	int num1,num2,sqr_result,cub_result;
	cout<<"Enter first number: "; cin>>num1;
	cout<<"Enter Second number: "; cin>>num2;
	cout<<endl<<endl<<"***************************************************"<<endl<<endl;
	sqr_result=square(num1); //function call for first function to pass num1 to square function
	cout<<"Square of first number= "<<sqr_result<<endl<<endl;
	cub_result=cube(num2); //function call for second function to pass num1 to cube function
	cout<<"Cube of Second Number= "<<cub_result<<endl<<endl;
	cout<<"***************************************************"<<endl<<endl;
	cout<<"ADDITION OF BOTH SQUARE & CUBE= "<<sqr_result+cub_result; //addition of both results
	
	return 0;
}
double square(int num1) //function defination for first function
{
	int sqr_result;
	sqr_result=(num1*num1);
	return sqr_result;
}
double cube(int num2)  //function defination for second function
{
	int cub_result;
	cub_result=(num2*num2*num2);
	return cub_result;
}





