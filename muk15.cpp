#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age ;
	float BMI ,h ,w;
	char sex ;
	cout << "Enter age :";
	cin  >> age;
	cout << "Enter height :";
	cin  >> h;
	cout << "Enter wight :";
	cin  >> w;
	cout << "Enter sex :";
	cin  >> sex;
	BMI = w / (h/100 * h/100);
	cout << "BMI = " << BMI<<endl;
	if (BMI <= 20.1) cout <<"Underweight\n";
	else if(BMI <= 25) cout <<"Normal\n";
	else if(BMI <= 35) cout <<"Overweight\n";
	else if(BMI <= 40) cout <<"Obesity\n";
return(0);
}