#ifndef FORM3_HPP
#define FORM3_HPP

#include "Form.hpp"

class Form3 : public Form {
public:
    Form3() : Form("Form3") {}
    virtual ~Form3() {}

    void execute() const {
        std::cout << "Executing Form3!" << std::endl;
    }
};

#endif
