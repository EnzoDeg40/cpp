#include "Form.hpp"
#include "Intern.hpp"
#include "Form1.hpp"
#include "Form2.hpp"
#include "Form3.hpp"

int main() {
    Intern intern;
    Form* form1 = intern.makeForm("robotomy request", "Bender");
    Form* form2 = intern.makeForm("presidential pardon", "Nixon");
    Form* form3 = intern.makeForm("shrubbery creation", "Arthur");

    form1->execute();
    form2->execute();
    form3->execute();

    delete form1;
    delete form2;
    delete form3;

    return 0;
}