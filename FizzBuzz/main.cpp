// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//
#include <iostream>

#include "fizzbuzz.h"

int main() {
    unsigned int fizzbuzz_count = 15;

    std::cout << "FizzBuzz to " << fizzbuzz_count << " w/o hashmap" << std::endl;
    fizzbuzz::FizzBuzz(15);
    std::cout << "FizzBuzz to " << fizzbuzz_count << " w/ hashmap" << std::endl;
    fizzbuzz::FizzBuzzHashMap(15);
}
