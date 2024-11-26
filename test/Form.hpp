#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form {
public:
    Form(const std::string& name) : _name(name) {}
    virtual ~Form() {}

    virtual void execute() const = 0; // Méthode virtuelle pure
    const std::string& getName() const { return _name; }

private:
    std::string _name;
};

#endif
