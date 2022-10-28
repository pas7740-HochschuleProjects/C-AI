#ifndef LAYER_H_INCLUDED
#define LAYER_H_INCLUDED

#include "Neuron.h"

typedef struct
{
    ActivationFunction func;
    int neuronCount;
    float bias;
    Neuron neurons[];
} Layer;

Layer* layerCreate(Layer* l, float bias, int neuronCount, ActivationFunction func);

void activateNeuron(Layer* l, int index);

#endif