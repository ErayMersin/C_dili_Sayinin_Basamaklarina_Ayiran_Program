#include<stdio.h>
#include<stdlib.h>

int main() {

	int sayi, yuzler, onlar, birler;

	printf("Sayi Giriniz: ");
	scanf_s("%d", &sayi);

	if (sayi < 1000)
	{
		yuzler = sayi / 100;
		printf("Yuzler Basamagi: %d\n", yuzler);

		onlar = sayi / 10;
		onlar = onlar % 10;
		printf("Onlar Basamagi: %d\n", onlar);

		birler = sayi % 10;
		printf("Birler Basamagi: %d", birler);
	}
	else
	{
		printf("En Fazla Uc Basamakli Sayi Giriniz...");
	}

	return 0;
}