/***************************************************************************
 *  Project                WIZLIGHTCPP     
 *
 * Copyright (C) 2022 , Sri Balaji S.
 *
 * This software is licensed as described in the file LICENSE, which
 * you should have received as part of this distribution.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the LICENSE file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 * @file wizcontrol.cpp
 * 
 ***************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <clocale>
#include <vector>
#include "log.h"
#include "bulb.h"
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {
    Bulb bulb;

    if (argc != 3) {
        // TODO support more options
        std::cerr << "usage: " << argv[0] << " <brightness> <address>" << std::endl;
        return EXIT_FAILURE;
    }

    std::uint8_t brightness = std::atoi(argv[1]);
    std::string address = argv[2];

    bulb.setDeviceIP(address);
    bulb.setBrightness(brightness);
}