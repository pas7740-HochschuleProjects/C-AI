#include "math.h"
#include "ActivationFunctions.h"

float linearFunc(float input){
     return input;
}

float reluFunc(float input){
     if(input>0) return input;
     return 0.0;
}

float sigmoidFunc(float input){
     return 1/(1+exp(-(input)));
}