#include"Vector2.h"
#include"Player.h"
#include"Renderer.h"
#include<thread>
#include<iostream>
#include<conio.h>

using namespace ShahJugalR;
using namespace std;

Renderer renderer;
static bool isRuning = true;

void Reclamp() {

	if (renderer.player.position.x > renderer.GetSize().x) {
		renderer.player.position.x = 0;
	}
	if (renderer.player.position.y > renderer.GetSize().y) {
		renderer.player.position.y = 0;
	}

	if (renderer.player.position.y < 0) {
		renderer.player.position.y = renderer.GetSize().y;
	}
	if (renderer.player.position.x < 0) {
		renderer.player.position.x = renderer.GetSize().x;
	}
}


void DebugPlayerPosition() {

	cout << '(' << renderer.player.position.x << ',' << renderer.player.position.y << ')' << endl;

	cout << endl << "60 FPS   Made By Shah Jugal";
}

void MakingMap() {

	using namespace std::literals::chrono_literals;

	while (isRuning) {
		system("cls");
		renderer.RenderMap();

		cout << endl << endl;

		DebugPlayerPosition();

		std::this_thread::sleep_for(0.2s);
	}


}

	int main() {

		thread worker(MakingMap);

		while (isRuning) {

			char x;

			x = _getch();

			if (x == 'd' || x == 'D') {
				renderer.player.MoveRightward();
				Reclamp();
			}
			else if (x == 'a' || x == 'A') {
				renderer.player.MoveLeftward();
				Reclamp();
			}
			else if (x == 's' || x == 'S') {
				renderer.player.MoveUpward();
				Reclamp();
			}
			else if (x == 'w' || x == 'W') {
				renderer.player.MoveDownward();
				Reclamp();
			}
			else if (x == 'x') {

				system("cls");
				cout << "Game Over";

				isRuning = false;
			}
		}

		worker.join();

		//cin.get();
	}
	