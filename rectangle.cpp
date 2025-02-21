#include<iostream>
using namespace std;
 class Point
{
	public :int x,y;
};

class Rect
{
	public : Point TL;
		 Point BR;
};

int main()
{
	Rect r = {{0,0},{10,9}};
	cout << "[(" << r.TL.x << " " << r.TL.y <<
		") (" << r.BR.x << " " << r.BR.y << ")]" << endl;
	return 0;
}
