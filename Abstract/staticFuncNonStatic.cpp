#include<bits/stdc++.h>
using namespace std;

class example{
    public:
        static void doSum(){
            cout<<"static function triggered"<<endl;
            //return sum(a,b);
        };

        int sum(int a, int b){
            doSum();
            return a+b;
        }
};

int main(){
    example::doSum();
    example obj1;
    cout<<obj1.sum(3,6)<<endl;
    
}