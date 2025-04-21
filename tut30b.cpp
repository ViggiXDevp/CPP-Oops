#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distance(Point o1, Point o2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
void distance(Point o1, Point o2)
{
    double dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << dist << endl;
}
int main()
{
    Point p(0, 0);           // Implicitly
    p.displayPoint();
    Point q = Point(2, 0);   // Explicitly
    q.displayPoint();
    distance(p, q);
    return 0;
}
