#include<bits/stdc++.h>
using namespace std;

class OuterClass{
    public:
        static int value;
        string name="Rahul Yadav";

        class InnerClass{
            public:
                void execute(){
                    cout<<"inner class executed and outerclass static value is "<<OuterClass::value<<endl;
                }
        };
};

int OuterClass::value=10;

int main(){
    OuterClass::InnerClass obj1;
    obj1.execute();
}