#ifndef NETWORK_H_INCLUDED
#define NETWORK_H_INCLUDED

#include "Layer.h"

typedef struct
{
    int layerCount;
    Layer layers[];
} Network;

Network* networkCreate(Network* n, int layerCount, Layer layers[]);

void networkTrain(Network* n, int rows, int iCols, int oCols, float input[rows][iCols], float output[rows][oCols]);

void networkStart(Network* n);

#endif