#include<bits/stdc++.h>
using namespace std;

class car{
    public: 
        virtual void start()=0;

        void noise(){
            cout<<"my car is here"<<endl;
        }
};

class mannualCar: public car{
    public: 
        void start() override{
            cout<<"mannual car is starting"<<endl;
        }

        void printName(){
            cout<<"hey, i am mannual car"<<endl;
        }
};

int main(){
    //car* mycar= new mannualCar();  with this printName() is not working because base class car is not having this function
    mannualCar* mycar= new mannualCar();
    mycar->start();
    mycar->noise();
    mycar->printName();
    delete mycar;
    return 0;
}