#include <math.h>

int armstrong(int n) {
    int len = 0, temp = n, sum = 0, rem;
    while (temp != 0) {
        temp /= 10;
        len++;
    }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, len);
        temp /= 10;
    }
    return (sum == n);
}

int palindrome(int n){
	int rem,temp,rev=0;
	temp=n;
	while (temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp/=10;
	}
	return(rev==n);
	
}

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");
    
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
}