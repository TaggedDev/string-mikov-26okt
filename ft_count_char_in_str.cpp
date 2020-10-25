#include "new_str.h"

int ft_count_char_in_str(char ch, string str)
{
	int a = 0, len = ft_len(str), amo = 0;
	//cout << ch;
	while (a < len)
	{
		if (str[a] == ch) {
			amo++;
		}
		a++;
	}
    return amo;
}
