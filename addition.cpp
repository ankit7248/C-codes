// #include <iostream>
// #include"hello.h"
// using namespace std;

// int main()
// {
//     int num1, num2;
//     cin >> num1; //">>"is called extraction operator
//     cout << "enter the num2 value\n";
//     cin >> num2;

//     cout << "value of addition is " << num1 + num2;
// }

// #include <iostream>
// using namespace std;

// class Car {
//   public:
//     int speed(int maxSpeed);
// };

// int Car::speed(int maxSpeed) {
//   return maxSpeed;
// }

// int main() {
//   Car myObj;
//   cout << myObj.speed(200);
//   return 0;
// }

#include<iostream>

using namespace std;

class body
{
    public :
    string a = "tere gand me jhand";

    void boy()
    { 
        cout<<a;
    }
        // void display()
        // {
        //     cout<<a;
        // }
    
    };
    class girl: public body
    
    {};
    class gender : public girl
    {};
    int main()
    {
        gender myobj;
        myobj.boy();
        // myobj.display();
        return 0;
    }


