#ifndef LAYER_H_INCLUDED
#define LAYER_H_INCLUDED

#include "Neuron.h"

typedef struct
{
    ActivationFunction func;
    int neuronCount;
    Neuron neurons[];
} Layer;

Layer* layerCreate(Layer* l, int neuronCount, ActivationFunction func);


#endif