#include "components/Network.h"
#include "standard/Arrays.h"
#include "stdio.h"

int main(){
    //Init Input/Output
    float x[2][2] = {{1,2},{2,3}};
    float y[2][1] = {{0},{1}};
    //Init Layers
    Layer layers[3];
    layers[0] = *layerCreate(&layers[0], 0.1, 2, (ActivationFunction)Linear);
    layers[1] = *layerCreate(&layers[1], 0.2, 4, (ActivationFunction)Sigmoid);
    layers[2] = *layerCreate(&layers[2], 0.3, 1, (ActivationFunction)Linear);
    //Init Network
    Network n = *networkCreate(&n, 3, layers);

    networkTrain(&n, 2, 2, 1, x, y);

    int s[] = {1,2,3};

    printf("%i", getArrayLength(s));
    return 0;
}