#ifndef LAYER_H_INCLUDED
#define LAYER_H_INCLUDED

#include "Neuron.h"

typedef struct
{
    ActivationFunction func;
    int neuronCount;
    Neuron neurons[];
} Layer;

void layerInit(Layer* l);


#endif