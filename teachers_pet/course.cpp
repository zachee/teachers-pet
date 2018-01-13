#include "course.h"

Course::Course(std::string course_name, std::string course_id,
                int room_number){
    m_course_name = course_name;
    m_course_id = course_id;
    m_room_number = room_number;
}

Course::~Course(){}

std::string Course::getCourseName() const{
    return m_course_name;
}

std::string Course::getCourseID() const{
    return m_course_id;
}

int Course::getRoomNumber() const{
    return m_room_number;
}

std::vector<Student> Course::getStudents() const{
    return m_students;
}

void Course::setCourseName(std::string course_name){
    m_course_name = course_name;
}

void Course::setCourseID(std::string course_id){
    m_course_id = course_id;
}

void Course::setRoomNumber(int room_number){
    m_room_number = room_number;
}

void Course::addStudent(Student student){
    m_students.push_back(student);
}
