#include <iostream>

using namespace std;
   class Complex{
        private:
            float real;
            float imag;
    
        public:
            Complex() : real(0), imag(0) {};

          void input(){
            cout << "Enter real and imag value: ";
            cin >> real;
            cin >> imag;
            
          }
          Complex operator + (Complex &obj){
            Complex temp;
            temp.real = temp.real + obj.real;
            temp.imag = temp.imag + obj.imag;
            return temp;
          }

        void check(){
            if(imag < 0){
                cout << "The value of"<<real<<imag<<"i"<<endl;
                
            }
            else
                cout <<"the value of"<<real<<" + "<<imag<<"i"<<endl;
        }    
   };
int main(){
         Complex c1,c2,res;
         c1.input();
         c2.input();
         res = c1 + c2;
         res.check();
         
     return 0;
}