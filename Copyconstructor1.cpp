#include<bits/stdc++.h>
using namespace std;
class mobile{
    private:
    string name;
    //  mobile(mobile &obj)
    // {  
    //     cout<<"copy constructor called"<<endl;
    //     name=obj.name;
    // }
    public:
    mobile()
    {
        name="rohan";
    }
    mobile(string x)
    {
          name=x;
          // cout<<name<<endl;
    }
    mobile(mobile &obj)
    {  
        cout<<"copy constructor called"<<endl;
        name=obj.name;
    }
    // mobile(mobile &obj)
    // {  
    //     cout<<"copy constructor called"<<endl;
    //     name=obj.name;
    // }
     void display()
     {
        cout<<name<<endl;
     }

};
int main()
{
    mobile modal1("bholu");
    mobile modal2=modal1;

     modal1.display();
     modal2.display(); 
   
//when no copy constructor is found .compiler supplies its own copy constructor. 

}