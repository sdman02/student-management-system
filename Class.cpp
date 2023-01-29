#include "Class.h"

Class::Class() {
    name = "NA";
    code = "NA";
    credits = -1;
    school = "NA";
}
Class::Class(const string name, const string code, const int credits, const string school){
    this->name = name;
    this->code = code;
    this->credits = credits;
    this->school = school;
}
Class::~Class(){

}
string Class::getName() const{
    return name;
}
string Class::getCode() const{
    return code;
}
int Class::getCredits() const{
    return credits;
}
string Class::getSchool() const{
    return school;
}
void Class::setName(const string name){
    this->name = name;
}
void Class::setCode(const string code){
    this->code = code;
}
void Class::setCredits(const int credits){
    this->credits = credits;
}
void Class::setSchool(const string school){
    this->school = school;
}
void Class::print() const{
    cout << "Name: " << name << '\n'
         << "Code: " << code << '\n'
         << "Credits: " << credits << '\n'
         << "School: " << school << '\n';
}