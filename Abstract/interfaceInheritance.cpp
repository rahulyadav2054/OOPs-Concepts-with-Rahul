#include<bits/stdc++.h>
using namespace std;

//interface

class vehicle{
    public:
        virtual void start()=0;

        void honk(){
            cout<<"vehicle is honking"<<endl;
        }
};

class car: public vehicle{
    public:
        virtual void drive()=0;

        void honk(){
            cout<<"car is honking"<<endl;
        }
};

class mannualCar: public car{
    public:
        void start(){
            cout<<"mannual car is started"<<endl;
        }

        void drive(){
            cout<<"mannual car is drived"<<endl;
        }
};

int main(){
    mannualCar mycar;
    mycar.start();
    mycar.drive();
    mycar.honk();
}