// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.

//
// Created by jim12 on 22/02/2022.
//

#ifndef TREES_TREE_BASE_H
#define TREES_TREE_BASE_H

namespace trees {

class TreeBase {
private:
    unsigned int width = 0;
    unsigned int height = 0;
public:
    TreeBase(unsigned int width, unsigned int height);
    void build(unsigned int max_base_width);
};

} // namespace trees

#endif //TREES_TREE_BASE_H
