roman_dic = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}

class Solution(object):

	def romanToInt(self, s):

		sum = 0
		i = 0

		while(i<len(s)):

			if (i < len(s)-1) and (roman_dic[str(s[i+1])] > roman_dic[str(s[i])]):
				sum += roman_dic[str(s[i+1])] - roman_dic[str(s[i])]
				i += 2

			else:
				sum += roman_dic[str(s[i])]
				i += 1

		return sum