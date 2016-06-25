#include "Configuration.h"
#include <iostream>

char* XML_FILE_PATH = "sampleConfigFile.xml";

int main() {
	Configuration* configuration = new Configuration;

	//pugi::char_t* fileName = "sampleConfigFile.xml";

	configuration->SetConfigurationVariables(XML_FILE_PATH);

	system("pause");
	return 0;
}
