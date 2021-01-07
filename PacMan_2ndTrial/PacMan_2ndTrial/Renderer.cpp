#include"Renderer.h"
#include<iostream>

namespace ShahJugalR {

	Renderer::Renderer()
	{
		length = 25;
		width = 25;
	}
	Renderer::~Renderer()
	{
	}

	// Set Map Size
	void Renderer::SetSize(int l, int w)
	{
		length = l;
		width = w;
	}

	Vector2 Renderer::GetSize()
	{
		Vector2 t_size;

		t_size.x = length;
		t_size.y = width;

		return t_size;
	}

	// Render Map
	void Renderer::RenderMap()
	{
		for (int i = 0;i < length; i++) {
			for (int j = 0;j < width; j++) {

				if (player.position.x == j && player.position.y == i) {
					std::cout << (char)player.currentSymbol;
				}
				else {
					std::cout << "  ";
				}


			}
			std::cout << std::endl;
		}
	}
}