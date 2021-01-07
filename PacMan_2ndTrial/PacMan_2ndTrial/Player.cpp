#include "Player.h"
#include<iostream>

namespace ShahJugalR {

	Player::Player()
	{
		isAlive = true;
	}

	Player::~Player()
	{
	}

	// Change Face
	void Player::FaceRight()
	{
		currentDirection = RIGHT;
		currentSymbol = RIGHT_char;
	}
	void Player::FaceLeft()
	{
		currentDirection = LEFT;
		currentSymbol = LEFT_char;
	}
	void Player::FaceUp()
	{
		currentDirection = UP;
		currentSymbol = UP_char;
	}
	void Player::FaceDown()
	{
		currentDirection = DOWN;
		currentSymbol = DOWN_char;
	}

	// Move
	void Player::MoveUpward()
	{
		if (currentDirection != UP && currentSymbol != UP_char) {
			FaceUp();
			position.y++;
		}
		else {
			position.y++;
		}
	}
	void Player::MoveDownward()
	{
		if (currentDirection != DOWN && currentSymbol != DOWN_char) {
			FaceDown();
			position.y--;
		}
		else {
			position.y--;
		}
	}
	void Player::MoveRightward()
	{
		if (currentDirection != RIGHT && currentSymbol != RIGHT_char) {
			FaceRight();
			position.x++;
		}
		else {
			position.x++;
		}
	}
	void Player::MoveLeftward()
	{
		if (currentDirection !=LEFT && currentSymbol != LEFT_char) {
			FaceLeft();
			position.x--;
		}
		else {
			position.x--;
		}
	}



}