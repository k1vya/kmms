#include "menu_objects.hpp"

#include "cstddef"

#include "menu_functions.hpp"

const ioa::MenuObject ioa::FIRST_RUSSIAN_LANGUAGE = {
    "1 - Русский язык", ioa::first_russian_language, &ioa::GRADES_FIRST
};
const ioa::MenuObject ioa::FIRST_RUSSIAN_LITERATURE = {
    "2 - Русская литература", ioa::first_ussian_literature, &ioa::GRADES_FIRST
};
const ioa::MenuObject ioa::FIRST_MATH = {
    "3 - Математика", ioa::first_math, &ioa::GRADES_FIRST
};
const ioa::MenuObject ioa::FIRST_PE = {
    "4 - Я люблю физкультуру", ioa::first_pe, &ioa::GRADES_FIRST
};
const ioa::MenuObject ioa::FIRST_GO_BACK = {
    "0 - Выйти в предыдущее меню", ioa::first_go_back, &ioa::GRADES_FIRST
};

namespace {
    const ioa::MenuObject* const first_children[] = {
        &ioa::FIRST_GO_BACK,
        &ioa::FIRST_RUSSIAN_LANGUAGE,
        &ioa::FIRST_RUSSIAN_LITERATURE,
        &ioa::FIRST_MATH
        &ioa::FIRST_PE
    };
    const int first_size = sizeof(first_children) / sizeof(first_children[0]);
}

const ioa::MenuObject ioa::GRADES_FIRST = {
    "1 - Изучать предметы 1-го класса", ioa::show_menu, &ioa::SEE_GRADES, first_children, first_size
};

const ioa::MenuObject ioa::GRADES_SECOND = {
    "2 - Изучать предметы 2-го класса", ioa::grades_second, &ioa::SEE_GRADES
};
const ioa::MenuObject ioa::GRADES_THIRD = {
    "3 - Изучать предметы 3-го класса", ioa::grades_third, &ioa::SEE_GRADES
};
const ioa::MenuObject ioa::GRADES_GO_BACK = {
    "0 - Выйти в главное меню", ioa::grades_go_back, &ioa::SEE_GRADES
};

namespace {
    const ioa::MenuObject* const grades_children[] = {
        &ioa::GRADES_GO_BACK,
        &ioa::GRADES_FIRST,
        &ioa::GRADES_SECOND,
        &ioa::GRADES_THIRD,
    };
    const int grades_size = sizeof(grades_children) / sizeof(grades_children[0]);
}

const ioa::MenuObject ioa::SEE_GRADES = {
    "1 - Предметы какого класса школы вы хотите учить?", ioa::show_menu, &ioa::MAIN, grades_children, grades_size
};

const ioa::MenuObject ioa::EXIT = {
    "0 - Я уже закончил школу и все знаю", ioa::exit, &ioa::MAIN
};

namespace {
    const ioa::MenuObject* const main_children[] = {
        &ioa::EXIT,
        &ioa::SEE_GRADES
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const ioa::MenuObject ioa::MAIN = {
    nullptr, ioa::show_menu, nullptr, main_children, main_size
};