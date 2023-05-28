#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void path(int c, int x, int y)
{
    c = sqrt(pow(x,2)+pow(y,2));
    cout<<"full path: "<<c<<endl;
}
int main()
{
    srand(time(NULL));
    int x = 0, y = 0, c = 0,  n;
    cout<<"enter value: " <<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int z=rand()%10;
        x=x+z;
        y=y+z;
        cout<<"value "<<x<<"/"<<y<<endl;
        if (i==0 || i == n-1)
        {
            path (c,x,y);
        }
    }
    return 0;
}