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
        std::cout << "ERRO: Cannot read the file: " << file << "\n";
    } else {
        input >> format >> width >> height >> rgbMax;

        std::vector <int> line;

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                int r, g, b;
                input >> r >> g >> b;
                line.push_back(r);
            }
            img.push_back(line);
            line.clear();
        }
    }

    input.close();
}

/**
 * @brief Gera a imagem segmentada.
 * 
 */
void Segmentation::write(){
    std::ofstream output("imgs/nova-img.ppm");
    if (!output) {
        std::cout << "ERRO: Cannot create new file: imgs/nova-img.ppm.\n";
    } else {
        output << format << "\n" << width << " " << height << "\n" << rgbMax << "\n";
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                output << img[i][j] << " " << img[i][j] << " " << img[i][j];
                if (j == width-1) {
                    output << "\n";
                } else {
                    output << " ";
                }
            }
        }
        std::cout << "Imagem salva como: 'nova-img.ppm' em 'imgs'.\n";
        output.close();
    } 
}

