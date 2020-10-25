#include "new_str.h"
string ft_slice_str(string str, int start, int end)
{
    string newstr;
	int len = ft_len(str);
	if (end > len - 1) {
		for (int i = start; i < len; i++)
		{
			newstr += str[i];
		}
	} else {
		for (int i = start; i < end+1; i++)
		{
			newstr += str[i];
		}
	}
    return newstr;
}
