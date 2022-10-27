#include <stdio.h>
#include "Network.h"

void networkStart(Network* n){
    printf("%i", n->layers[0].neurons[0].input);
}