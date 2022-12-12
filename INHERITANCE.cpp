#include<iostream>
#include<string>
using namespace std;
//code reusability
class Person{
	public:
		string name;
		int age;
		void setName(string iname)
		{
			name=iname;
		}
		void setAge(int iage)
		{
		age=iage;
		}
};

class Student : public Person //so the meaning of thius is student class gonna inherit all the public properties of class Person. 
 {
 	
	public:
		int id;
		void setId(int iid)
		{id=iid;
			
		}
		void introduce()
		{
			cout<<"HI I AM "<<name<<" and i am"<<age<<"yers old"<<endl<<"and my id is "<<id;
		}
};


int main()
{
	Student anil;
	anil.setName("Anil");
	anil.setAge(24);
	anil.setId(2784787);
	anil.introduce();
	return 0;
}
