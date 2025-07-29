#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};

char getGrade(int marks) {
    if (marks >= 90) return 'A';
    if (marks >= 75) return 'B';
    if (marks >= 60) return 'C';
    if (marks >= 40) return 'D';
    return 'F';
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);
    int total = 0, passed = 0, failed = 0;
    int minMarks = 101, maxMarks = -1;

    for (int i = 0; i < n; i++) {
        cout << "Enter name and marks of student " << i + 1 << ": ";
        cin >> students[i].name >> students[i].marks;

        total += students[i].marks;
        if (students[i].marks >= 40) passed++;
        else failed++;

        minMarks = min(minMarks, students[i].marks);
        maxMarks = max(maxMarks, students[i].marks);
    }

    cout << "\n📊 Grade Report:\n";
    for (const auto &s : students) {
        cout << s.name << " - Marks: " << s.marks << " - Grade: " << getGrade(s.marks) << endl;
    }

    cout << "\nAverage Marks: " << total / n << endl;
    cout << "Passed: " << passed << ", Failed: " << failed << endl;
    cout << "Min Marks: " << minMarks << ", Max Marks: " << maxMarks << endl;

    return 0;
}
