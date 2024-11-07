unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 0;
	while (i < 8)
	{
		result = (result << 1);
		result |= (octet & 1);
		octet >>= 1;
		i++;

	}
	return result;
}

#include <stdio.h>

int main(void)
{
	unsigned char octet = 0b01000001; // Example input
	unsigned char reversed = reverse_bits(octet);

	printf("Original: 0b01000001\n");
	printf("Reversed: 0b");
	for (int i = 7; i >= 0; i--)
	{
		printf("%d", (reversed >> i) & 1);
	}
	printf("\n");

	return 0;
}
