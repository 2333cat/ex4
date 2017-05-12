#ifndef COMMON_H
#define COMMON_H
#include <iostream>
using namespace std;
 class Complex
{ 
	double real,image;
public:
	Complex(double r,double i){real=r;image=i;}
	friend Complex operator +(Complex &a,const Complex &b);
 			Complex operator =(Complex c);
 	friend	ostream& operator << (ostream& output,Complex& c);
	friend	istream& operator >> (istream& input,Complex& c); 
};

 class Fraction
 {
	private:
   		int Denominator;
   		int Numerator;	
   	public:
   		Fraction(){Denominator =1,Numerator=1;}
   		Fraction(int a, int b){Denominator=b; Numerator=a;}
   		friend Fraction operator +(int,const Fraction&); 
   		friend Fraction operator +(const Fraction&,int);
   		friend ostream& operator << (ostream& output,Fraction& c);

 }; 

#endif
