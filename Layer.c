#include <stdlib.h>
#include "Layer.h"
#include "Neuron.h"
#include "AIMath.h"

Layer* layerCreate(Layer* l, float bias, int neuronCount, ActivationFunction func){
    l = (Layer*) malloc(sizeof(Layer*)+sizeof(Neuron*)*neuronCount);
    l->neuronCount = neuronCount;
    l->func = func;
    l->bias = bias;

    //Create Neurons
    for(int i = 0; i < neuronCount; i++){
        l->neurons[i] = *neuronCreate(l->neurons+i);
    }

    return l;
}

void activateNeuron(Layer* l, int index){
    Neuron n = l->neurons[index];
    switch (l->func){
        case Linear:
            n.output = linearFunc(n.input);
            break;
        case Sigmoid:
            n.output = sigmoidFunc(n.input);
            break;
        case Relu:
            n.output = reluFunc(n.input);
            break;
        default:
            break;
    }
}