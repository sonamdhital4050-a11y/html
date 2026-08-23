// //function member defined inside the class
// #include <iostream>
// using namespace std;
// class Student {
//     public:
//         void display() {
//             cout << "Student information: doma lama" << endl;
//         }

// };
// int main() {
//     Student s;
//     s.display();
//     return 0;
// }

//function member defined outside the class
#include <iostream>
using namespace std;

class Student {
    public:
        void display();
};

void Student::display() {
    cout << "Student information: doma lama" << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}