#include "Vector2.h"

namespace ShahJugalR {

	Vector2::Vector2()
	{
		x = 10;
		y = 10;
	}

	Vector2::Vector2(float _x, float _y)
	{
		x = _x;
		y = _y;
	}

	Vector2::~Vector2()
	{

	}

	// Adding Vectors
	Vector2 Vector2::addVector(Vector2 vectorToBeAdded)
	{
		Vector2 t_resultantVector;

		t_resultantVector.x = x + vectorToBeAdded.x;

		t_resultantVector.y = y + vectorToBeAdded.y;

		return t_resultantVector;
	}
}
