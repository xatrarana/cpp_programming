#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> n = { 1, 2, 3, 4, 5 };

    std::cout << n[2] << std::endl;

    return 0;
}



#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> n;

    //taking values of elements from user
    for(int i = 0; i < n.size() ; i++)
    {
	cout << "Enter value of n[" << i << "]"<< endl;
    	cin >> n[i];
    }

    /* printing the values of elements of array */
    for (int j = 0; j < n.size(); j++ )
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }
    return 0;
}