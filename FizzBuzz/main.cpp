// SPDX-License-Identifier: BSD 3-Clause
// Copyright (c) 2022 Jimmy Bierenbroodspot.
//
// Created by jim12 on 22/02/2022.
//
#include <iostream>

#include "fizzbuzz.h"

int main() {
    unsigned int fizzbuzz_count = 15;

    std::cout << std::format("FizzBuzz to {} w/o hashmap", fizzbuzz_count) << std::endl;
    fizzbuzz::FizzBuzz(15);
    std::cout << std::format("FizzBuzz to {} w/ hashmap", fizzbuzz_count) << std::endl;
    fizzbuzz::FizzBuzzHashMap(15);
}
