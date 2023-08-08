char *create_array(unsigned int size, char c)
{
	if (size == 0)
		retun (NULL);
	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		retun (NULL);
	
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
