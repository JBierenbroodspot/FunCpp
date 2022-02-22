// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//
#include <iostream>
#include <string>
#include <unordered_map>

#include "fizzbuzz.h"

namespace fizzbuzz {

void FizzBuzz(int count) {
    std::string string_out;

    for (unsigned int i = 1; i <= count; i++) {
        string_out = "";

        if (i % 3 == 0) {
            string_out += "Fizz";
        }

        if (i % 5 == 0) {
            string_out += "Buzz";
        }

        if (i % 5 != 0 && i % 3 != 0) {
            string_out = std::to_string(i);
        }

        std::cout << string_out << std::endl;
    }
}

void FizzBuzzHashMap(int count) {
    std::string string_out;
    std::unordered_map<unsigned int, std::string> fizzbuzz_map = {
            {3, "Fizz"},
            {5, "Buzz"}
    };

    for (unsigned int i = 1; i < count; ++i) {
        string_out = "";

        for (auto const& fizzbuzz_item : fizzbuzz_map) {
            if (i % fizzbuzz_item.first == 0) {
                string_out += fizzbuzz_item.second;
            }
        }

        std::cout << (string_out.empty() ? std::to_string(i) : string_out) << std::endl;
    }
}

} // namespace fizzbuzz
