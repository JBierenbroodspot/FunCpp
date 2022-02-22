// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//
#include <iostream>

#include "fizzbuzz.h"

int main() {
    unsigned int fizzbuzz_count = 15;

    std::cout << "FizzBuzz to " << fizzbuzz_count << " w/o map" << std::endl;
    fizzbuzz::FizzBuzz(fizzbuzz_count);
    std::cout << "FizzBuzz to " << fizzbuzz_count << " w/ map" << std::endl;
    fizzbuzz::FizzBuzzMap(fizzbuzz_count);
}
