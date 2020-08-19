#include<iostream>
using namespace std;
class counter
{
    int a;
    public:
    counter()
    {
        a=0;
    }
    counter(int input);
    counter operator++();
    void show();

};
counter :: counter(int input)
{
    a = input;
}
counter counter::operator ++()
{   counter temp;
    int count = ++a;
    temp.a = count;
    return temp;
}
void counter :: show()
{
    cout<<a;
}

int main()
{
    counter c1(10);
    c1.show();
    counter c2 = ++c1;
    //c1.show();
    c2.show();
    return 0;
}