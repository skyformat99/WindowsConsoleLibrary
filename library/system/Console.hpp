#pragma once



#include <string>
#include <deque>

#include <iostream>

using namespace std;


class Console
{
public:
	static string readString()
	{
		string str;
		cin >> str;
		return move(str);
	}


public:
	template<class T>
	static void out(T data)
	{
		string typeStr = typeid(data).name();
		//cout << typeStr << endl;
		if (typeStr == "i" || typeStr == "d" || typeStr == "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"
			|| typeStr == "long" || typeStr == "c" || typeStr == "m" || typeStr == "b" || typeStr == "A5_c"
			|| typeStr == "PKc" || typeStr =="char const *" || typeStr == "char const * __ptr64"
			|| typeStr == "class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >"
		    || typeStr == "int" || typeStr == "struct HWND__ *" || typeStr == "unsigned long"
			|| typeStr == "class std::sub_match<class std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char> > > >"
			|| typeStr == "unsigned int" || typeStr == "bool")//��������
		{
			cout << data << endl;
		}
	}

	template<class T>
	static void out(deque<T>& dataList)
	{
		for (int i = 0; i < dataList.size(); i++)
		{
			cout << dataList[i] << endl;
		}
	}

public:
	static void clear()
	{
		system("cls");
	}
};

