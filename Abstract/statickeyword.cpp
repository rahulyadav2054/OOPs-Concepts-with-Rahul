#include<bits/stdc++.h>
using namespace std;

class BankAccount{
     int counter=0;
    string name;
    double balance;
    public:

        BankAccount(string name, double balance){
            this->name=name;
            this->balance=balance;
            counter++;
        }

        int getcounter(){
            return counter;
        }
};

//int BankAccount::counter=0;

int main(){
    //int BankAccount::counter=0;       static variable belongs to class, not to functions or objects
    BankAccount acc1("rahul",1000.0);
    BankAccount acc2("raj",1000.0);

    cout<<acc1.getcounter()<<endl;
    cout<<acc2.getcounter()<<endl;
}