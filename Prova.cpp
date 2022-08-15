#include <iostream>
using namespace std;

class uu {        // The class
  public:          // Access specifier
   int n1,n2;
   double n3;

    uu(int x, int y, double a) {  // Constructor with parameters
      n1= x;
      n2= y;
      n3 = a;
    }
  /// function overloading
    int fun(int x, int y)
    {
       return x+y;
    }
    double fun(double x, int y)
    {
      return x+y;
    }
};

int main() {

 uu you(1,2,3.5);

  cout<<you.fun(you.n1,you.n2)<<endl;
  cout<<you.fun(you.n3, you.n1)<<endl;
  return 0;
}
