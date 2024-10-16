//Name: - Manas Gautam
//PRN: - 23070123081
//Batch: - E&Tc {B}

// Experimnet 11 A: -

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

// Experiment 11 B: - 

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

//Experiment 11 C: - 


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

// Experiment 11 D


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