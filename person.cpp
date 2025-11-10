#include <iostream>
#include <string>

class Person {

public:
    // 参数化构造函数
    Person(const std::string& personName, int personAge) {
        Name = personName;
        Age = personAge;
    }

    // 成员函数 display，用于打印姓名和年龄
public:
    void display() const {
        std::cout<<"成员姓名："<<Name<<'\n'<<"成员年龄："<<Age<<std::endl;
    }
    int Age;
    std::string Name;
};

int main() {
    //实现你的功能
    std::string personName = "mading";
    int personAge = 5;
    Person p1(personName,personAge);
    p1.display();
    return 0;
}