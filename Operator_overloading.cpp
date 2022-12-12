#include<bits/stdc++.h>
using namespace std;

class Fraction
{
		public:
		double real;
		double image;
		
			/*Complex()
			{
				real=0;
				image=0;
			}*/
			Fraction(double r,double i)
			{
				real=r;
				image=i;
			}
	
};

class Complex
{
	private:
		int real;
		int image;
		public:
			/*Complex()
			{
				real=0;
				image=0;
			}*/
			Complex(int r,int i)
			{
				real=r;
				image=i;
			}
			void display()
			{
				cout<<real<<" "<<"+"<<" "<<"i"<<image<<endl;
			}
			Complex operator + (Fraction c)
			{
				Complex temp(0,0);
				temp.real=real+c.real;
				temp.image=image+c.image;
				
				return temp;
			}
};




int main()
{Complex c1(2,3);
Complex c2(4,5);
Fraction f1(2.1,3.1);
//Complex c3=c1+c2;
Complex c4=c1+f1;

c1.display();
c2.display();
//c3.display();
c4.display();
return 0;
	
}
