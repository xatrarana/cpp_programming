#include <iostream>
#include <cstring>

using namespace std;
template <class T>
T sum(T x , T y){
    return x + y;
}

int main()
{
    cout << "The sum of int is: "<<sum(5,5)<<endl;
    cout << "The sum of float is: "<<sum(5.5,5.5)<<endl;
    cout << "The sum of double is: "<<sum(5.555,5.555);
	return 0;
}



//when multiple case aries 
#include <iostream>

using namespace std;

template < typename T1, typename T2 >
T2 product( T1 x, T2 y)
{
    return (T2)(x * y);
}

int main()
{
	cout << product(3, 4.7) << endl;
	cout << product(4, 5.6) << endl;
	return 0;
}



//class template
#include <iostream>

using namespace std;

template <class T>
class Student
{
	T marks1;
	T marks2;
	public:
		Student( T m1, T m2 )
		{
			marks1 = m1;
			marks2 = m2;
		}
		T totalMarks()
		{
			return marks1 + marks2;
		}
};

int main()
{
	Student<int> s1 ( 45, 50 );
	Student<float> s2 ( 47.5, 56.4 );
	cout << "Total marks of student1 : " << s1.totalMarks() << endl;
	cout << "Total marks of student2 : " << s2.totalMarks() << endl;
	return 0;
}