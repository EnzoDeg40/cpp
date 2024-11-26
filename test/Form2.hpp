#ifndef FORM2_HPP
#define FORM2_HPP

#include "Form.hpp"

class Form2 : public Form {
public:
    Form2() : Form("Form2") {}
    virtual ~Form2() {}

    void execute() const {
        std::cout << "Executing Form2!" << std::endl;
    }
};

#endif
