#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;


class Car
{
    private:
        int doors, windows;
        string color;
    public:
        //constructors
        Car();
        Car(int, int, string);
        //methods
        void SetColor(string);
        void SetDoors(int);
        void SetWindows(int);
        string GetColor();
        int GetDoors();
        int GetWindows();

};

#endif // CAR_H
