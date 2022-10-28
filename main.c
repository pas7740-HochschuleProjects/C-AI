#include "Network.h"

int main(){
    //Init Layers
    Layer layers[3];
    layers[0] = *layerCreate(&layers[0], 2, (ActivationFunction)Linear);
    layers[1] = *layerCreate(&layers[1], 4, (ActivationFunction)Sigmoid);
    layers[2] = *layerCreate(&layers[2], 1, (ActivationFunction)Linear);
    Network n = *networkCreate(&n, 3, layers);
    networkStart(&n);
    return 0;
}