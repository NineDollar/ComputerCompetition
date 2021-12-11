//
// Created by NewUser on 2021/12/10.
//
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Student {
    string ID;
    unsigned int A;
    unsigned int B;
    unsigned int C;

public:
    Student() {

    }

    Student(const string &ID, int A, int B, int C) {
        this->ID.assign(ID);
        this->A = A;
        this->B = B;
        this->C = C;
    }

    float getScore() const {
        return float(A * 0.4 + B * 0.35 + C * 0.25);
    }

    void show() {
        cout << ID << " " << setiosflags(ios::fixed) << setprecision(1) << getScore() << "\n";
    }

    friend void Init(unsigned int, Student *);
};

void Init(unsigned int N, Student *student) {
    unsigned int A, B, C;
    string ID;

    for (int i = 0; i < N; ++i, ++student) {
        cin >> ID >> A >> B >> C;
        student->ID = ID;
        student->A = A;
        student->B = B;
        student->C = C;
    }
}

int main() {
    unsigned int N;
    Student *student, stuTemp;

    cin >> N;
    student = new Student[N];
    Init(N, student);
    for (int i = 0; i < N; ++i) {
        cout<<student[i].getScore()<<"  ";
    }
    cout << "\n----"<<endl;
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < N - i; ++j) {
            if (student[j].getScore() < student[j + 1].getScore()) {
                stuTemp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = stuTemp;
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        student[i].show();
    }
    delete[]student;
}
