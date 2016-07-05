#include <iostream>
#include "Car.h"
using namespace std;
void Passobject(Car);

int main()
{
    Car car1(3,4,"brown");
    Car car2;
    Passobject(car1);
    Passobject(car2);
    return 0;
}

void Passobject(Car ob){
    cout<<"Color: "<<ob.GetColor()<<"\nDoors: "<<ob.GetDoors()<<"\nWindows "<<ob.GetWindows()<<endl;
}
