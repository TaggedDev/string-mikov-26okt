#include "new_str.h"
string ft_string_reverse(string str)
{
    string newstr;
	for (int i = ft_len(str)-1; i >= 0; i--)
	{
		newstr += str[i];
	}
    return newstr;
}
