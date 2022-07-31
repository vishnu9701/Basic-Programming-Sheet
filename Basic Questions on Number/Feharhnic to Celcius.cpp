#include <iostream>
using namespace std;
 
int main()
{
    float frh, cel;
	cout << "\n\n Convert temperature in Fahrenheit to Celsius :\n";
	cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Celsius : " << cel << endl;
	cout << endl;
    return 0;
}
