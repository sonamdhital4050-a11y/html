// //write a program that includes class shape, atributes of shape, and methods to calculate area of shape rectangle```cpp

// #include<cmath>
// class shape{
//     public:
//     int length;
//     int breadth;
//     public:
//     int CalculateArea(){
//         return length*breadth;
//     }
// };
// int main(){
//     shape s1;
//     s1.length = 5;
//     s1.breadth = 3;
//     std::cout << "Area of shape: " << s1.CalculateArea() << std::endl;
//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------------------------
// program of inheritance in c++ (class rectangle is inherited from class shape, claculate area and volume of rectangle using inheritance, both parent and child class have their own attributes and methods)

// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     int length;
//     int breadth;

//     int CalculateArea()
//     {
//         return length * breadth;
//     }
// };

// class Rectangle : public Shape
// {
// public:
//     int height;

//     int CalculateVolume()
//     {
//         return length * breadth * height;
//     }
// };

// int main()
// {
//     Rectangle r1;

//     r1.length = 10;
//     r1.breadth = 5;
//     r1.height = 5;

//     cout << "Volume = " << r1.CalculateVolume() << endl;
//     cout << "Area = " << r1.CalculateArea() << endl;

//     return 0;
// }

// private specifiers in c++ (private members of parent class are not accessible in child class, but public members of parent class are accessible in child class)
// #include <iostream>
// class Shape{
    
//     private:
//     int length;
//     int breadth;
//     public:
//     int setLength(int l){
//         length = l;
//         return length;
//     }
//     int setBreadth(int b){
//         breadth = b;
//         return breadth; 
//     }
//     // int CalculateArea(){
//     //     return length*breadth;
//     // }
// };
// int main(){
//     Shape s1;
//     Shape s2;
//    std::cout <<"area of shape1: "<<s1.setLength(10)*s1.setBreadth(20)<<std::endl;
//    std::cout <<"area of shape2: "<<s2.setLength(30)*s2.setBreadth(50)<<std::endl;
//     return 0;
// }

// protected specifiers in c++ (protected members of parent class are accessible in child class, but private members of parent class are not accessible in child class)
// #include <iostream>
// using namespace std;
// class Shape{
    
//     protected:
//     int length;
//     int breadth;
//     public:
//     int setInput(int l, int b){
//         length = l;
//         breadth = b;
//     }
// };
// class Rectangle : public Shape{
//     public:
//     int area;
//     int CalculateArea(){
//         area = length*breadth;
//         return area;

//     }
// };
// int main(){
//     Rectangle r1;
//     r1.setInput(20,20);
//     std::cout <<"area of rectangle: "<<r1.CalculateArea()<<std::endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Student{
// public:
// void display(){
//     cout<<"This is a student class"<<endl;
// }
// };
// student::display(){
//     cout<<"This is a student class"<<endl;
// }

// Default Constructor in c++ 
// #include <iostream>
// using namespace std;
// class Car{
//     public:
//     string brand;
//     string model;
//     int price;

//     // Default constructor
//     public:
//     Car() {
//         brand = "Toyota";
//         model = "Corolla";
//         price = 20000;
//     }
//     public:

//     void display() {
//         cout << "Brand: " << brand << endl;
//         cout << "Model: " << model << endl;
//         cout << "Price: " << price << endl;
        
//     }
// };
// int main(){
//     Car c1;
//     c1.display();
//     cout<< "Size of car: " << sizeof(c1) << endl;
//     return 0;
// }

// Parameterized Constructor in c++
// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     int length;
//     int breadth;
// public:
//     // Parameterized constructor
//     Shape(int l, int b) {
//         length = l;
//         breadth = b;
//     }
// public:
//     int CalculateArea() {
//         return length * breadth;
//     }
// };
// int main(){
//     Shape s1(10, 20);
//     s1.CalculateArea();
//     cout << "Area of shape: " << s1.CalculateArea() << endl;
//     cout<< "Size of shape: " << sizeof(s1) << endl;
//     return 0;
// }

// copy constructor in c++ (copy constructor is used to create a copy of an object, it is called when an object is passed by value, returned by value, or explicitly copied)
// #include <iostream>
// using namespace std;
// class copyconstructor{
//     public:
//     string name;
//     int roll;
//     copyconstructor(string n, int r){
//         name = n;
//         roll = r;
//     }

//     copyconstructor(const copyconstructor &O){
//         name = O.name;
//         roll = O.roll;
        
//     }
//     int display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Roll: "<<roll<<endl;
//         return 0;
//     }
//     ~copyconstructor(){
//         cout<<"Destructor called"<<endl;
//     }

// };
// int main(){
    
//     copyconstructor c1("Rajesh", 10);
//     c1.display();
//     copyconstructor c2 = c1; // copy constructor is called here
//     c2.display();
//     cout<< "Size of copyconstructor: " << sizeof(c1) << endl;
//     return 0;
    
// }

// constructor using without dynamic memory allocation in c++ (constructor is used to initialize the object, it is called when an object is created, it can be overloaded, and it can have default arguments)
// #include <iostream>
// using namespace std;
// class constructor{
//     public:
//     int arr[10];
//     int number;
//     constructor(int n){
//         number = n;
//         cout<<"enter the number of elements: "<<endl;
//         cin>>number;
//         for(int i=0; i<number; i++){
//             cin>>arr[i];
//         }
//         int display(){
//             for(int i=0; i<number; i++){
//                 cout<<arr[i]<<" ";
//                 return 0;
//             }
            
//         }
//     }
// };
// int main(){
//     constructor c1(int n);
//     c1.display();
//     return 0;
// }
    
// #include <iostream>
// using namespace std;

// class constructor
// {
// public:
//     int arr[10];
//     int number;

//     constructor(int n)
//     {
//         number = n;

//         cout << "Enter the number of elements: ";
//         cin >> number;

//         cout << "Enter " << number << " elements:" << endl;

//         for(int i = 0; i < number; i++)
//         {
//             cin >> arr[i];
//         }
//     }

//     int display()
//     {
//         cout << "Array elements are: ";

//         for(int i = 0; i < number; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// };

// int main()
// {
//     constructor c1(10); 

//     c1.display();

//     return 0;
// }

// dynamic constructor in c++ (dynamic constructor is used to allocate memory for an object at runtime, it is called when an object is created, it can be overloaded, and it can have default arguments)
// #include <iostream>
// using namespace std;

// class Array {
// public:
//     int *arr;
//     int number;

//     // Constructor
//     Array(int n) {
//         number = n;
//         arr = new int[number];

//         cout << "Enter the array elements: " << endl;
//         for(int i = 0; i < number; i++) {
//             cin >> arr[i];
//         }
//     }

//     // Display function
//     void display() {
//         cout << "Array elements are: " << endl;
//         for(int i = 0; i < number; i++) {
//             cout << arr[i] << " ";
            
//         }
        // ~Array()
        // {
        //     delete[]  arr;
        //     cout<<"Destructor called"<<endl;
        // }
//     }

    
//     };


// int main() {
//     int n;

//     cout << "Enter the number of elements: ";
//     cin >> n;

//     Array c1(n);

//     c1.display();

//     return 0;
// }

// constructor overloading in c++ (constructor overloading is used to create multiple constructors with different parameters, it is called when an object is created, it can be overloaded, and it can have default arguments)
// #include <iostream>
// using namespace std;
// class overloading{
//     private:
//     string name;
//     int roll;
//     int age;

// public:
// overloading(){
//     name = "Null";
//     roll = 0;
//     age = 0;
// }
// overloading(string n){
//     name = n;
//     roll = 0;
//     age = 0;
    
// }
// overloading(string n, int r){
//     name = n;
//     roll = r;
//     age = 0;
// }
// overloading(string n, int r, int a){
//     name = n;
//     roll = r;
//     age = a;
// }
// void display(){
//     cout<<"Name: "<<name<<endl;
//     cout<<"Roll: "<<roll<<endl;
//     cout<<"Age: "<<age<<endl;
// }
// ~overloading(){
//     cout<<"Destructor called"<<endl;
// }
// };
// int main(){
//     overloading o1;
//     overloading o2("Keshav");
//     overloading o3("Keshav", 1);
//     overloading o4("Keshav", 1, 16);
//     o1.display();
//     o2.display();
//     o3.display();
//     o4.display();
//     return 0;
// }

// static data members in c++ (static data members are shared among all objects of a class, they are initialized only once, and they can be accessed using the class name)
// #include <iostream>
// using namespace std;

// class Student {
// public:
//     static int count;

//     Student() {
//         count++;
//     }
// };
// int Student::count = 0;

// int main() {
//     Student s1;
//     Student s2;
//     Student s3;

//     cout << "Total objects: " << Student::count << endl;

//     return 0;
// }

// static data members 2.cpp (static data members are shared among all objects of a class, they are initialized only once, and they can be accessed using the class name)
// #include <iostream>
// using namespace std;
// class Employee{
//     public:
//     static string company;
//     void display(){
//         cout<<"Company: "<<company<<endl;
//     }
// };
// string Employee::company = "Google";
// int main(){
//     Employee e1, e2;
//     e1.display();
//     e2.display();
//     Employee::company = "Microsoft";
//     e1.display();
//     e2.display();
//     return 0;
// }

//static function members in c++ (static function members are shared among all objects of a class, they are initialized only once, and they can be accessed using the class name)
// #include <iostream>
// using namespace std;
//  class Student{
//     public:
//         static void message(){
//         cout<<"Welcome to c++"<<endl;
//     }
//  };
//  int main(){
//     Student::message();
//     return 0;
//  }

//'this' pointer in c++
// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     int length;
//     int breadth;

//     Shape(int length, int breadth) {
//         this->length = length;
//         this->breadth = breadth;
//     }

//     int CalculateArea() {
//         return length * breadth;
//     }
// };

// int main() {
//     Shape s1(10, 5);

//     cout << "Area is " << s1.CalculateArea() << endl;

//     return 0;
// }

//friend function
// #include<iostream>
// using namespace std;
// class Student{
//         private:
//         int marks;
//         public:
//         Student(){
//                 marks=90;
//         }
//         friend void display(Student);
// };
// void display(Student s){
//         cout << "marks="<< s.marks;

// }
// int main(){
//         Student s;
//         display(s);

//         return 0;
// }

// friend function to add object of 2 class using function pass by value
// #include <iostream>
// using namespace std;

// class B;   

// class A {
// private:
//     int num1;

// public:
//     void setData(int x) {
//         num1 = x;
//     }

//     friend void add(A, B);
// };

// class B {
// private:
//     int num2;

// public:
//     void setData(int y) {
//         num2 = y;
//     }

//     friend void add(A, B);
// };


// void add(A a, B b) {
//     cout << "Sum = " << a.num1 + b.num2 << endl;
// }

// int main() {
//     A obj1;
//     B obj2;

//     obj1.setData(10);
//     obj2.setData(20);

//     add(obj1, obj2);

//     return 0;
// }

// friend function to add obj of 2 class using function pass by reference
// #include <iostream>
// using namespace std;

// class B;   

// class A {
// private:
//     int num1=10;

// public:

//     friend void add(A *, B *);   
// };

// class B {
// private:
//     int num2=20;

// public:

//     friend void add(A *, B *);   
// };
// void add(A *a, B *b) {
//     cout << "Sum = " << a->num1 + b->num2 << endl;
// }

// int main() {
//     A obj1;
//     B obj2;

//     add(&obj1, &obj2);   

//     return 0;
// }

//type conversion basic to class type conversion in c++ (type conversion is used to convert one data type to another, it can be done using constructor or operator overloading)
// #include<iostream>
// using namespace std;

// class Distance{
//         int meter;
//         public:
//         Distance(int m){
//                 meter = m;
//         }
//         void display(){
//                 cout<<"Distance= "<< meter<< " meters"<<endl;
//         }
// };
// int main(){
//         Distance d=10;
//         d.display();
//         return 0;
// }

// class to basic type conversion
// #include<iostream>
// using namespace std;

// class Distance{
//         int meter;
//         public:
//         Distance (int m){
//                 meter=m;
//         }
//         operator int(){
//                 return meter;
//         }
// };
// int main(){
//         Distance d(10);
//         int x=d;
//         cout<<"Distance = "<<x<<" meters";
//         return 0;
// }

//class to class type conversion
// #include<iostream>
// using namespace std;

// class A{
//         public:
//         int x;
//         A(int a){
//                 x=a;
//         }
// };
// class B{
//         int y;
//         public:
//         B(A obj){
//                 y=obj.x;
//         }
//         void display(){
//                 cout<<"Value = "<<y<<endl;
//         }
// };
// int main(){
//         A a(10);
//         B b=a;
//         b.display();
//         return 0;
// }


// class to class type conversion example 2
// #include <iostream>
// using namespace std;
// class Rupee{
//         public:
//         int amount;
//         Rupee(int a){
//                 amount=a;
//         }
// };

// class Dollar{
//         float usd;
//         public:
//         Dollar(Rupee r){
//                 usd=r.amount/140.0;
//         }
//         void display(){
//                 cout<<"Dollar = $"<<usd<<endl;
//         }
// };
// int main(){
//         Rupee r(1400);
//         Dollar d=r;
//         d.display();
//         return 0;
// }

//operator overloading using friend function in c++ (operator overloading is used to redefine the way operators work for user-defined types, it can be done using member function or friend function)
// #include <iostream>
// using namespace std;
// class Complex{
//         int real;
//         int imag;
//         public:
//         Complex(int r=0, int i=0){
//                 real=r;
//                 imag=i;
//         }
//         friend Complex operator+(Complex c1, Complex c2);
//         void display(){
//                 cout<<real<<"+"<<imag<<"i"<<endl;
//         }
// };
// Complex operator+(Complex c1, Complex c2){
//         Complex temp;
//         temp.real=c1.real+c2.real;
//         temp.imag=c1.imag+c2.imag;
//         return temp;
// }
// int main(){
//         Complex c1(2,3), c2(4,5);
//         Complex c3=c1+c2;
//         cout<<"Result = ";
//         c3.display();
//         return 0;
// }

//overloading unary operator using friend function in c++ (unary operator overloading is used to redefine the way unary operators work for user-defined types, it can be done using member function or friend function)
// #include <iostream>
// using namespace std;
// class Number{
//         int num;
//         public:
//         Number(int n=0){
//                 num=n;
//         }
//         friend Number operator++(Number n);
//         void display(){
//                 cout<<num;
//         }
// };
// Number operator++(Number n){
//         ++n.num;
//         return n;
// }
// int main(){
//         Number n1(10);
//         n1=++n1;
//         n1.display();
//         return 0;
// }

//single inheritance in c++ (single inheritance is used to inherit the properties of a base class into a derived class, it can be done using public, protected, or private access specifiers)
// #include <iostream>
// using namespace std;
// class Person{
// public:
// string name = "Keshab";

// void displayName(){
//     cout<<"Name: "<<name<<endl;
// }
// };
// class Student : public Person{
// public:
// void displayStudent(){
//     cout<<"I anm a student"<<endl;
// }
// };
// int main(){
//     Student s1;
//     s1.displayName();
//     s1.displayStudent();
//     return 0;
// }

//multiple inheritance in c++ (multiple inheritance is used to inherit the properties of multiple base classes into a derived class, it can be done using public, protected, or private access specifiers)
// #include <iostream>
// using namespace std;

// class Person{
// public:
//     string name = "Keshab";

//     void displayName(){
//         cout<<"Name: "<<name<<endl;
//     }
// };
// class Employee{
//         public:
//         int id = 101;
//         void displayId(){
//             cout<<"ID: "<<id<<endl;
//         }

// };

// class Student : public Person, public Employee{
//     public:
//     void display(){
//         cout<<"I am a student"<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.displayName();
//     s1.displayId();
//     s1.display();
//     return 0;
// }

//multilevel inheritance in c++ (multilevel inheritance is used to inherit the properties of a base class into a derived class, and then inherit the properties of the derived class into another derived class, it can be done using public, protected, or private access specifiers)
// #include<iostream>
// using namespace std;

// class Person{
// public:
//     string name = "Keshab";

//     void displayName(){
//         cout<<"Name: "<<name<<endl;
//     }
// };
// class Employee: public Person{
//         public:
//         int id = 101;
//         void displayId(){
//             cout<<"ID: "<<id<<endl;
//         }

//  };

//  class Student : public Employee{
//      public:
//      void display(){
//          cout<<"I am a student"<<endl;
//      }
//  };
//  int main(){
//      Student s1;
//      s1.displayName();
//      s1.displayId();
//      s1.display();
//      return 0;
//  }

//hierarchical inheritance in c++ (hierarchical inheritance is used to inherit the properties of a base class into multiple derived classes, it can be done using public, protected, or private access specifiers)
// #include <iostream>
// using namespace std;


//hybrid inheritance in c++ (hybrid inheritance is a combination of multiple and multilevel inheritance, it can be done using public, protected, or private access specifiers)
// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name = "Keshab";

//     void displayName() {
//         cout << "Name: " << name << endl;
//     }
// };

// class Employee : public Person {
// public:
//     int id = 101;

//     void displayid() {
//         cout << "ID: " << id << endl;
//     }
// };

// class Student : public Person {
// public:
//     void displayName() {
//         cout << "I am a student" << endl;
//     }
// };

// class graduate_student : public Employee {
// public:
//     void displayGraduateStudent() {
//         cout << "I am a Graduate student" << endl;
//     }
// };

// int main() {

//     Student s1;

//     s1.displayName();

//     graduate_student t1;

//     t1.displayName();
//     t1.displayid();
//     t1.displayGraduateStudent();

//     return 0;
// }

//function overloading in c++ (function overloading is used to create multiple functions with the same name but different parameters, it can be done using default arguments or different number of parameters)
// #include <iostream>
// using namespace std;

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     double add(double a, double b) {
//         return a + b;
//     }

// };
// int main() {
//     Calculator c;

//     cout << "Sum of integers: " << c.add(5, 10) << endl;
//     cout << "Sum of doubles: " << c.add(5.5, 10.5) << endl;

//     return 0;
// }

//operator overloading + in c++ (operator overloading is used to redefine the way operators work for user-defined types, it can be done using member function or friend function)
// #include <iostream>
// using namespace std;

// class Complex {
//     private:
//     int real;
//     int imag;
// public:
//     Complex(int r=0, int i=0) {
//         real = r;
//         imag = i;
//     }

//     Complex operator+(Complex c) {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;
//         return temp;
//     }

//     void display() {
//         cout << real << "+" << imag << "i" << endl;
//     }
// };
// int main() {
//     Complex c1(2, 3), c2(4, 5);
//     Complex c3 = c1 + c2;
//     cout << "Result = ";
//     c3.display();
//     return 0;
// }

// pointer to derived object in c++ (pointer to derived object is used to access the members of the derived class using the pointer of the base class, it can be done using virtual functions or function overriding)
// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     void sound(){
//         cout<<"Animal sound"<<endl;
//     }
// };
// class Dog : public Animal{
//     public:
//     void bark(){
//         cout<<"Dog barks"<<endl;
//     }
// };
// int main(){
//     Dog d;
//     Dog *ptr = &d;
//     ptr->sound();
//     ptr->bark();
//     return 0;
// }

// function overriding in c++ (function overriding is used to redefine the way a function works in the derived class, it can be done using virtual functions or function hiding)
// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     virtual void sound(){
//         cout<<"Animal makes a sound"<<endl;
//     }
// };
// class Dog : public Animal{
//     public:
//     void sound() override{
//         cout<<"Dog barks"<<endl;
//     }
// };
// int main(){
//     Animal *ptr;
//     Dog d;
//     ptr = &d;
//     ptr->sound();
//     return 0;
// }

// pure virtual function in c++ (pure virtual function is used to create an abstract class, it is declared using the =0 syntax, and it must be overridden in the derived class)
// #include <iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual void area()=0; // pure virtual function
// };
// class Circle : public Shape{
//     public:
//     void area() override{
//         cout<<"Area of circle"<<endl;
//     }
// };
// int main(){
//     Circle c;
//     Shape *ptr = &c;
//     ptr->area();
//     return 0;
// }

// c++ program using an abstract class and a pure virtual function to calculate the area of a different shapes (circle, rectangle, triangle) using inheritance and polymorphism
// #include <iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual void area()=0; // pure virtual function
// };
// class Circle : public Shape{
//     public:
//     float radius;
//     public:
//     Circle(float r){
//         radius = r; 
//     }
//     void area() override{
//         cout<<"Area of circle: "<<3.14*radius*radius<<endl;
//     }
// };
// class Rectangle : public Shape{
//     public:
//     float length;
//     float breadth;
//     public:
//     Rectangle(float l, float b){
//         length = l;
//         breadth = b; 
//     }
//     void area() override{
//         cout<<"Area of rectangle: "<<length*breadth<<endl;
//     }
// };
// int main(){
//     Circle c(5);
//     Rectangle r(10, 20);
//     Shape *ptr;
//     ptr = &c;
//     ptr->area();
//     ptr = &r;
//     ptr->area();
//     return 0;
// }

//exceptional handling in c++ (exceptional handling is used to handle runtime errors, it can be done using try, catch, and throw keywords)
// #include <iostream>
// using namespace std;
// int main(){
//     int a, b;
    
//     cin >> a >> b;
//     try{
//         if(b==0){
//             throw "Division by zero is not allowed";
//         }
//         double c = double(a)/b;
//         cout<< c<<endl;
//         }
//         catch(const char* msg){
//             cout<< "Exception: "<< msg <<endl;
//         }
//         cout<< "Program completed" <<endl;
//         return 0;
// }

//put pointer in c++ (put pointer is used to write data to a file, it can be done using ofstream class and put() function)
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file("data.txt");
    file << "Hello World";

    cout << "current position: " << file.tellp() << endl;
    file.seekp(6);
    file << "C++";
    file.close();
    return 0;
}