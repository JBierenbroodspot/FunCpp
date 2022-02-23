// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.

//
// Created by jim12 on 22/02/2022.
//
#include <cmath>
#include <string>
#include <iostream>

#include "tree_base.h"

namespace trees {

TreeBase::TreeBase(unsigned int width, unsigned int height) {
    this->width = width;
    this->height = height;
}

void TreeBase::build(unsigned int max_base_width) const {
    // If max base width is even the base of the tree must be offset to the left.
    int base_offset = max_base_width % 2 == 0 ? 1 : 0;
    // The number of whitespace before the tree base is drawn.
    auto buffer_count = static_cast<unsigned int>(floor((double)max_base_width / 2) - (base_offset));
    // std::string has a fill constructor which fills the string with the first parameter amount of times with the
    // second parameter.
    std::string base_buffer(buffer_count, ' ');
    std::string base(this->width, '*');

    for (unsigned int i = 0; i < this->height; i++) {
        std::cout << base_buffer << base << std::endl;
    }
}

} // namespace trees
