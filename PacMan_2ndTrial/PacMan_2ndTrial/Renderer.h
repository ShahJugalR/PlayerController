#pragma once

#include"Player.h"


namespace ShahJugalR {

	class Renderer
	{
	public:
		Renderer();
		~Renderer();

		void SetSize(int l,int w);
		Vector2 GetSize();

		void RenderMap();
	private:

		int length;
		int width;

	public:
		Player player;

	};
}