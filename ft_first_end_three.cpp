#include "new_str.h"


using namespace std;
string ft_first_end_three(string str)
{
    if (ft_len(str) > 5) {
        
        string str1, str2, str3; // ��� ������, �� � ����� ������������� � str3
        int ch = 0;
        for (int i = 3; i > ch; ch++)
        {
            str1 += str[ch]; // ������ 3
        }

        ch = ft_len(str)-1; // �������� �������
        for (int i = ch - 2; i < ft_len(str); i++)
        {
            str2 += str[i]; // ��������� 3
        }

        str3 = str1 + str2; // ������������
        return str3; 
    }

    // ���� ������ 5 (��������)
    int len = ft_len(str);
    char str1 = str[0];
    string str2;
    while (len > 0) {
        str2 += str1;
        len--;
    }
    return str2;
}
