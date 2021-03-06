/*
    Author: Gaelen Rhoads and Tom Tsiliopoulos
    Student ID : 100804776

    Date: October 1, 2021
    Project : ICE 3
    File Name : Person.cpp
*/


#include "Person.h"

#include <iostream>

/**
 * Person implementation
 */


 /**
  * @param first_name
  * @param last_name
  * @param age
  */
Person::Person(std::string first_name, std::string last_name, const float age)
    : m_age(age), m_firstName(std::move(first_name)), m_lastName(std::move(last_name))
{

}

// Default Constructro
Person::~Person()
= default;

/**
 * @return float
 */
float Person::getAge() const
{
    return m_age;
}

/**
 * @param value
 */
void Person::setAge(const float value)
{
    m_age = value;
}

/**
 * @return std::string
 */
std::string Person::getFirstName() const
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::setFirstName(const std::string & value)
{
    m_firstName = value;
}

/**
 * @return std::string
 */
std::string Person::getLastName() const
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::setLastName(const std::string & value)
{
    m_lastName = value;
}

/**
 * @return void
 */
void Person::SaysHello() const
{
    std::cout << getFirstName() << " says Hello!" << std::endl;
}


/**
 * @return std::string
 */

std::string Person::ToString()
{
    std::string output_string;

    output_string += "-------------------------------------------\n";
    output_string += "First Name: " + getFirstName() + "\n";
    output_string += "Last Name : " + getLastName() + "\n";
    output_string += "Age       : " + std::to_string(getAge()) + "\n";
    output_string += "-------------------------------------------\n";

    return output_string;
}