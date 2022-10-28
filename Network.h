#ifndef NETWORK_H_INCLUDED
#define NETWORK_H_INCLUDED

#include "Layer.h"

typedef struct
{
    int layerCount;
    Layer layers[];
} Network;

Network* networkCreate(Network* n, int layerCount, Layer layers[]);

void networkStart(Network* n);

#endif