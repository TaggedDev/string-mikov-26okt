#include "new_str.h"
string ft_cmp_str(string str1, string str2, int num)
{
    string result;
    //int length = ft_len(str1) + ft_len(str2);

    for (int i = 0; i < num; i++)
    {
        result += str1[i];
    }

    for (int i = 0; i < ft_len(str2); i++)
    {
        result += str2[i];
    }
    
    for (int i = num; i < ft_len(str1); i++)
    {
        result += str1[i];
    }


    return result;
}
