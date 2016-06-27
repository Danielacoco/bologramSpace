#include "Configuration.h"
#include <iostream>

void Configuration::SetConfigurationVariables(char* file) {
	pugi::xml_document doc;
	pugi::xml_parse_result result = doc.load_file(file);

	if (result) 
	{
		std::cout << "XML [" << file << "] parsed without errors, attr value : [" << doc.child("projectors").value() << "] \n";
	}
	else
	{
		std::cout << "XML [" << file << "] parsed with errors, attr value: [" << doc.child("node").attribute("attr").value() << "]\n";
		std::cout << "Error description: " << result.description() << "\n";
		std::cout << "Error offset: " << result.offset << " (error at [..." << (file + result.offset) << "]\n\n";
	}
};