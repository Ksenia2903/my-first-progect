#include <iostream>
#include <cmath>
using namespace std;
double func(float a, float b, double x)
   {
	return a * x + b;
   }
int main()
  {
	float a, b;
	cin >> a >> b;
	double lx, ly, cx, cy, rx, ry;
	bool lp=0, cp=0, rp=0;
	lx = -9223372036854775808.0;
	rx = 9223372036854775807.0;
	ly = func(a, b, lx);
	ry = func(a, b, rx);
	cx = lx;
	cy = ly;
	if (ly > 0)
	{
		lp = 1;
	}
	else
	{
		lp = 0;
	}
	if (ry > 0)
	{
		rp = 1;
	}
	else
	{
		rp = 0;
	}
	if (lp == rp)
	{
		cout << "unable to calculate function root";
	}
	else 
	  {
		if (abs(ly) < 0.000001)
		{
			cy = ly;
			cx = lx;
		}
		if (abs(ry) < 0.000001)
		{
			cy = ry;
			cx = rx;
		}
		while (abs(cy) > 0.000001)
		{
			cx = (lx + rx) / 2;
			cy = func(a, b, cx);
			if (cy > 0)
			{
				cp = 1;
			}
			else
			{
				cp = 0;
			}
			if (cp == lp)
			{
				lx = cx;
				ly = cy;
			}
			else
			{
				rx = cx;
				ry = cy;
			}
		}
		cout << "function root is   " << cx;
      }
	return 0;
	}