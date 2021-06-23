#include <stddef.h> // NULL
#include <ctype.h>
#include <string.h>
#include <stdio.h>

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) 
{
    char* ch = new char[strlen(camelCase)];
    strcpy (ch, camelCase);
    for (size_t i = 0, j = 0; i < strlen(camelCase); ++i)
    {
	if ( isupper(camelCase[i]) && i != 0)
	{
	    char to_add = toupper (camelCase[i]);
	    if ( camelCase[i-1] != ' ' )
	    {
		ch[j++] = ' ';
		ch[j++] = to_add;
	    }
	    continue;
	}
	ch[j++] = camelCase[i];
    }
    return ch;
}


int main(int, char**)
{
    const char* str {"chahecafbEbhcdgbGbachf"};

    char *ch = solution ( str );
    printf ("%s\n", ch);
    delete[] ch;

}
