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

void networkStart(Network* n){
    printf("%i", n->layers[0].neuronCount);
}