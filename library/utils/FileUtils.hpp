#pragma once

#include <library/utils/StringUtils.hpp>

#include <string>

#include <iostream>
using namespace std;

class FileUtils
{
//·������
public:
	static string getFileOrDirName(string path)
	{
		return "";
	}

	static string getPreviousLayerPath(string path)
	{
		int index;
		for (int i = path.length(); i > 0; i--)
		{
			if (i == 0)
			{
				return path;
			}

			if (path[i] == '\\')
			{
				index = i;
				break;
			}
		}

		return StringUtils::getStringUsePos(path, 0, index - 1);
	}

};