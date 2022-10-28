#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Network.h"

Network* networkCreate(Network* n, int layerCount, Layer layers[]){
    n = (Network*) malloc(sizeof(Network*)+sizeof(Layer*)*layerCount);
    n->layerCount = layerCount;
    memcpy(n->layers, layers, sizeof(Layer*)*layerCount);
    return n;
}

void setInputNeurons(){
    
}

void networkTrain(Network* n, int rows, int iCols, int oCols, float input[rows][iCols], float output[rows][oCols]){
    setInputNeurons();
    // for(int i = 0; i < rows; i+=1){
    //     for(int j = 0; j < iCols; j+=1){
    //         printf("%f", input[i][j]);
    //     }
    // }
}

void networkStart(Network* n){
    printf("%i", n->layers[0].neuronCount);
}