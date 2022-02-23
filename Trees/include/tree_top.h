// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//

#ifndef TREES_TREE_TOP_H
#define TREES_TREE_TOP_H

namespace trees {

class TreeTop {
private:
    unsigned int max_width;
public:
    explicit TreeTop(unsigned int max_width);
    void build() const;
    [[nodiscard]] unsigned int get_max_width() const;
};

} // namespace trees

#endif //TREES_TREE_TOP_H
