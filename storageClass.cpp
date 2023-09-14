#include<bits/stdc++.h>
using namespace std;

int n = 10;
int a = 20;

class test4{
    public : 
    int x;
    mutable int y;
    test4(){
        x = 3;
        y = 4;
    }
};

void test(){
    extern int n; // extern storage class
    n =  20;
    int a;
    a = 30;
    cout<<"n : "<<n<<endl;
    cout<<"a : "<<a<<endl;
}

void test1(){ // static storage class
    static int s = 0;
    s++;
    cout<<"s : "<<s<<endl;
}

void test3(){
    register int z;
    cout<<"z : "<<z<<endl;
}

int main(){
    test();
    cout<<"n : "<<n<<endl;
    cout<<"a : "<<a<<endl;
    for (int i = 0; i < 5; i++){
        test1();
    }

    test3();

    test4 t;
    cout<<t.x<<" "<<t.y<<endl;
    t.x = 2; // this will throw error
    t.y = 0;
    cout<<t.x<<" "<<t.y<<endl;
    return 0;
}