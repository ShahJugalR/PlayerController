
#pragma once

#include"Vector2.h"

namespace ShahJugalR {
	class Player
	{
		// System-Defined Constructor - Destructor
	public:
		Player();
		~Player();


		// Move

		void MoveUpward();
		void MoveDownward();
		void MoveLeftward();
		void MoveRightward();

	private:

		// Symbol And Current Facing Direction Enum

		enum Direction
		{
			RIGHT = 1, LEFT = -1, UP = 2, DOWN = -2
		};
		enum Symbol
		{
			RIGHT_char = 16, LEFT_char = 17, DOWN_char = 30, UP_char = 31
		};

	private:

		// Changing Facing Direction

		void FaceRight();
		void FaceLeft();
		void FaceUp();
		void FaceDown();
		
	public :

		bool isAlive;

		Vector2 position = Vector2(0, 0);

		Direction currentDirection = RIGHT;

		Symbol currentSymbol = RIGHT_char;

	};
}