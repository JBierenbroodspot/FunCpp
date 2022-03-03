// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 02/03/2022.
//
#include <unordered_map>

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

std::vector<unsigned int> MasterMind::EvaluateGuess(const mastermind::Code& guess) {
    unsigned int i;
    std::unordered_map<unsigned int, unsigned int> frequency_map;
    unsigned int correct_order = 0; // Amount of correct values in correct position
    unsigned int incorrect_order = 0; // Amount of correct values in incorrect position
    std::vector<std::unordered_map<unsigned int, unsigned int>> frequencies;

    // Find the frequency of every value in the secret code.
    frequency_map = {};
    for (auto const& value : this->secret_code_.values()) {
        if (frequency_map[value]) {
            frequency_map[value] += 1;
        } else {
            frequency_map[value] = 1;
        }
    }
    frequencies.push_back(frequency_map);

    // Add the frequency of every value in the guessed code.
    frequency_map = {};
    for (i = 0; i < guess.values().size(); i++) {
        // To prevent looping over the same vector twice values in the correct order is incremented here.
        if (guess.values()[i] == this->secret_code_.values()[i]) {
            correct_order++;
        }

        // Finding of frequency starts here.
        if (frequency_map[guess.values()[i]]) {
            frequency_map[guess.values()[i]] += 1;
        } else {
            frequency_map[guess.values()[i]] = 1;
        }
    }
    frequencies.push_back(frequency_map);

    for (auto const& value : frequencies.front()) {
        if (frequencies.back()[value.first]) {
            incorrect_order += std::min(frequencies.back()[value.first], value.second);
        }
    }

    // Because for every correct order an incorrect order is counted as well so correct_order can safely be subtracted.
    incorrect_order -= correct_order;

    return std::vector<unsigned int> {correct_order, incorrect_order};
}

} // namespace mastermind
