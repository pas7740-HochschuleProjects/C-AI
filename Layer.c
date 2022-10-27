#include "Layer.h"

void layerInit(Layer* l){
    for(int i = 0; i < l->neuronCount; i++){
        Neuron n;
        n.input = 1.0;
        n.func = l->func;
        l->neurons[i] = n;
    }
}