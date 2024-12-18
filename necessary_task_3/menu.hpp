#pragma once

namespace ioa {
    struct MenuObject {
        const char* const title;
        const MenuObject* (*func)(const MenuObject* current);

        const MenuObject* parent;

        const MenuObject* const *children;
        const int children_count;
    };
}