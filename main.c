#include "Network.h"
#define LAYER_NUM 3

int main(){
    Network n;
    Layer layers[LAYER_NUM];
    int x1 = 10;
    int x2 = 20;
    //Init Layers
    layers[0].func = (ActivationFunction)Linear;
    layers[0].neuronCount = 2;
    layers[1].func = (ActivationFunction)Sigmoid;
    layers[0].neuronCount = 4;
    layers[2].func = (ActivationFunction)Linear;
    layers[0].neuronCount = 1;
    for(int i = 0; i < LAYER_NUM; i++){
        layerInit(&layers[i]);
    }
    //Start Network
    networkStart(&n);
    return 0;
}