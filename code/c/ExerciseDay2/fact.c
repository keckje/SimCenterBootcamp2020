# include <stdio.h>

int main(int argc, char **argv) {
	
	int n = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	/* caluculate factorial using while */
	
	int count = 1;
	int fact = 1;
	while (count <= n) {
		fact = fact * count;
		count++;
	}
	
	printf("Result of fact %d using while is: %d\n", n, fact);
	
	/* compare factorial with for loop */
	for (int count =1, fact =1; count <=n; count++) {
		fact *= count;
	}
	
	printf("Result of fact %d using while is: %d\n", n, fact);

	
	return 0;

}