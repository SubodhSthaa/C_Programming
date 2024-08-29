#include <stdio.h>
int main() {
    int sum = 0,i;
    for (i=1;i<=10;i++){
        sum += 2 * i;
		}
    printf("Sum of the first 10 even numbers is: %d\n", sum);
    return 0;
}

