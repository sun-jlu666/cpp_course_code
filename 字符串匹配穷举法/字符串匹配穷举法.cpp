// �ַ���ƥ����ٷ�.cpp : �������̨Ӧ�ó������ڵ㡣

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int strp(string s, string p, int start) {
	int p_len = p.length();
	int last = s.length() - p.length();
	if (start > last) {
		return -1;
	}
	for (int g = start; g <= last; g++) {
		if (p == s.substr(g, p_len))
			return g;
	}
	return -1;

}
int main()
{
	int start = 0;
	string s = "abcdefg";
	string p = "efg";
	cout << strp(s, p, start) << endl;
    return 0;
}

