// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 03/03/2022.
//

#ifndef MASTERMIND_CODE_H
#define MASTERMIND_CODE_H

#include <string>
#include <vector>

namespace mastermind {

class Code {
private:
    std::vector<unsigned int> values_;
public:
    // possible_amount_of_values means the range of values that can be included in the code. This is a numeric
    // representation of the coloured pins in the game MasterMind, e.g.: 0 = red, 1 = blue, 2 = orange, etc.
    Code(const unsigned int& code_length, const unsigned int& possible_amount_of_values);
    Code(std::string& string_of_code, const unsigned int& code_length, const unsigned int& possible_amount_of_values);
    /** @brief Checks if a string consists of only numeric characters.
     *
     * @param code_string A string.
     * @return True if every character in string is numeric, otherwise false.
     */
    static bool IsValidCode(const std::string& code_string, unsigned int code_length);
    // Super sexy way of making a getter. Since this method does not modify the value it can be declared const.
    // By removing the consts you make this a setter.
    // Source: @bolov at https://stackoverflow.com/a/51615364.
    [[nodiscard]] auto values() const -> const std::vector<unsigned int>&;
};

} // namespace mastermind

#endif //MASTERMIND_CODE_H
