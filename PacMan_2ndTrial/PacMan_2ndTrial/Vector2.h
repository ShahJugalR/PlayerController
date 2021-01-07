#pragma once

#define zeroVector = new Vector2(0,0);

namespace ShahJugalR {

	class Vector2
	{
	public:

		// Constructor
		Vector2();
		Vector2(float _x, float _y);
		~Vector2();

		// AddVector
		Vector2 addVector(Vector2 vectorToBeAdded);

	public:

		float x;
		float y;


	};
}