#ifndef COURSE_H
#define COURSE_H

#include "student.h"
#include <vector>

class Course
{
    public:
        Course(std::string course_name, std::string course_id,
                        int room_number);

        ~Course();

        std::string getCourseName() const;
        std::string getCourseID() const;
        int getRoomNumber() const;
        std::vector<Student> getStudents() const;

        void setCourseName(std::string course_name);
        void setCourseID(std::string course_id);
        void setRoomNumber(int room_number);
        void addStudent(Student student);

    private:
        std::string m_course_name;
        std::string m_course_id;
        int m_room_number;
        std::vector<Student> m_students;
};

#endif // COURSE_H
