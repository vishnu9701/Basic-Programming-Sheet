#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2;
    cout<<"Enter x1,y1 : ";
    cin>>x1>>y1;
    cout<<"Enter x2,y2 : ";
    cin>>x2>>y2;
 
    
    float fDiff =(float) sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
    cout<<"Difference is "<<fDiff<<endl;
    return 0;    
} 
