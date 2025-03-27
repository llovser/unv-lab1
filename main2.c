#include <stdio.h>

int main() {
    int N, i;
    int sum_negative = 0, product_between = 1;
    int min_value, max_value, min_index, max_index;

    printf("number of elements ");
    scanf("%d", &N);

    int MAS[N]; 

    printf("type elements \n");
    for (i = 0; i < N; ++i) {
        scanf("%d", &MAS[i]);
    }

    min_value = MAS[0];
    max_value = MAS[0];
    min_index = 0;
    max_index = 0;

    for (i = 0; i < N; ++i){
        if (MAS[i] < 0) {
            sum_negative += MAS[i];
        }

        if (MAS[i] < min_value) {
            min_value = MAS[i];
            min_index = i;
        }

        if (MAS[i] > max_value) {
            max_value = MAS[i];
            max_index = i;
        }
    }

    if (min_index > max_index) {
        int temp = min_index;
        min_index = max_index;
        max_index = temp;
    }

    product_between = 1;

    if (max_index - min_index > 1) { 
        for (i = min_index + 1; i < max_index; i++) {
            product_between *= MAS[i];
        }
    } else {
        product_between = 1;
    }

    printf("sum of negative elements %d\n", sum_negative);
    printf("product of elements between max and min: %d\n", product_between);

    return 0;
}
