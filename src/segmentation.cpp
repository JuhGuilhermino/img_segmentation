/**
 * @file segmentation.h
 * @author Júlia Guilhermino (juh.guilhermino03@gmail.com)
 * @brief Implementação da classe Segmentation responsável por realizar a segemntação da imagem
 * @version 0.1
 * @date 2025-07-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "segmentation.h"

/**
 * @brief Construtor de um objeto Segmentation
 * 
 * @param filePath 
 * @param algorithmName 
 */
Segmentation::Segmentation(std::string filePath, std::string algorithmName){
    file = filePath;
    algorithm = algorithmName;
}

/**
 * @brief Destrutor de Segmentation
 * 
 */
Segmentation::~Segmentation(){}

/**
 * @brief Leitura da imagem.
 * 
 */
void Segmentation::read(){
    std::ifstream input(file); 
    
    if (!input) {
        std::cout << "ERRO: Cannot read this file: " << file << "\n";
    } else {
        input >> format >> width >> height >> rgbMax;

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                int r, g, b;
                input >> r >> g >> b;
                std::cout << r << " ";
            }
            std::cout << "\n";
        }
    }
    input.close();
}

/**
 * @brief Gera a imagem segmentada.
 * 
 */
void Segmentation::write(){
    
}

