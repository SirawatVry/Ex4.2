#include <iostream>
#include <string>
using namespace std;
int main()
{
	int k1,k2,k3,RE;
char Ch1,Ch2,Ch3;
cout << "Enter Character (A,B,C) : ";
cin  >> Ch1;
cout << "Enter Character (A,B,C) : ";
cin  >> Ch2;
cout << "Enter Character (A,B,C) : ";
cin  >> Ch3;
if (Ch1=='A') k1 = 10 ;
else if (Ch1=='B') k1 = 20;
else if (Ch1=='C') k1 = 30;
if (Ch2=='A') k2 = 10 ;
else if (Ch2=='B') k2 = 20;
else if (Ch2=='C') k2 = 30;
if (Ch3=='A') k3 = 10 ;
else if (Ch3=='B') k3 = 20;
else if (Ch3=='C') k3 = 30;
cout << Ch1 << "=" << k1 << "," << Ch2 << "=" << k2 << "," << Ch3 << "=" << k3 << endl;
cout << Ch1 << " + "<< Ch2 << " + "<< Ch3 << " = " << k1 << " + " << k2 << " + " << k3 << " = " << k1 + k2 + k3 <<endl;
return(0);
}