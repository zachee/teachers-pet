#include "student.h"

Student::Student(std::string first_name, std::string last_name,
                    std::string email, float grade){
    m_first_name = first_name;
    m_last_name = last_name;
    m_email = email;
    m_grade = grade;
}

Student::~Student(){}

void Student::setFirstName(std::string first_name){
    m_first_name = first_name;
}

void Student::setLastName(std::string last_name){
    m_last_name = last_name;
}

void Student::setEmail(std::string email){
    m_email = email;
}

void Student::setGrade(float grade){
    m_grade = grade;
}

std::string Student::getFirstName() const{
    return m_first_name;
}

std::string Student::getLastName() const{
    return m_last_name;
}

std::string Student::getEmail() const{
    return m_email;
}

float Student::getGrade() const{
    return m_grade;
}
