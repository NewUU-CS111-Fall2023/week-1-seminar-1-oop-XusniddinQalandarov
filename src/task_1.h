/*
 * Author: Xusniddin Qalandarov
 * Date: 10/17/2024
 * Name: Xusniddin Qalandarov
 */

#include <iostream>
#include <string>

class Family {
public:
    Family(std::string father, int fatherAge, std::string mother, int motherAge, std::string child, int childAge) {
        fatherName = father;
        motherName = mother;
        childName = child;
        this->fatherAge = fatherAge;
        this->motherAge = motherAge;
        this->childAge = childAge;
    }
    void displayFamilyMembers() {
        std::cout << "Family Members:\n";
        std::cout << "Father: " << fatherName << ", Age: " << fatherAge << "\n";
        std::cout << "Mother: " << motherName << ", Age: " << motherAge << "\n";
        std::cout << "Child: " << childName << ", Age: " << childAge << "\n";
    }

public:
    std::string fatherName;
    std::string motherName;
    std::string childName;

private:
    int fatherAge;
    int motherAge;
    int childAge;
};