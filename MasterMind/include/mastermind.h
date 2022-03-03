// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 02/03/2022.
//

#ifndef FUNCPP_MASTERMIND_H
#define FUNCPP_MASTERMIND_H

#include <vector>

#include "code.h"

namespace mastermind {

class MasterMind {
private:
    const unsigned int board_width_;
    const unsigned int game_length_;
    const unsigned int amount_of_colours_;
    mastermind::Code secret_code_;
public:
    MasterMind();
    // I honestly have no idea what I am doing by making these references... yet.
    MasterMind(const unsigned int& board_width, const unsigned int& game_length, const unsigned int& amount_of_colours);
    std::vector<unsigned int> EvaluateGuess(const mastermind::Code& guess);
};

} // namespace mastermind

#endif //FUNCPP_MASTERMIND_H
