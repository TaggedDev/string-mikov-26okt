#include "new_str.h"
string ft_three_str(string str1, string str2, string str3)
{
    int index = ft_find_str(str1, str2);
	int k = 0;
	for (int i = index; k < ft_len(str3); i++)
	{
		str1[i] = str3[k];
		k++;
	}
    
	return str1;
}
