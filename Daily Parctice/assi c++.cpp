#include <iostream>
#include <string>
using namespace std;

class LectureDetails {
public:
    string name;
    string topic;
    string date;
    string duration;

    LectureDetails(string n, string t, string d, string dur) : name(n), topic(t), date(d), duration(dur) {}

    void printDetails() {
        cout << "Lecturer Name: " << name << endl;
        cout << "Topic: " << topic << endl;
        cout << "Date: " << date << endl;
        cout << "Duration: " << duration << endl;
    }
};

int main() {
    // create instances of LectureDetails for 5 lecturers
    LectureDetails lecturer1("John Doe", "Introduction to Programming", "2023-04-20", "2 hours");
    LectureDetails lecturer2("Jane Smith", "Data Structures and Algorithms", "2023-04-22", "3 hours");
    LectureDetails lecturer3("David Lee", "Database Management Systems", "2023-04-24", "2.5 hours");
    LectureDetails lecturer4("Sarah Johnson", "Artificial Intelligence", "2023-04-26", "4 hours");
    LectureDetails lecturer5("Mark Brown", "Web Development", "2023-04-28", "2 hours");

    // print the details of the lecturers
    cout << "Details of Lecturer 1:" << endl;
    lecturer1.printDetails();
    cout << endl;

    cout << "Details of Lecturer 2:" << endl;
    lecturer2.printDetails();
    cout << endl;

    cout << "Details of Lecturer 3:" << endl;
    lecturer3.printDetails();
    cout << endl;

    cout << "Details of Lecturer 4:" << endl;
    lecturer4.printDetails();
    cout << endl;

    cout << "Details of Lecturer 5:" << endl;
    lecturer5.printDetails();
    cout << endl;

    return 0;
}

