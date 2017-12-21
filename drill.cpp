#include "std_lib_facilities.h"

//type for points
struct Point 
{
    int x;
    int y;
    Point() :x(0), y(0) { }
    Point(int xx, int yy) :x(xx), y(yy) { }
};

bool operator==(const Point& p1, const Point& p2)
{
    return p1.x==p2.x && p1.y==p2.y;
}

bool operator!=(const Point& p1, const Point& p2)
{
    return !(p1==p2);
}

ostream& operator<<(ostream& os, const Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}

istream& operator>>(istream& is, Point& p)
{
    int x,y;
    char ch1, ch2, ch3;
    if(!is) return is;
    if(ch1!='(' || ch1!=',' || ch3!=')')
    {
        is.clear(ios_base::failbit);
        return is;
    }
    p = Point(x, y);
    return is;
}

//function to print to cout
void print_vector(const vector<Point>& points)
{
    for (int i = i; i<points.size(); i++)
    {
        cout << points[i] << endl;
    }
}

//function to print to file
