#include<bits/stdc++.h>
using namespace std;


class Number{
	
	private:
		int a;
		public:
			Number(int x)
			{
				a=x;
			}
			
			bool operator ==(Number y)//explicitly
			{
				if(a==y.a)
				return 1;
				else return 0;
				
			}
};
int main()
{
	Number n1(4),n2(3);
	int k=(n1==n2);
	cout<<k<<endl;
	
	}
