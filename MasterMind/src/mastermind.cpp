// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 02/03/2022.
//

#include "mastermind.h"

namespace mastermind {

MasterMind::MasterMind() :
amount_of_colours_(6),
board_width_(4),
game_length_(10)
{}

MasterMind::MasterMind(unsigned int board_width, unsigned int game_length, unsigned int amount_of_colours) :
amount_of_colours_(amount_of_colours),
board_width_(board_width),
game_length_(game_length)
{}

} // namespace mastermind
