#include<stdio.h>
int main() {
	char a[100000] = { 0 };
	char ch;
	int num,j,i = 0;
	printf("Enter message to be encrypted: ");
	while ((ch = getchar()) != '\n') {
		a[i] = ch;
		i++;
	}
	j = i;
	printf("Enter shift amount (1-25): ");
	scanf_s("%d", &num);
	for (; i >= 0;) {
		if (a[i] <= 'Z' && a[i] >= 'A') {
			if ((a[i] + num) <= 'Z') {
				a[i] = a[i] + num;
			}
			else {
				a[i] = a[i] + num - 26;
			}
		}
		if (a[i] <= 'z' && a[i] >= 'a') {
			if ((a[i] + num) <= 'z') {
				a[i] = a[i] + num;
			}
			else {
				a[i] = a[i] + num - 26;
			}
		}

		i--;
	}
	i++;
	printf("Encrypted message: ");
	for (; i <= j;) {
		printf("%c", a[i]);
		i++;
	}

	return 0;
}