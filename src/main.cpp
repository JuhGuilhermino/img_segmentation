/**
 * @file main.cpp
 * @author Júlia Guilhermino (juh.guilhermino03@gmail.com)
 * @brief Classe principal do projeto.
 * @version 0.1
 * @date 2025-07-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "segmentation.h"

#include <iostream>
#include <fstream>

/**
 * @brief 
 * 
 * @param program_name 
 */
void print_usage() {
    std::cerr << "Usage: ./main [algorithm] <input_image_file>\n";
    std::cerr << "Where [algorithm] can be:\n";
    std::cerr << '\t' << "f       Ford-Fulkerson\n";
    std::cerr << '\t' << "p       Push-Relabel\n";
    std::cerr << '\t' << "b       Boykov-Kolmogorov\n";
}

/**
 * @brief Classe principal do projeto.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char* argv[]) {
    if (argc != 3) {
        print_usage();
    } else { 
        Segmentation segmentation(argv[2], argv[1]);
        segmentation.read();
        segmentation.write();
    }
    return 0;
}