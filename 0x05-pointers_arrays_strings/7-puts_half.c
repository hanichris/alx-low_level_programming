/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
int i, len = 0;
for (len = 0; str[len] != '\0'; len++)
;

for (i = (len + 1) / 2; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
