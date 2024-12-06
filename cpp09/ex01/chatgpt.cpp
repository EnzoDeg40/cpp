#include <iostream>
#include <stack>
#include <sstream>
#include <string>

double evaluateRPN(const std::string& expression) {
    std::stack<double> stack;
    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) {
        if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1)) {
            // C'est un opérande
            stack.push(std::stod(token));
        } else {
            // C'est un opérateur
            if (stack.size() < 2) {
                throw std::invalid_argument("Expression invalide");
            }
            double b = stack.top(); stack.pop();
            double a = stack.top(); stack.pop();
            if (token == "+") {
                stack.push(a + b);
            } else if (token == "-") {
                stack.push(a - b);
            } else if (token == "*") {
                stack.push(a * b);
            } else if (token == "/") {
                if (b == 0) throw std::runtime_error("Division par zéro");
                stack.push(a / b);
            } else {
                throw std::invalid_argument("Opérateur inconnu");
            }
        }
    }

    if (stack.size() != 1) {
        throw std::invalid_argument("Expression invalide");
    }

    return stack.top();
}

int main(int ac, char **av)
{
    std::string expression = "3 4 + 2 * 7 /"; // Exemple: ((3 + 4) * 2) / 7
    try {
        double result = evaluateRPN(expression);
        std::cout << "Résultat : " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }
    return 0;
}
