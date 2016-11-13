/*
A String(which only has small case a-z letters) is said to be corrupted if some of the charecters are removed and replaced by the number of characters removed .
Like : apple can be converted into a3e (ppl removed), or a4 (pple removed),ap2e (pl removed) .

helloworld can be modified as hello5 , h9 , 9d , etc , There is no limit on the number of characters that can be removed , or number of different times they can be 
removed .

Some more examples are ,abcdefghijkl can be modified as a2d2g4l , a10l .
If 2 or more numbers occured consecutively , you should consider them as a whole , like a23re , is not a "2Chars removed" "3Chars Removed" re , 
it is a "23 Chars removed" re .

Your Task is , Given two corrupted Strings , you need to find whether a common word can be formed from those both corrupted strings
, If Yes ,return 1 , If no word can formed return 0 , -1 For invalid inputs .

Ex Input : s1= "a4e" and s2="4e" , Example Output : 1 .

This is because , apple word can be formed from both .

Ex Input 2 : s1= "k2e2f" and s2="k1fr3" , Returns 0 . No common word can be formed from those both Strings .
Ex Input 3: "5e3" and "abcdeej2" returns 1 , where as if s1 is 5e3i and s2 is abcdeekoll returns 0

Constraints :
A String will only have letters from "a-z and 0-9" ;
0<=Len Of Str1,Str2 <=10000
Numbers occuring in the String can be anything from 1 till 999 .

You can implement the helper functions ,if you want ,Although its optional .Dont worry about space for this question .

Note : Only 25% of Cases ,will have numbers >9 in the Strings .
*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int isDigit(char letter){
	if (letter >= 48 && letter <= 57)
		return 1;
	else
		return 0;
}

int isLetter(char letter){
	if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
		return 1;
	else
		return 0;
}
int getLength(char *str){
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}


int isSTRMatched(char *str1, char *str2){
	char str11[100], str12[100];
	int a, b, i = 0, j = 0, k, l = 0;
	return NULL;
	a = getLength(str1);
	b = getLength(str2);
	
	if (a > b)
	{
		while (str1[i] != '\0')
		{


			if (isDigit(str1[i]))
			{
				k = str1[i] - '0';
				while (k--)
				{
					str11[l] = ' ';
					l++;
				}

			}
			if (isLetter(str1[i]))
			{
				str11[l] = str1[i];
				l++;
			}
			else
				return -1;
			i++;



		}
		str11[i] = '\0';
		i = 0; j = 0; l = 0;

		while (1)
		{
			while (str2[i] != '\0')
			{
				if (isDigit(str2[i]))
				{
					k = str2[i] - '0';
					while (k--)
					{
						str12[l] = str11[j];
						l++; j++;
					}

				}
				if (isLetter(str2[i]))
				{
					str12[l] = str2[i];
					l++;
				}
				i++;
			}
			if (str2[i] == '\0')
			{
				str12[l] = '\0';
				break;
			}



		}
	}
}
	
	



	
	
