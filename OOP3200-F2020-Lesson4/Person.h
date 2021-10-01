/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */
#pragma once

#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person(std::string first_name, std::string last_name, float age);
    
float getAge() const;
    
/**
 * @param value
 */
void setAge(float value);

std::string getFirstName();
    
/**
 * @param value
 */
void setFirstName(std::string value);

std::string getLastName();
    
/**
 * @param value
 */
void setLastName(std::string value);
    
void SaysHello();

std::string ToString();
private: 
    float m_age;
std::string m_firstName;
std::string m_lastName;
std::string first_name_;
std::string last_name_;
};

#endif //_PERSON_H