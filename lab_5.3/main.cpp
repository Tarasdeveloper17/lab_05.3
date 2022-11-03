#include <iostream>
#include <cmath>
using namespace std;
double r(const double x);
int main()
{
 double hp, hk, z;
 int n;
 cout << "hp = "; cin >> hp;
 cout << "hk = "; cin >> hk;
 cout << "n = "; cin >> n;
 double dh = (hk-hp)/n;
 double h = hp;
 while (h <= hk)
 {
     z = r(1 + (h*h) - 2*h ) + 2*r(1+r(h*h) - 2 * pow(r(1), 2));
 cout << h << " - " << z << endl;
 h += dh;
 }
 return 0;
}
double r(const double x)
{
 if (abs(x) >= 1)
     return (1 - pow(sin(x), 2)) / exp(x);
else
{
 double S = 0;
 int a = 1;
 S = a;
 int j=0;

 do
 {
j++;
double R = x/((2* j + 1) - 5) * ((2* j + 1) - 4) * ((2* j + 1) - 3) * ((2* j + 1) - 2)  * ((2* j + 1) - 1) * ((2* j + 1));
     a*=R;
     S+=a;
     
 } while(j<7);
 return ((1. / 1 + x)  *  S);
 }
    
}
