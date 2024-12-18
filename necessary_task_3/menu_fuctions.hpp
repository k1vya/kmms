#pragma once

#include "menu.hpp"

namespace ioa {
    const MenuObject* show_menu(const MenuObject* current);

    const MenuObject* exit(const MenuObject* current);

    // const MenuObject* grades_first(const MenuObject* current);
    const MenuObject* grades_second(const MenuObject* current);
    const MenuObject* grades_third(const MenuObject* current);
    const MenuObject* grades_go_back(const MenuObject* current);

    const MenuObject* first_russian_language(const MenuObject* current);
    const MenuObject* first_russian_literature(const MenuObject* current);
    const MenuObject* first_math(const MenuObject* current);
    const MenuObject* first_PE(const MenuObject* current);
    const MenuObject* first_go_back(const MenuObject* current);
}