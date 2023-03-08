#include "ImmutableData.h"

ImmutableData::ImmutableData()
{
	setIsMutable(true);
}

bool ImmutableData::getIsMutable()
{
	return isMutable;
}

void ImmutableData::setIsMutable(bool boolIn)
{
	isMutable = boolIn;
}

void ImmutableData::addData(std::string dataIn)
{
	data.push_back(dataIn);
}

void ImmutableData::dataDone()
{
	setIsMutable(false);
}

std::string ImmutableData::allDataToString()
{
	std::string returnString = "";

	if (getIsMutable() == false)
	{
		for (size_t i = 0; i < data.size(); i++)
		{
			returnString += data.at(i);
			returnString += "\n";
		}
	}

	else
	{
		returnString = "Cannot Access Data";
	}

	return returnString;
}
