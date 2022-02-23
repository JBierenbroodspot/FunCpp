// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//
#include <string>
#include <iostream>
#include <cmath>

#include "tree_top.h"

namespace trees {

TreeTop::TreeTop(unsigned int max_width) {
    this->max_width = max_width;
}

void TreeTop::build() const {
    for (int i = (int)floor((double)this->max_width / 2); i >= 0; i--) {
        unsigned int even_offset = this->max_width % 2 == 0 ? 1 : 0;
        std::cout << std::string(i, ' ') << std::string(this->max_width - (2 * i) + even_offset, '*') << std::endl;
    }
}

unsigned int TreeTop::get_max_width() const {
    return this->max_width;
}

} // namespace trees
