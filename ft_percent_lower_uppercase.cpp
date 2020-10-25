#include "new_str.h"

double ft_percent_lower_uppercase(string str1)
{
	int length = ft_len(str1);
	int low = 0, upp = 0;
	for (int i = 0; i < length; i++)
	{
		if (97 <= (int)str1[i] && (int)str1[i] <= 122) {
			low++;
			//cout << "!" << str1[i] << endl;
		} 
		if (65 <= (int)str1[i] && (int)str1[i] <= 90) {
			upp++;
			//cout << "?" << str1[i] << endl;
		}
	}
	
	double procent = (double)upp / (double)low;
    return procent;
}


/*

100 = sum
x = upp

*/