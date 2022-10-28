#include <stdlib.h>
#include "Layer.h"
#include "Neuron.h"

Layer* layerCreate(Layer* l, int neuronCount, ActivationFunction func){
    l = (Layer*) malloc(sizeof(Layer*)+sizeof(Neuron*)*neuronCount);
    l->neuronCount = neuronCount;
    l->func = func;

    //Create Neurons
    for(int i = 0; i < neuronCount; i++){
        l->neurons[0] = *neuronCreate(l->neurons[0]);
    }

    return l;
}