#include <bits/stdc++.h>

using namespace std;

class student {
public:
    long long id;
    int xuanze, tiankong, yingyong, total;

    student(long long _id, int _xuanze, int _tiankong, int _yingyong)
            : id(_id), xuanze(_xuanze), tiankong(_tiankong), yingyong(_yingyong) {
        total = xuanze + tiankong + yingyong;
    }
};

bool cmp(student stu1, student stu2) {
    if (stu1.total > stu2.total)
        return true;
    else if (stu1.total < stu2.total) {
        return false;
    } else {
        if (stu1.yingyong > stu2.yingyong)
            return true;
        else if (stu1.yingyong < stu2.yingyong) {
            return false;
        } else {
            if (stu1.tiankong > stu2.tiankong)
                return true;
            else if (stu1.tiankong < stu2.tiankong) {
                return false;
            } else {
                if (stu1.xuanze > stu2.xuanze)
                    return true;
                else if (stu1.xuanze < stu2.xuanze) {
                    return false;
                } else {
                    return stu1.id < stu2.id;
                }
            }
        }
    }
}

int main(int argc, char const *argv[]) {

    vector<student> students;
    int N;
    cin >> N;
    students.reserve(N);  //扩充N个空间
    long long id;
    int xuanze, tiankong, yingyong;
    for (size_t i = 0; i < N; i++) {
        cin >> id >> xuanze >> tiankong >> yingyong;
        students.emplace_back(id, xuanze, tiankong, yingyong);  //尾部插入元素
    }

    students.erase(remove_if(students.begin(), students.end(),  //true删除范围内的元素，
                             [](student stu) { return stu.xuanze < 80 || stu.tiankong < 80 || stu.yingyong < 80; }),
                   students.end());  //删除指定元素

    sort(students.begin(), students.end(), cmp);

    if (students.empty()) {
        cout << "NULL" << endl;
        return 0;
    }

    for (auto & student : students) {
        cout << student.id << " " << student.total << endl;
    }

    return 0;
}