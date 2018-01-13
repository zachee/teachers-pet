#include "student.h"


Student::Student(string first_name, string last_name){
    m_first_name = first_name;
    m_last_name = last_name;
}

Student::Student(string first_name, string last_name,
                    string email){
    m_first_name = first_name;
    m_last_name = last_name;
    m_email = email;
}

Student::Student(string first_name, string last_name,
                    float grade){
    m_first_name = first_name;
    m_last_name = last_name;
    m_grade = grade;
}

Student::Student(string first_name, string last_name,
                    string email, float grade){
    m_first_name = first_name;
    m_last_name = last_name;
    m_email = email;
    m_grade = grade;
}

Student::~Student(){}

void setFirstName(string first_name){
    m_first_name = first_name;
}

void setLastName(string last_name){
    m_last_name = last_name;
}

void setEmail(string email){
    m_email = email;
}

void setGrade(float grade){
    m_grade = grade;
}

string getFirstName() const{
    return m_first_name;
}

string getLastName() const{
    return m_last_name;
}

string getEmail() const{
    return m_email;
}

float getGrade() const{
    return m_grade;
}
