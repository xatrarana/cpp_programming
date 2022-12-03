// Ambigutiy in inheritance
#include <iostream>
using namespace std;

class A {
 public:
    void show() {
        cout << "A" << endl;
    }
};

class B {
 public:
    void show() {
        cout << "B" << endl;
    }
};

class C:public A, public B {
    // public:
    //     void show(){
    //         cout << "I am from c.";
    //     }
};

int main()
{
    C obj;
    obj.show();               //this cause an runtime eror beacuse the obj.show() is amibigus

    // obj.A::show()  this is the actual way of invoking the method
}