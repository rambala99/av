#include <stdio.h>
int main()
{
	char N;
	scanf("%c",&N);	
	if((N>='a')&&(N<='z'))
	{

	if((N=='a')||(N=='e')||(N=='i')||(N=='o')||(N=='u'))
{
	printf("Vowel");
}
else
{
	printf("Consonant");
}
}
else
{
	printf("invalid");
}

return 0;
}
