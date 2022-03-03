// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 02/03/2022.
//

#include "mastermind.h"
#include "code.h"

namespace mastermind {

MasterMind::MasterMind() :
amount_of_colours_(6),
board_width_(4),
game_length_(10),
secret_code_(mastermind::Code(this->board_width_, this->amount_of_colours_))
{}

MasterMind::MasterMind(const unsigned int& board_width,
                       const unsigned int& game_length,
                       const unsigned int& amount_of_colours) :
amount_of_colours_(amount_of_colours),
board_width_(board_width),
game_length_(game_length),
secret_code_(mastermind::Code(this->board_width_, this->amount_of_colours_))
{}

auto MasterMind::secret_code() const -> const mastermind::Code & {
    return this->secret_code_;
}

} // namespace mastermind
