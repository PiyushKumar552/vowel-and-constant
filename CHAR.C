#include <stdio.h>
 void main()
 {
   char ch;
   printf(" Enter a char\n");
   scanf("%c",&ch);
   if (ch>='A' && ch<='z')
   {
   if ( ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
   {
    printf("%c is vowel\n", ch);
    }
    else
       {
	printf("%c is a consonant\n", ch);
	}
	getch ();
   }
 }
