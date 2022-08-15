#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;

    student (string name)
    {
        this ->name=name;
    }
    void dis()
    {
        cout<<name<<endl;
    }


};
int main()
{
    student s("Rubel");
    s.dis();
    return 0;
}
