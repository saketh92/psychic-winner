#include "Car.h"
#include <iostream>
using namespace std;

//Constructors
Car::Car(){
    doors = 4;
    windows = 4;
    color = "black";
}
Car::Car(int x, int y, string z){
    doors = x;
    windows = y;
    color = z;
}
void Car:: SetColor(string z){
    color = z;
}
string Car:: GetColor(){
    return color;
}
void Car:: SetDoors(int z){
    doors = z;
}
int Car:: GetDoors(){
    return doors;
}
void Car:: SetWindows(int z){
    windows = z;
}
int Car:: GetWindows(){
    return windows;
}
