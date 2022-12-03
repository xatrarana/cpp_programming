#include <iostream>
// A class that contains a pure virtual function is known as an abstract class.
using namespace std;
   class shape{           //  as the virtual function is in class shape it is abstract class
        protected:
            float l;
        public:
            shape() : l(0){};
        
        void setVal(){
            cin >> l;
        }
       virtual float area() = 0;
   };
   class square : public shape{
        public:
        float area(){
            return l * l;
        }
   };
   class circle : public shape{
        public:
            float area(){
                return 3.14 * l * l;
            }
   };
int main(){

            square s;
            circle c;
            s.setVal();
           cout << "Area of square: "<<s.area();

            c.setVal();
           cout << "Area of circle: "<<c.area(); 
       
         
     return 0;
}