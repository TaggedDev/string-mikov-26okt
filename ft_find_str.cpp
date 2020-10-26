#include "new_str.h"

int ft_find_str(string str1, string str2)
{
	string subs;
	int length = ft_len(str2);
	int nomer = -1;

	for (int i = 0; i < ft_len(str1)-length+1; i++)
	{
		subs = str1.substr(i, length);
		if (subs == str2) {
			nomer = i;
		}
	}

	return nomer;

}