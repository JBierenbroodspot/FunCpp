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

TreeTop::TreeTop(unsigned int max_width, unsigned int max_height) {
    this->max_width = max_width;
    this->max_height = max_height;
}

void TreeTop::build() const {
    for (int i = (int)floor((double)this->max_width / 2); i >= 0; i--) {
        unsigned int even_offset = this->max_width % 2 == 0 ? 1 : 0;
        std::cout << std::string(i, ' ') << std::string(this->max_width - (2 * i) + even_offset, '*') << std::endl;
    }
}

} // namespace trees
