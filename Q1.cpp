#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
    int x1, x2, y1, y2, r1, r2;
    float distance, mindistance;

    cout<<"Enter the coordinates and radius for the first circle"<<endl;
    
    cout<<"x: ";
    cin>>x1;
    cout<<"y: ";
    cin>>y1;
    cout<<"r: ";
    cin>>r1;

    cout<<"Enter the coordinates and radius for the second circle"<<endl;
    
    cout<<"x: ";
    cin>>x2;
    cout<<"y: ";
    cin>>y2;
    cout<<"r: ";
    cin>>r2;

    distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    mindistance = distance - r1 - r2; 

    if (r1 + r2 > distance)
    {
        cout<<"THE CIRCLES OVERLAP."<<endl;
    }
    else
    {
        cout.precision(2);
        cout<< "THE MINIMUM DISTANCE BETWEEN THE CIRCLES IS " << fixed << mindistance << "." << endl;
    }

    return 0;
}