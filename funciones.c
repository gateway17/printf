#include "holberton.h"

void _reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = _strl(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

void _itoa(int n, char s[])
 {
     int i, sign;
 
     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     _reverse(s);
 }

 int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* string length*/
int _strl(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}
	