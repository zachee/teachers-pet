#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student{
public:
    Student(string first_name, string last_name);
    Student(string first_name, string last_name,
                string email);
    Student(string first_name, string last_name,
                float grade);
    Student(string first_name, string last_name,
                string email, float grade);
    virtual ~Student();

    string getFirstName() const;
    string getLastName() const;
    string getEmail() const;
    float getGrade() const;

    void setFirstName(string first_name);
    void setLastName(string last_name);
    void setEmail(string email);
    void setGrade(float grade);

private:
    string m_first_name;
    string m_last_name;
    string m_email;
    float m_grade;
};

#endif
