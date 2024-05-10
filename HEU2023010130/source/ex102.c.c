#include <stdio.h>
float find_sequence_sum(int n) {
    int numerator = 2;
    int denominator = 1;
    float sequence_sum = 0;
    int i=0; 
	for ( i = 0; i < n; i++) {
        sequence_sum += (float) numerator / denominator;
        int temp = numerator;
        numerator = numerator + denominator;
        denominator = temp;
    }
    return sequence_sum;
}
int main() {
    int n;
     scanf("%d", &n);
    float result = find_sequence_sum(n);
    printf("%.2f\n",result);
    return 0;
}




