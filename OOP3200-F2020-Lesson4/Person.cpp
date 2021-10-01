/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */


#include "Person.h"

/**
 * Person implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, const float age)
	: m_age(age), first_name_(std::move(first_name)), last_name_(std::move(last_name))

{

}

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
void Person::setAge(float value) {
    m_age = value;
}

/**
 * @return std::string
 */
std::string Person::getFirstName() {
    return "";
}

/**
 * @param value
 */
void Person::setFirstName(std::string value) {

}

/**
 * @return std::string
 */
std::string Person::getLastName() {
    return "";
}

/**
 * @param value
 */
void Person::setLastName(std::string value) {

}

/**
 * @return void
 */
void Person::SaysHello() {
    return;
}

/**
 * @return std::string
 */
std::string Person::ToString() {
    return "";
}