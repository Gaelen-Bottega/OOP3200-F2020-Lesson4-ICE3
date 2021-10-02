/*
    Author: Gaelen Rhoads and Tom Tsiliopoulos
    Student ID : 100804776

    Date: October 1, 2021
    Project : ICE 3
    File Name : Student.h
*/


#pragma once

#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
public:

    /**
     * @param first_name
     * @param last_name
     * @param age
     * @param student_id
     */
    Student(const std::string& first_name, const std::string& last_name, float age, std::string student_id);
    ~Student();

    std::string getStudentID() const;

    /**
     * @param value
     */
    void setStudentID(const std::string& value);

    void Studies() const;

    std::string ToString() override;

void Studies();

string ToString();
private:
    std::string m_studentID;
};

#endif //_STUDENT_H