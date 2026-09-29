/**
    Structs V/S Arrays
    -> Arrays contains of same DataTypes
    -> Structs can contain all types of the DataTypes
**/


#include<iostream>
#include <vector>
using namespace std;


// Variables in the 'struct' are called as the "members"
// Members can be accessed using the dot operator i.e: "Class Member Access Operator"
struct student {
    string name;
    double gpa;
    bool is_enrolled;
};
// We use the dot operator to assign the values.

struct Cars {
    string model;
    int year;
    string color;
};

void print_car(Cars car);
void print_car_By_arguments(Cars &car);
void paint_cars(Cars &car, string color);

int main() {
    student S1;
    S1.name= "Aayush";
    S1.gpa= 4.5;
    S1.is_enrolled= true;
    // cout<<S1.name;

    Cars car1, car2;
    car1.model= "Mustang";
    car1.color= "Red";
    car1.year= 2026;

    car2.model= "Corvette";
    car2.color= "Black";
    car2.year= 2025;
    cout<<&car1<<endl;
    print_car_By_arguments(car1);
    print_car(car1);

    paint_cars(car2, "Silver");
    print_car(car2);
    return 0;
}

void print_car(Cars car) {
    cout<<&car<<" <- Pass By Value"<<endl;
    cout<< car.model<<"\t"<<car.color<<"\t"<<car.year<<endl;
}

void print_car_By_arguments(Cars &car) {
    cout<<&car<<" <- Pass By Reference"<<endl;
}

void paint_cars(Cars &car, string color) {
    car.color= color;
}