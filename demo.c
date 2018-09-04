#include <stdio.h>  // printf
#include <stdlib.h>
#include "target_func_ptr.h"

double functest0(const double* x, size_t n, const double* param){
    if(param != NULL){printf("set *param=NULL\n"); exit(1);}
    double tmp = 0.0;
    size_t i;
    for(i=0; i<n; i++){
        tmp += x[i];
    }
    return tmp / (double)n;
}

double functest1(const double* x, size_t n, const double* param){
    double tmp = 0.0;
    size_t i;
    
    double a = param[0];
    double b = param[1];
    
    for(i=0; i<n; i++){
        tmp += a + b * x[i];
    }
    return tmp / (double)n;
}

int main(){
    double x[] = {1,2,3,4,5};
    size_t n = 5;
    
    TARGET_FUNC_PTR fun0 = &functest0;    
    double *p0 = NULL;
    double z0 = fun0(x, n, p0);
    printf("%.2f\n", z0);
    
    TARGET_FUNC_PTR fun1 = &functest1;
    double p1[] = {0.5, 1.5};
    double z1 = fun1(x, n, p1);
    printf("%.2f\n", z1);
}

