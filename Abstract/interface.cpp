#include<bits/stdc++.h>
using namespace std;

//interface
class car{
    public:
        virtual void start()=0;
        virtual void numberOfGears()=0;

        void airbags(){                      //default method
            cout<<"car has airbags"<<endl;
        }

        static void typeOfVehicle(){
            cout<<"this is car"<<endl;
        }
};

class mannualCar: public car{
    public:
        /*mannualCar(){
            car::typeOfVehicle();
        }*/
        void start(){
            cout<<"mannual car is started"<<endl;
        }

        void numberOfGears(){
            cout<<"mannual car has 6 gears"<<endl;
        }
};

int main(){
    car::typeOfVehicle();
    car* mycar = new mannualCar();
    mycar->start();
    mycar->numberOfGears();
    mycar->airbags();
}