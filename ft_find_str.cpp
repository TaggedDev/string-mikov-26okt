#include "new_str.h"

int ft_find_str(string str1, string str2)
{
    int n = 0;
    int a = 0;

    for (int i = 0; i < ft_len(str1); i++) {
        if (str1[i] == str2[n]) {
            n += 1;
            if (ft_len(str2) == n) {
                for (int i = 0; str2[0] != str1[i]; i++) {
                    a += 1;
                }
                return a;
            }


        }
        else {
            a = 0;
            n = 0;
        }
    }
    if (ft_len(str2) == n) {
        return n;
    }
    else {
        return -1;
    }

}