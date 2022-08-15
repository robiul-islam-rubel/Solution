#include<bits/stdc++.h>
using namespace std;
class employee
{
private:
    int salary;
public:
    void setsalary(int s)
    {
        salary=s;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    employee obj;
    obj.setsalary(5000);
    cout<<obj.getsalary()<<endl;
}
