# Experiment-11
## Theory: - 
### Classes and Objects in C++ - A Complete Guide

In C++, **classes** and **objects** are fundamental to Object-Oriented Programming (OOP). They allow you to create data structures that can model real-world entities with attributes (data) and behaviors (functions). This approach enhances modularity, code reuse, and abstraction in software development.

---

### 1. **Classes**
A **class** is a blueprint for creating objects. It defines the properties (attributes) and functions (methods) that an object will have. In C++, a class is defined using the `class` keyword followed by the class name and a set of data members and member functions.

#### Basic Syntax of a Class:

```cpp
class ClassName {
public:
    // Data members (attributes)
    int data;

    // Member functions (methods)
    void display() {
        cout << "Data: " << data << endl;
    }
};
```

- **Data members**: These are the variables that hold data specific to the object.
- **Member functions**: These are functions that perform operations on the data members.

The `public` keyword indicates that the members are accessible from outside the class.

---

### 2. **Objects**
An **object** is an instance of a class. When you create an object, it contains the actual data defined by the class blueprint. Multiple objects can be created from a single class, and each object will have its own copy of the data.

#### Example of Creating an Object:

```cpp
ClassName obj;  // obj is an object of ClassName
obj.data = 10;  // Accessing the data member of the object
obj.display();  // Calling the member function of the object
```

Here, `obj` is an object of the class `ClassName`, and we can access its data members and member functions using the dot (`.`) operator.

---

### 3. **Access Specifiers**
C++ provides three access specifiers to control the visibility of class members:

- **public**: Members declared as public are accessible from outside the class.
- **private**: Members declared as private are only accessible within the class itself.
- **protected**: Members declared as protected are accessible in the class and by derived classes (used in inheritance).

By default, members of a class are **private** unless specified otherwise.

#### Example with Access Specifiers:

```cpp
class Person {
private:
    string name;  // private member, cannot be accessed outside the class

public:
    int age;      // public member, can be accessed from outside the class

    // Member function to set private member
    void setName(string personName) {
        name = personName;
    }

    // Member function to get private member
    string getName() {
        return name;
    }
};

int main() {
    Person p;
    p.age = 30;       // Can directly access public member
    p.setName("John"); // Using public member function to set private data
    cout << p.getName() << " is " << p.age << " years old." << endl;
    return 0;
}
```

### Output:
```
John is 30 years old.
```

### 4. **Constructors**
A **constructor** is a special member function that is automatically called when an object is created. Its main purpose is to initialize the object's data members. In C++, a constructor has the same name as the class and does not have a return type.

#### Types of Constructors:
- **Default constructor**: A constructor with no parameters.
- **Parameterized constructor**: A constructor that accepts arguments to initialize the object with specific values.
- **Copy constructor**: A constructor that creates a new object as a copy of an existing object.

#### Example:

```cpp
class Rectangle {
private:
    int width, height;

public:
    // Default constructor
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Parameterized constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect1;  // Calls default constructor
    Rectangle rect2(5, 10);  // Calls parameterized constructor

    cout << "Area of rect1: " << rect1.area() << endl;
    cout << "Area of rect2: " << rect2.area() << endl;

    return 0;
}
```

### Output:
```
Area of rect1: 0
Area of rect2: 50
```

---

### 5. **Destructors**
A **destructor** is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. Destructors are used to release resources allocated by the object (e.g., memory, files). A destructor has the same name as the class, but it is prefixed with a tilde (`~`), and it takes no parameters.

#### Example of Destructor:

```cpp
class Test {
public:
    Test() {
        cout << "Constructor called!" << endl;
    }

    ~Test() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Test obj;  // Constructor is called when the object is created
    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
```

### Output:
```
Constructor called!
Destructor called!
```

---

### 6. **Member Functions**
- **Inline Functions**: Member functions can be defined inside the class definition or outside. If defined inside, they are treated as **inline** functions, which means the compiler replaces the function call with the function code itself (for performance optimization).

#### Example:

```cpp
class Sample {
public:
    int x;

    // Inline function
    void setX(int val) {
        x = val;
    }
};
```

- **Outside Definition**: Member functions can also be defined outside the class using the scope resolution operator `::`.

#### Example:

```cpp
class Sample {
public:
    int x;

    // Declaration of function
    void setX(int val);
};

// Definition of the member function outside the class
void Sample::setX(int val) {
    x = val;
}
```

---

### 7. **Static Members**
- **Static Data Members**: A static data member is shared by all objects of a class. It is declared with the `static` keyword, and there is only one copy of the static member for the entire class.
- **Static Member Functions**: These functions can access only static data members and can be called using the class name (without creating an object).

#### Example:

```cpp
class Example {
public:
    static int count;

    Example() {
        count++;
    }

    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

// Definition of static data member
int Example::count = 0;

int main() {
    Example obj1, obj2;
    Example::displayCount();  // Access static function using class name

    return 0;
}
```

### Output:
```
Count: 2
```

---

### 8. **Friend Functions and Classes**
A **friend function** or **friend class** allows access to the private and protected members of another class. This breaks the encapsulation rule but can be useful for certain scenarios.

#### Example of Friend Function:

```cpp
class Sample {
private:
    int data;

public:
    Sample(int val) : data(val) {}

    // Declare a friend function
    friend void showData(Sample obj);
};

// Definition of friend function
void showData(Sample obj) {
    cout << "Data: " << obj.data << endl;  // Accessing private data
}

int main() {
    Sample obj(10);
    showData(obj);  // Friend function can access private members

    return 0;
}
```

### Output:
```
Data: 10
```

---


## Experiment : - 11{A} : Defining a Class

## Code: - 

#include <iostream>
using namespace std;
class Car {
public:
    string make = "Kia";   
    string model = "Seltos";  
    int year = 2024;
};
int main() {
    Car myCar;
cout << "Car Details: " << myCar.make << " " << myCar.model << " (" << myCar.year << ")"<<endl;
    return 0;
}


## Output: - 

![image](https://github.com/user-attachments/assets/ec506fb5-bf15-40ce-ad0f-c117f1c555bc)

## Experiment 11 {B}: - Class with User Input

## Code: - 

#include<iostream>
using namespace std;
class Book {
    public:
    string title;
    string author;
    int publicationYear;

    void userInput() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter book author: ";
        cin >> author;

        cout << "Enter publication year: ";
        cin >> publicationYear;
    }

    void displayInfo() {
        cout << "Book details: " << title << " by " << author << " (" << publicationYear <<")"<< endl;
    }
};

int main() {
    Book myBook;
    myBook.userInput();
    myBook.displayInfo();
    return 0;
}


## Output: - 

![image](https://github.com/user-attachments/assets/0bb5bd15-8c7b-4a15-9444-487eee9f08a4)


## Experiment 11{C}: - Area of Rectangle by Using Classes.

## Code: - 

#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    void setDimensions(double len, double wid) {
        length = len;
        width = wid;
    }
    double calculateArea() {
        return length * width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}

## Output: - 

![image](https://github.com/user-attachments/assets/22c6a569-4bc8-4d58-adc6-c95bc1509a3a)


## Experiment 11 {D}: - 

## Code : - 

#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car make: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}
};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}


## Output: - 

![image](https://github.com/user-attachments/assets/2a2ef00b-b7bc-4be0-969a-598b5244056e)



### Summary:
- **Class**: A blueprint for creating objects, containing attributes and behaviors.
- **Object**: An instance of a class.
- **Access specifiers** (`public`, `private`, `protected`) control the visibility of class members.
- **Constructors** and **destructors** are special member functions for initialization and cleanup.
- **Member functions** can be defined inside or outside the class, and can also be static.
- **Friend functions and classes** provide access to private and protected members.

This is a comprehensive overview of classes and objects in C++. Would you like to explore any of these concepts in more detail?
