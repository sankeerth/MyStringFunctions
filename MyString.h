#ifndef MYSTRING_H
#define MYSTRING_H

char* myStrcat (char* str1, const char* str2 )
{
	char* s;
	s = str1;
	while (*str1 != '\0')
		str1++;
	while (*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return s;
}

int myStrcmp (const char* str1, const char* str2)
{
	while (*str1 == *str2) {
		if (*str1 == '\0' || *str2 == '\0')
			break;
		str1++;
		str2++;
	}
	if (*str1 == '\0' && *str2 == '\0')
		return 0;
	else 
		return 1;
}

char* myStrcpy(char* str2, const char* str1)
{
	char* dest;
	dest = str2;
	while (*str2 = *str1) {
		*str1++;
		*str2++;
	}
	return dest;
}

int myStrlen(const char *str)
{
    int length = 0;
    while(str[length] != '\0') 
       length++;
    return length;
}

char* myStrncat (char* str1, const char* str2, int n)
{
	int i = 0;
	char* s;
	s = str1;
	while (*str1 != '\0')
		str1++;
	for (int i = 0; i < n; ++i) {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return s;
}

int myStrncmp (const char* str1, const char* str2, int n)
{
	//if (n == 0)
		//return 1;
	int i = 0;
	while (i < n) {
		if (str2[i] == str1[i])
			i++;
		else
			break;
	}
	if (i == n)
		return 0;
	else 
		return 1;
}

char* myStrncpy(char* str2, const char* str1, int n)
{
	char* dest;
	dest = str2;
	for(int i = 0; i < n; i++) {
		*str2 = *str1;
		*str1++;
		*str2++;
	}
	*str2 = '\0';
	return dest;
}

char* substr(const char* str, int position, int length)
{
	int i = 0, j, k;
	char s[30];
	for (j = 0; str[j] != '\0'; ++j);
	    if(position > j)
			return 0;
	while (i < position)
		str[++i];
	for (k = 0; k < length; ++k, ++i)
		s[k] = str[i];
	s[k] = '\0';
	return s;
}

#endif //MYSTRING_H
