#include<bits/stdc++.h>
using namespace std;

class car{
    public: 
        car(){
            cout<<"car constructor is called"<<endl;
        }
        virtual void start()=0;

        void noise(){
            cout<<"my car is here"<<endl;
        }
};

class dealer: public car{
    private:
        int noofcars;
    
    public:
        dealer(){
            cout<<"dealer constructor is called"<<endl;
        }

        dealer(int noofcars){
            cout<<"dealer parameterized constructor is called"<<endl;
        }
};

class mannualCar: public car{
    public:
        mannualCar(){
            cout<<"mannual car constructor is called"<<endl;
        }
        void start() override{
            cout<<"mannual car is starting"<<endl;
        }

        void printName(){
            cout<<"hey, i am mannual car"<<endl;
        }
};

class AutomaticCar: public car{
    public: 
        void start(){
            cout<<"automatic car is starting"<<endl;
        }
};

int main(){
    //car* mycar= new mannualCar();  with this printName() is not working because base class car is not having this function
    car* mycar= new mannualCar();
    mycar->start();
    mycar->noise();
    //mycar->printName();

    car* autocar=new AutomaticCar();
    autocar->start();

    delete mycar;
    delete autocar;
    return 0;
}