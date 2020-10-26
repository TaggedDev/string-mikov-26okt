#include "new_str.h"
string ft_even_place(string str)
{
    string newstr;
    int a = 0;
    while (a < ft_len(str)) {
        if (a % 2 == 0) {
            newstr += str[a];
        }
        a++;
    }

    return newstr;
}
