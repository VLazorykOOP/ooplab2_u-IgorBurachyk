#include <iostream>

using namespace std;

int main()
{
setlocale(LC_CTYPE, "ukr");
cout << "Enter integers a & c & d (a>c>d)";
int a, c, x, y, d;
cin >> a >> c >> d;
/*x = a + (a<<5) + (((a << 4) - b - (b<<4))>>3) + (((b<<4) - b + 300)>>7);
y = a * 33 + (a * 16 - b * 17)/8 + (15 * b + 300)/128;*/
// "Моя формула" = (200*a + 312*c)/16 - d * 120 + c * 124;
x = ((((a<<7) + (a<<6) + (a<<3)) + ((c<<8) + (c<<5) + (c<<4) + (c<<3)))>>4)-(((d<<7)-(d<<3))+((c<<7)-(c<<2)));
y = (200*a + 312*c)/16 - (d * 120 + c * 124);
//cout <<(a<<7) + (a<<6) + (a<<3) <<"\n"; //Check a
//cout <<(b<<8) + (b<<5) + (b<<4) + (b<<3)<<"\n"; //Check c1
//cout <<(d<<7) - (d<<3)<<"\n"; //Check d
//cout <<(c<<7) - (c<<2)<<"\n"; //Check c2
cout << " x=" << x << " y=" << y << " a=" << a << " c=" << c << " d=" << d << endl;
return 0;
}