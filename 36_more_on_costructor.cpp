#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Point p(1, 3);
    p.displayPoint();
    Point q(5, 6);
    q.displayPoint();
    return 0;
}
// H.W , Create a function which takes 2 point objects and compute the distance b/w them?
// Hint:- Make it a friend function