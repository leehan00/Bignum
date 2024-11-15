#include "utill.h"

void bi_new(bigint** x, int n) {
    if(*x != NULL) bi_delete(x);

    *x = (bigint*)calloc(1, sizeof(bigint));
    if (*x == NULL){
        fprintf(stderr, "bi_new() error!");
        exit(1);
    }

    (*x)->sign = NON_NEGATIVE;  // 0 (refer to config.h)
    (*x)->wordlen = n;

    (*x)->array = (word*)calloc(n, sizeof(word));
    if (*x == NULL){
        fprintf(stderr, "bi_new() - array error!");
        exit(1);
    }
}

void bi_delete(bigint** x) {
    if(*x == NULL) return;
    
    // 역순
    free((*x)->array);
    free(*x);
    *x = NULL;  // 마무리 작업
}