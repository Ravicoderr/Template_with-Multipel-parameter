#include<iostream>
using namespace std;
template<class t1, class t2>

class test 
{
    public:
    t2 mathsmark , physics;
    void rollnumber(int a){
        cout<<"Result of roll number "<<a<<" is "<<endl;
    }

    void setmarks(t2 m , t2 p)
    {
        mathsmark = m;
        physics = p;
        cout<<"marks obtained in maths are "<<m
        <<" and "<<p<<" in physics"<<endl;
    }
    void percentage(){
        cout<<"the percentage is "<<(mathsmark + physics)/2;
    }


};
int main(){
    float a, b;
    cout<<"enter the marks of maths and physics "<<endl;
    cin>>a>>b;
    test<float, float> ravi;
    ravi.rollnumber(1);
    ravi.setmarks(a,b);
    ravi.percentage();
    
    return 0;
}