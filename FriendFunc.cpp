#include <iostream>

using namespace std;
   class A{
        private:
         int len;
         int bea;
         friend int Area(A a);
        public:
        
         A() : len(0), bea(0) {};
         A(int l, int b) : len(l), bea(b){};
         
   };

   Area(A a){

        cout << "The area is: "<<a.len*a.bea;
        
   }
int main(){
         
         A a(10,10);
         Area(a);
       
         
     return 0;
}



// friend as class
#include <iostream>

using namespace std;

class Square
{
	friend class Rectangle;      // declaring Rectangle as friend class
	int side;
	public:
		Square ( int s )
		{
			side = s;
		}
};

class Rectangle
{
	int length;
	int breadth;
	public:
	int getArea()
	{
		return length * breadth;
	}
	void shape( Square a )
	{
		length = a.side;
		breadth = a.side;
	}
};

int main()
{
	Square square(5);
	Rectangle rectangle;
	rectangle.shape(square);
	cout << rectangle.getArea() << endl;
	return 0;
}