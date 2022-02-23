// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//

#ifndef FIZZBUZZ_TREE_H
#define FIZZBUZZ_TREE_H

#include "tree_base.h"
#include "tree_top.h"

namespace trees {

class Tree {
private:
    trees::TreeTop top;
    trees::TreeBase base;
public:
    Tree(trees::TreeTop top, trees::TreeBase base);
    void build() const;
};

} // namespace trees

#endif //FIZZBUZZ_TREE_H
