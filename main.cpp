#include <iostream>
#include"common.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	Complex a(1,2),b(3,4);
 	cout<<a<<endl;

//-----------------------------------------------------------------------------------------------------
	Fraction i(3,2);
	int j=1;
	Fraction temp;
	temp=i+j;
	temp=j+i;
	cout<<temp<<endl;
	
	return 0;
}
 
 	

