#include <stdio.h>
#include <math.h>

int main() {
    int N, i;

    printf("number of elements  ");
    scanf("%d", &N);

    int MAS[N];
    int sum_even = 0, count_even = 0;
    int product_odd = 1, count_odd = 0;
    int max_value;

    printf("type elements \n");
    for(i = 0; i < N; i++) {
        scanf("%d", &MAS[i]);

        if (i == 0) {
            max_value = MAS[i];
        }

        if (MAS[i] % 2 == 0) {
            sum_even += MAS[i];
            count_even++;
        }

        if (MAS[i] % 2 != 0) {
            product_odd *= MAS[i];
            count_odd++;
        }

        if (MAS[i] > max_value) {
            max_value = MAS[i];
        }
    }

    if(count_even > 0) {
        printf("sum of even elements %d\n", sum_even);
        printf("avg of even numbers %.2f\n", (float)sum_even / count_even);
    } else {
        printf("no even elements \n");
    }

    if(count_odd > 0) {
        printf("product of odd elements  %d\n", product_odd);
        printf("geometric mean of odd elements %.2f\n", pow(product_odd, 1.0 / count_odd));
    } else {
        printf("no odd elements \n");
    }

    printf("max %d\n", max_value);

    return 0;
}
