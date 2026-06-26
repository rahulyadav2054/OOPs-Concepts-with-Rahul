#include<bits/stdc++.h>
using namespace std;

class Product{
    private:
        string name;
        string category;
        double price;

    public:
        Product(string name, string category, double price){
            this->name=name;
            this->category=category;
            this->price=price;
        }

        void displayProduct(){
            cout<<"name: "<<name<<endl;
            cout<<"category: "<<category<<endl;
            cout<<"price: "<<price<<endl;
        }
};

class Electronics: public Product{
    private:
        string brand;
        int warrentyPeriod;

    public:
        Electronics(string name, double price, string brand, int warrentyPeriod): Product(name, "Electronics", price){
            this->brand=brand;
            this->warrentyPeriod=warrentyPeriod;
        }

        void displayProduct(){
            Product::displayProduct();
            cout<<"brand: "<<brand<<endl;
            cout<<"warrenty Period: "<<warrentyPeriod<<endl;
        }
};

int main(){
    Electronics e1("Fan", 2000.0, "Usha", 5);
    e1.displayProduct();
}