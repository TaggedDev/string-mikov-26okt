#include "new_str.h"
bool ft_equal_reverse(string str)
{
    if (ft_reverse_str(str) == str) {
        return true;
    }
    return false;
}
