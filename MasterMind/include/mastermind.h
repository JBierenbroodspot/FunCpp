// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 02/03/2022.
//

#ifndef FUNCPP_MASTERMIND_H
#define FUNCPP_MASTERMIND_H

namespace mastermind {

class MasterMind {
private:
    const unsigned int board_width;
    const unsigned int game_length;
    const unsigned int amount_of_colours;
public:
    MasterMind();
    MasterMind(unsigned int board_width, unsigned int game_length, unsigned int amount_of_colours);
};

} // namespace mastermind

#endif //FUNCPP_MASTERMIND_H
