#ifndef GLFW_H_
#define GLFW_H_
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <Utility\Operation.h>
#include <iostream>

namespace LOGL {
	class Glfw {
	public:
		static Glfw * GetInstance();
		//------------
		void Init(size_t width = 800, size_t height = 600, char * title = "Title");
		void Terminate();
		//void SetCB_FrameBuffSize();
		void Run(Ubpa::Operation * operation = NULL);
		GLFWwindow * GetWindow();
		void CloseWindow();
		int GetKey(int key);
	private:
		Glfw();
		Glfw(const Glfw&);
		Glfw& operator=(const Glfw&);
		//------------
		static void CB_FrameBuffSize(GLFWwindow* window, int width, int height);
		void GenWindow(size_t width = 800, size_t height = 600, char * title = NULL);
		void LoadGL();
		//------------
		GLFWwindow * window;
		static Glfw * instance;
	};
}

#endif