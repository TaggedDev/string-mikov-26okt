#include "new_str.h"

using namespace std;
string ft_print_copy_str(string str, int number)
{
	string classic = str;
	while (number > 1)
	{
		str+= classic;
		--number;
	}
    return str;
}
