/**
 * @file segmentation.h
 * @author Júlia Guilhermino (juh.guilhermino03@gmail.com)
 * @brief Definição da classe Segmentation responsável por realizar a segemntação da imagem
 * @version 0.1
 * @date 2025-07-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef SEGMENTATION
#define SEGMENTATION

#include <iostream>
#include <fstream>
#include <vector>

class Segmentation {
private:
    std::string file;                      /*!< Path da imagem*/
    std::string algorithm;                 /*!< Operação a ser realizada na imagem */
    std::string format;                    /*!< Formato da imagem (ex.: P3 para PPM) */
    std::string rgbMax;                            /*!< Valor máximo para os componentes RGB */
    int height;                            /*!< Altura da imagem */
    int width;                             /*!< Largura da imagem */
    std::vector<std::vector<int>> img;     /*!< Matriz que armazena a imagem original */
    std::vector<std::vector<int>> newImg;  /*!< Matriz que armazena a imagem modificada */
    
public:
    /**
     * @brief Construtor de um objeto Segmentation
     * 
     * @param filePath 
     * @param algorithmName 
     */
    Segmentation(std::string filePath, std::string algorithmName);

    /**
     * @brief Destrutor de Segmentation
     * 
     */
    ~Segmentation();

    /**
     * @brief Leitura da imagem.
     * 
     */
    void read();

    /**
     * @brief Gera a imagem segmentada.
     * 
     */
    void write();

};
#endif

