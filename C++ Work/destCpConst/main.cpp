#include<iostream>
#include<string>
using namespace std;
//--------------------------


class MyClass
{

public:

    MyClass(string name): m_name(name) 
        {
            cout<<"Deafault constructor for "<<m_name<<" called"<<endl;
        }
    

    MyClass(const MyClass &mc) 
        {
            m_name = mc.m_name + " copy";
            cout<<"copy constructor for "<<m_name<<" called"<<endl;      
        }


    MyClass &operator=(const MyClass &mc)
        {
            cout<<"Assignment operator called for: "<<m_name<<" called"<<endl;
        }

    ~MyClass() 
        {
            cout<<"Destructor for "<<m_name<<" called"<<endl; 
        } 

private:
    string m_name;
    

};

//--------------------------

void myFunc()
{
    MyClass mc3("mc3");
}

//--------------------------

int main(){

    myFunc();
    MyClass mc1("mc1");
    MyClass mc2(mc1);
    MyClass mc4("mc4");

    return 0;
}
