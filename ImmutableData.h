#ifndef IMMUTABLEDATA
#define IMMUTABLEDATA

#include <vector>
#include <string>

class ImmutableData
{
public:
	// constructors
	ImmutableData();

	// getters

	bool getIsMutable();

	// setters

	void setIsMutable(bool boolIn);
	void addData(std::string dataIn);

	// other

	void dataDone();

	std::string allDataToString();

private:
	bool isMutable;
	std::vector<std::string> data;
};

#endif