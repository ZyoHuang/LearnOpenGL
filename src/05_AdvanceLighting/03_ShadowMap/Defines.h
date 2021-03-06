#ifndef _DEFINES_H_
#define _DEFINES_H_

#include <LOGL/CommonDefine.h>
#include <Utility/Config.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Define {
	const std::string str_Chapter = "05_AdvanceLighting";
	const std::string str_Subchapter = "03_ShadowMap";

	//------------ shader
	const std::string str_ShaderPrefix = "/data/shaders/" + str_Chapter + "/" + str_Subchapter + "/";

	const std::string str_Depth = "depth";
	const std::string str_Depth_vs = str_ShaderPrefix + str_Depth + ".vs";
	const std::string str_Depth_fs = str_ShaderPrefix + str_Depth + ".fs";

	const std::string str_Shadow = "shadow";
	const std::string str_Shadow_vs = str_ShaderPrefix + str_Shadow + ".vs";
	const std::string str_Shadow_fs = str_ShaderPrefix + str_Shadow + ".fs";

	//------------ data

	const float data_PlaneVertices[] = {
		// positions            // normals         // texcoords
		 25.0f, -0.5f,  25.0f,  0.0f, 1.0f, 0.0f,  25.0f,  0.0f,
		-25.0f, -0.5f,  25.0f,  0.0f, 1.0f, 0.0f,   0.0f,  0.0f,
		-25.0f, -0.5f, -25.0f,  0.0f, 1.0f, 0.0f,   0.0f, 25.0f,

		 25.0f, -0.5f,  25.0f,  0.0f, 1.0f, 0.0f,  25.0f,  0.0f,
		-25.0f, -0.5f, -25.0f,  0.0f, 1.0f, 0.0f,   0.0f, 25.0f,
		 25.0f, -0.5f, -25.0f,  0.0f, 1.0f, 0.0f,  25.0f, 25.0f
	};

	Ubpa::Config * DoConfig();
}

#endif // !_DEFINES_H_


