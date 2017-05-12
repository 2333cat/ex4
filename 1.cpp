#include <iostream>
#include"common.h" 
using namespace std;
Complex Complex:: operator =(Complex c)
{
	real=c.real;
	image=c.image;
    return  *this; 
}

 Complex operator +(Complex &a,const Complex &b)
{
	Complex *t=new Complex( (a.real+b.real),(a.image+b.image));
	return *t;
}
  ostream& operator << (ostream& output,Complex& c)
{
   output<<"("<<c.real;
   if(c.image>=0) output<<"+";
   output<<c.image<<"i)"<<endl;  
   return output;
}
 istream& operator >> (istream& input,Complex& c) 
{
   cout<<"input real part and imaginary part of complex number:";
   input>>c.real>>c.image;
   return input;
}
 Fraction operator +(int b, const Fraction &a)
 {	
 	Fraction temp;
 	temp.Numerator=a.Numerator+a.Denominator*b;
 	temp.Denominator=a.Denominator;
 	return temp;
 }
Fraction operator +( const Fraction&a,int b)
{
	Fraction temp;
 	temp.Numerator=a.Numerator+a.Denominator*b;
 	temp.Denominator=a.Denominator;
 	return temp;
}
ostream& operator << (ostream& output,Fraction& c)
{
	output<<c.Numerator<<"/"<<c.Denominator<<endl;
	return output;
}



