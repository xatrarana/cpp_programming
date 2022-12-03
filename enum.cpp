#include <iostream>
enum Days{ sun, mon, tue = 5, wed, thurs, fri, sat};
int main()
{
    enum Days day;
    day = thurs;
    std::cout << day << std::endl;   // 7 as the value of tu is 5 
    return 0; 
}


// #include <iostream>
// enum Season{ Summer, Spring, Winter, Autumn};
// int main()
// {
//     std::cout << Winter;
//     return 0;
// }