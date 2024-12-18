#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_objects.hpp"

int main()
{
    std::setlocale(LC_ALL, "");

    const ioa::MenuObject* current = &ioa::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}