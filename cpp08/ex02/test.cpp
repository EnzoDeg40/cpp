#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Ajouter des éléments
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Accéder au sommet
    std::cout << "Top : " << myStack.top() << std::endl; // 30

    // Retirer des éléments
    myStack.pop();
    std::cout << "Après pop, Top : " << myStack.top() << std::endl; // 20

    // Taille de la pile
    std::cout << "Taille : " << myStack.size() << std::endl; // 2

    return 0;
}
