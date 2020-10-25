#include "new_str.h"


using namespace std;
string ft_first_end_three(string str)
{
    if (ft_len(str) > 5) {
        
        string str1, str2, str3; // две строки, их в итоге конкатенирует в str3
        int ch = 0;
        for (int i = 3; i > ch; ch++)
        {
            str1 += str[ch]; // Первые 3
        }

        ch = ft_len(str)-1; // Обнуляем счетчик
        for (int i = ch - 2; i < ft_len(str); i++)
        {
            str2 += str[i]; // Последние 3
        }

        str3 = str1 + str2; // Конкатенация
        return str3; 
    }

    // Если меньше 5 (работает)
    int len = ft_len(str);
    char str1 = str[0];
    string str2;
    while (len > 0) {
        str2 += str1;
        len--;
    }
    return str2;
}
