
#include <iostream>
using namespace std;

class Student {

private:
  
    int studentID;
    string name;
    string department;
    int semester;

public:
  
    void setInformation(int id, string n, string dept, int sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }

    void displayInformation() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Semester: " << semester << endl;
        cout << "------------------------" << endl;
    }
};

int main() {

    
    Student student1, student2, student3;

    
    student1.setInformation(101, "Fayez Ali", "ICT", 2);
    student2.setInformation(102, "Rahim Ahmed", "CSE", 3);
    student3.setInformation(103, "Karim Hasan", "EEE", 4);

    
    cout << "Student Information Management" << endl;
    cout << "===============================" << endl;

    student1.displayInformation();
    student2.displayInformation();
    student3.displayInformation();

    return 0;
}
