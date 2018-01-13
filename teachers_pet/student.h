#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student{
    public:
        Student(std::string first_name, std::string last_name,
                    std::string email, float grade);
        ~Student();

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getEmail() const;
        float getGrade() const;

        void setFirstName(std::string first_name);
        void setLastName(std::string last_name);
        void setEmail(std::string email);
        void setGrade(float grade);

    private:
        std::string m_first_name;
        std::string m_last_name;
        std::string m_email;
        float m_grade;
};

#endif
