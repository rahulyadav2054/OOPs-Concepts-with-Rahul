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
};

class mannualCar: public car{
    public:
        void start(){
            cout<<"mannual car is started"<<endl;
        }

        void numberOfGears(){
            cout<<"mannual car has 6 gears"<<endl;
        }
};

int main(){
    car* mycar = new mannualCar();
    mycar->start();
    mycar->numberOfGears();
    mycar->airbags();
}