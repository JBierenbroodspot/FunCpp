// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 02/03/2022.
//

#ifndef FUNCPP_MASTERMIND_H
#define FUNCPP_MASTERMIND_H

#include <vector>
#include <string>

#include "code.h"

namespace mastermind {

/** @brief A traditional game of MasterMind.
 *
 * A complete game of MasterMind where the colours are replaced by numbers.
 */
class MasterMind {
private:
    const unsigned int board_width_;  /**< The amount of values in a single code.*/
    const unsigned int game_length_; /**< The amount of guesses before the game is lost.*/
    const unsigned int amount_of_colours_; /**< Amount of possible values a code can consist of.*/
    mastermind::Code secret_code_; /**< Secret code user has to guess.*/
public:
    /** @brief Constructs with all default values.
     *
     * The default values are 4 for board width, 10 for game length and 6 for amount_of_colours.
     */
    MasterMind();
    /** @brief Constructs a game of MasterMind with whatever values you supply.
     *
     * @param board_width an unsigned integer for the length of codes.
     * @param game_length an unsigned integer for the amount of rounds before user loses.
     * @param amount_of_colours an unsigned integer for the amount of possible values a code can consist of.
     */
    // I honestly have no idea what I am doing by making these references... yet.
    MasterMind(const unsigned int& board_width, const unsigned int& game_length, const unsigned int& amount_of_colours);
    /** @brief Compares a code against the stores secret code.
     *
     * @param guess a mastermind::Code type to evaluate against the secret code.
     * @return A std::vector<unsigned int> with two values: The left value is the amount of correct values that are in
     * the correct position and the right value is the amount of correct values in an incorrect position.
     */
    std::vector<unsigned int> EvaluateGuess(const mastermind::Code& guess);
    /** @brief Checks whether the game is won or not.
     *
     * @param correctness This should be a vector with at most 2 values an preferably from the EvaluateGuess method.
     * @return True if the all values are correct in the correct position, false if not.
     */
    [[nodiscard]] bool IsWon(std::vector<unsigned int> correctness) const;
    /** @brief Retrieves user input using std::cin and constructs a mastermind::Code object.
     *
     * @return A Code object using user_input.
     */
    mastermind::Code GetUserInput();
};

} // namespace mastermind

#endif //FUNCPP_MASTERMIND_H
