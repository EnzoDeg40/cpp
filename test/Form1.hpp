#ifndef FORM1_HPP
#define FORM1_HPP

#include "Form.hpp"

class Form1 : public Form {
public:
    Form1() : Form("Form1") {}
    virtual ~Form1() {}

    void execute() const {
        std::cout << "Executing Form1!" << std::endl;
    }
};

#endif
