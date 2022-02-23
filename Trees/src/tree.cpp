// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//

#include "tree.h"

namespace trees {

Tree::Tree(unsigned int base_width, unsigned int base_height, unsigned max_top_width):
    top(trees::TreeTop(max_top_width)),
    base(trees::TreeBase(base_width, base_height))
{}

void Tree::build() const {
    this->top.build();
    this->base.build(this->top.get_max_width());
}

} // namespace trees
