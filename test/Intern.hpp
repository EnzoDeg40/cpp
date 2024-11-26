#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form1.hpp"
#include "Form2.hpp"
#include "Form3.hpp"

class Intern {
public:
    Form* makeForm(const std::string& formName, const std::string& target) {
        (void)target;
        if (formName == "robotomy request") {
            std::cout << "Intern creates Form1" << std::endl;
            return new Form1();
        } else if (formName == "presidential pardon") {
            std::cout << "Intern creates Form2" << std::endl;
            return new Form2();
        } else if (formName == "shrubbery creation") {
            std::cout << "Intern creates Form3" << std::endl;
            return new Form3();
        } else {
            std::cout << "Form name not recognized!" << std::endl;
            return NULL;
        }
    }
};

#endif
