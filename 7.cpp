#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int marks[3];  

    static int studentCount;  

public:
    // Constructor
    Student() {
        id = 0;
        name = "NA";
        for (int i = 0; i < 3; i++)
            marks[i] = 0;
        studentCount++;
        cout << "Constructor called. Total students: " << studentCount << endl;
    }

    
    Student(int i, string n, int m[]) {
        id = i;
        name = n;
        for (int j = 0; j < 3; j++)
            marks[j] = m[j];
        studentCount++;
        cout << "Parameterized constructor called. Total students: " << studentCount << endl;
    }

    
    Student(const Student &obj) {
        id = obj.id;
        name = obj.name;
        for (int i = 0; i < 3; i++)
            marks[i] = obj.marks[i];
        studentCount++;
        cout << "Copy constructor called. Total students: " << studentCount << endl;
    }

    
    ~Student() {
        studentCount--;
        cout << "Destructor called. Remaining students: " << studentCount << endl;
    }

   
    inline void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Marks: ";
        for (int i = 0; i < 3; i++) cout << marks[i] << " ";
        cout << endl;
    }

   
    static int getStudentCount() {
        return studentCount;
    }

    
    void updateStudent(const Student &newData) {
        id = newData.id;
        name = newData.name;
        for (int i = 0; i < 3; i++)
            marks[i] = newData.marks[i];
    }

    
    Student getTopScorer(const Student &other) {
        int total1 = 0, total2 = 0;
        for (int i = 0; i < 3; i++) {
            total1 += marks[i];
            total2 += other.marks[i];
        }
        if (total1 >= total2)
            return *this;
        else
            return other;
    }
};


int Student::studentCount = 0;


void displayAll(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].display();
    }
}

int main() {
    
    Student students[2];

    
    int marks1[3] = {85, 90, 88};
    int marks2[3] = {78, 83, 80};

    
    Student s1(1, "Alice", marks1);
    Student s2(2, "Bob", marks2);

    
    students[0] = s1;
    students[1] = s2;

    cout << "\nAll students:\n";
    displayAll(students, 2);

    
    Student newData(1, "Alice Updated", marks2);
    students[0].updateStudent(newData);

    cout << "\nAfter updating Alice's data:\n";
    displayAll(students, 2);

    
    Student top = s1.getTopScorer(s2);
    cout << "\nTop scorer is:\n";
    top.display();

    cout << "\nTotal students currently: " << Student::getStudentCount() << endl;

    return 0;
}