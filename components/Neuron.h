#ifndef NEURON_H_INCLUDED
#define NEURON_H_INCLUDED

typedef enum {
    Relu = 0,
    Sigmoid = 1,
    Linear = 2
} ActivationFunction;

typedef struct{
    float input;
    float output;
} Neuron;

Neuron* neuronCreate(Neuron* n);

#endif