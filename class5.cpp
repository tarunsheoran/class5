#include <iostream>
using namespace std;
#include <string>
class employee
{
    private:
    int age;
    float exp;
    string name;
    void show();
    public:
    void ip()
    {
        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"enter the Age "<<endl;
        cin>>age;
        cout<<"Enter Experience ";
        cin>>exp;
    }
void check()
{

    if(age>=25 && age<=35 && exp>=2)
    {
        cout<<"The condidate is eligible."<<endl;
        cout<<"The details are as folows."<<endl;
        show();

    }
    else{
        cout<<"The condidate is not eligible";
    }
}

};
void employee::show()
{
    cout<<"The name= "<<name<<endl;
    cout<<"The age= "<<age<<endl;
    cout<<"experirnce= "<<exp<<endl;
}
int main()
{
    employee s;
    s.ip();
    s.check();
    return 0;
}