#include <stdio.h>

#include "include/my_stack.h"

int num = 0;

int a[5];

int stack_is_full() {
        if(num == 5)
            return 1;
        else 
            return 0;
	}

int stack_is_empty() {
        if(num == 0)
            return 1;
        else
            return 0;
	}


void stack_push(int x) {
        a[num]= x ;
        num++;
	}

int stack_pop(){
        num--;
        return a[num];
        }
