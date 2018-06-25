/**
 * main - prints the string "Holberton"
 * Return: 0 if it succeeds
 */
int main(void)
{
	int i;
	int _putchar(char c);
	char str[10] = "Holberton";

	for (i = 0; i < 10; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
	return (0);
}
