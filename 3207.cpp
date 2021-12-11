#include <bits/stdc++.h>

using namespace std;

class student {
public:
    long long id;
    int xuanze, tiankong, yingyong, total;
    student(long long _id, int _xuanze, int _tiankong, int _yingyong)
            : id(_id)
            , xuanze(_xuanze)
            , tiankong(_tiankong)
            , yingyong(_yingyong)
    {
        total = xuanze + tiankong + yingyong;
    }
};

bool cmpxuanze(student stu1, student stu2)
{
    if (stu1.xuanze < stu2.xuanze)
        return true;
    else if (stu1.xuanze > stu2.xuanze) {
        return false;
    } else {
        return stu1.id > stu2.id;
    }
}

bool cmptiankong(student stu1, student stu2)
{
    if (stu1.tiankong < stu2.tiankong)
        return true;
    else if (stu1.tiankong > stu2.tiankong) {
        return false;
    } else {
        return stu1.id < stu2.id;
    }
}

bool cmpyingyong(student stu1, student stu2)
{
    if (stu1.yingyong < stu2.yingyong)
        return true;
    else if (stu1.yingyong > stu2.yingyong) {
        return false;
    } else {
        return stu1.id > stu2.id;
    }
}

inline bool cmptotal(student stu1, student stu2)
{
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

int main(int argc, char const* argv[])
{

    vector<student> students;
    int N;
    cin >> N;
    students.reserve(N);
    long long id;
    int xuanze, tiankong, yingyong;
    for (size_t i = 0; i < N; i++) {
        cin >> id >> xuanze >> tiankong >> yingyong;
        students.emplace_back(id, xuanze, tiankong, yingyong);
    }

    std::vector<student>::iterator stu;

    stu = max_element(students.begin(), students.end(), cmpxuanze);
    cout << stu->id << " " << stu->xuanze << endl;

    stu = max_element(students.begin(), students.end(), cmptiankong);
    cout << stu->id << " " << stu->tiankong << endl;

    stu = max_element(students.begin(), students.end(), cmpyingyong);
    cout << stu->id << " " << stu->yingyong << endl;

    cout << endl;

    sort(students.begin(), students.end(), cmptotal);

    for (size_t i = 0; i < 3; i++) {
        cout << students[i].id << " " << students[i].total << endl;
    }

    return 0;
}
