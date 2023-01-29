#include <iostream>


using std::string, std::cout;

class Class {

    public:
        //constructors / destructors
        Class();
        Class(const string name, const string code, const int credits, const string school);
        ~Class();

        //getters
        string getName() const;
        string getCode() const;
        int getCredits() const;
        string getSchool() const;

        //setters
        void setName(const string name);
        void setCode(const string code);
        void setCredits(const int credits);
        void setSchool(const string school);

        //methods
        void print() const;


    private:
        string name;
        string code;
        int credits;
        string school;


};