#include<bits/stdc++.h>
using namespace std;

class OuterClass{
    static int val;
    string name="Ram";

    public:

        void execute(){
            const int x=9;

            class InnerClass{
                public:
                    void execute(){
                        cout<<"local inner class executed."<<"and value is : "<<x<<endl;
                    }
            };
            InnerClass innerObj;
            innerObj.execute();
        }
};
        

int OuterClass::val=10;

int main(){
    OuterClass obj1;
    obj1.execute();
}