// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by aph09 on 03/03/2022.
//
#include <vector>
#include <algorithm>
#include <string>

#include "code.h"

namespace mastermind {

Code::Code(const unsigned int& code_length, const unsigned int& possible_amount_of_values) {
    for (unsigned int i = 0; i < code_length; i++) {
        this->values_.push_back(std::rand() % possible_amount_of_values); // NOLINT(cert-msc50-cpp)
    }
}

Code::Code(std::string &string_of_code,
           const unsigned int &code_length,
           const unsigned int &possible_amount_of_values) {
    for (unsigned int i = 0; i < code_length; i++) {
        // I really hate this way of converting a char to integer. A char is one byte and by casting it to int you get
        // its ascii value. You subtract 48 because ascii numbers start at 48 so (int)'1' = 49 - 48 = 1.
        this->values_.push_back(static_cast<int>(string_of_code[i]) - 48);
    }
}

bool Code::IsValidCode(const std::string& code_string,
                       const unsigned int& code_length,
                       const unsigned int& possible_values) {
    return (code_string.length() == code_length and std::all_of(
            code_string.begin(),code_string.end(),[&possible_values](const char& character){
                return std::stoi(std::string(1, character)) < possible_values;
            }
        )
    );
}

auto Code::values() const -> const std::vector<unsigned int> & {
    return this->values_;
}

} // namespace mastermind
