#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const ioa::MenuObject* ioa::show_menu(const MenuObject* current){
    for (int i = fir; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Образовака > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const ioa::MenuObject* ioa::exit(const MenuObject* current) {
    std::exit(0);
}

// const ioa::MenuObject* ioa::grades_first(const MenuObject* current){
//     std::cout << current->title << std::endl;
//     return current->parent;
// }
const ioa::MenuObject* ioa::grades_second(const MenuObject* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const ioa::MenuObject* ioa::grades_third(const MenuObject* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const ioa::MenuObject* ioa::grades_go_back(const MenuObject* current){
    return current->parent->parent;
}

const ioa::MenuObject* ioa::first_russian_language(const MenuObject* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const ioa::MenuObject* ioa::first_russian_literature(const MenuObject* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const ioa::MenuObject* ioa::first_math(const MenuObject* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const ioa::MenuObject* ioa::first_PE(const MenuObject* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const ioa::MenuObject* ioa::first_go_back(const MenuObject* current){
    return current->parent->parent;
}