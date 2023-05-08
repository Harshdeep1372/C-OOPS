#include <iostream>
#include <string>
using namespace std;

class Lecture {
    private:
        string name;
        string subject;
        string course;
        int no_lecturers;
        

    public:
        void setName(string lecturerName) {
            name = lecturerName;
        }

        void setSubject(string lecturerSubject) {
            subject = lecturerSubject;
        }



        void setCourse(string lecturerCourse) {
            course = lecturerCourse;
        }
            void setNo_lecturers(int lecturerNo_lecturers) {
            no_lecturers = lecturerNo_lecturers;
        }

        void printDetails() {
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Course: " << course << endl;
            cout << "NO. of Lecturers: " << no_lecturers << endl;
        }
};

int main() {
    Lecture lecturer1, lecturer2;
    string name, subject, course;
    int no_lecturers;

    cout << "Enter name of lecturer 1: ";
    getline(cin, name);
    lecturer1.setName(name);

    cout << "Enter subject of lecturer 1: ";
    getline(cin, subject);
    lecturer1.setSubject(subject);

    cout << "Enter number of lecturer of lecturer 1: ";
    cin >> no_lecturers ;
    lecturer1.setNo_lecturers(no_lecturers);

    cin.ignore(); // to clear the input buffer

    cout << "Enter course of lecturer 1: ";
    getline(cin, course);
    lecturer1.setCourse(course);

    cout << endl;
    lecturer1.printDetails();
    cout << endl;

    // Repeat the above code for the remaining 4 lecturers

    return 0;
}

