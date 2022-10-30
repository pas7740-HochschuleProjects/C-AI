#include <stdlib.h>
#include "Neuron.h"

Neuron* neuronCreate(Neuron* n){
     n = (Neuron*) malloc(sizeof(Neuron*));
     n->input = 0;
     n->output = 0;
     return n;
}