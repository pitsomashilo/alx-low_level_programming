

/**
 * rev_string - prints a string in reverse
 * @s: a string
 */
void rev_string(char *s);
int _strlen(char *s);

void rev_string(char *s)
{
	int len;
	int a;
	int i;
	int j;
	char new_str[100];

	len = _strlen(s);
	i = 0;

	while (i < len)
	{
		for (a = len; a >= -1; a--)
		{
			if (s[a] == '\0')
			{
				i++;
				continue;
			}
			else if (a == -1)
			{
				new_str[i] = '\0';
				break;
			}
			else
			{
				new_str[i] = s[a];
				i++;
			}
		}
	}

	for (j = 0; new_str[j]; j++)
	{
		s[j] = new_str[j];
	}
}
/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: len
 */
int _strlen(char *s)
{
	int len;
	int i;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
