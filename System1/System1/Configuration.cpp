#include "Configuration.h"
#include <iostream>

int main(){
	pugi::xml_document doc;

	pugi::xml_parse_result result = doc.load_file("sampleConfigFile.xml");
	
	std::cout << "Load result: " << result.description() << ", projector number: " << doc.child("projectors").value() << std::endl;
}