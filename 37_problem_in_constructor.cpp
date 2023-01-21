#include <iostream>

#include <math.h>
using namespace std;

double Duri(int x1, int y1, int x2, int y2)
{
    double Duri = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << "Distance between them is " << Duri;
    return Duri;
}
int main()
{
    Duri(7, 3, 2, 4);
    cout<<endl;
    return 0;
}