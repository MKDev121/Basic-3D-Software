#pragma once
#include <glad/glad.h>

#include<string>
#include<fstream>
#include<sstream>
#include<iostream>


class Shader {
public:
	//program ID
	unsigned int ID;

	//constructor reads and build the shader
	inline Shader(const char* vertexPath,const char*fragmentPath);

	// use activate the shader
	inline void use();

	// utility uniform functions
	void setBool(const std::string& name, bool value)const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
};



