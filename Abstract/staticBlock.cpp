#include<bits/stdc++.h>
using namespace std;

class example{
    public:
        static int value;

    private:
        static int init(){
            cout<<"static initialization executed"<<endl;
            value=10;
            return 0;
        }

        static int trigger;
};

int example::value=0;
int example::trigger=example::init();

int main(){
    cout<<"Value: "<<example::value<<endl;;
    
}