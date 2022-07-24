#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, x1, x2, d;
    a = 1, b = 4, c = 1;
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "Roots are Real and same "<<endl;
        x1 = -b / (2 * a);
        cout << x1;
    }
    else if (d > 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        cout<<"Roots are real and different "<<endl;
        cout<<"x1 = "<<x1<<" x2 = "<<x2;
    }
    else
    {
       int realpart=-b/(2*a);
       int imgpart=sqrt(-d/(2*a));
       cout<<"Roots are Complex and diffrent";
       cout<<"x1"<<"="<<realpart<<"+"<<imgpart<<"i"<<endl;
       cout<<"x2"<<"="<<realpart<<"+"<<imgpart<<"i"<<endl;
    }
}
