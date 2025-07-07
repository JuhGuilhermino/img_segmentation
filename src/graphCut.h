/**
 * @file graphCut.h
 * @author Definição dos algoritmos de cort (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-07-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */

class GraphCut {
private:
    /* data */
public:
    GraphCut(/* args */);
    ~GraphCut();

    /**
     * @brief Implementa o algoritmo de Ford-Fulkerson para corte-mínimo/fluxo-máximo em redes.
     * 
     */
    void fordFulkerson();

    /**
     * @brief Implementa o algoritmo de Push-Relabel para corte-mínimo/fluxo-máximo em redes.
     * 
     */
    void pushRelabel();

    /**
     * @brief Implementa o algoritmo de Boykov-Kolmogorov para corte-mínimo/fluxo-máximo em redes.
     * 
     */
    void boykovKomolgorov();
};


