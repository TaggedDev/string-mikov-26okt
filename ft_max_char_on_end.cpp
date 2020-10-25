#include "new_str.h"
int ft_max_char_on_end(string str1)
{
	int length = ft_len(str1);
	int cntr = 0, result = 0, flag = 0;
	string last;
	for (int i = 0; i < length; i++)
	{
		while ( ('0' < str1[i] && str1[i] > 9) && ('0' < str1[++i] && str1[++i] > 9))
		{
			cntr++;

			if (cntr > result) {
				result = cntr;
			}

		}
		




	}
	return result;
}
