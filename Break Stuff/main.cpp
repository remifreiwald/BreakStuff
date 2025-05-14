/*
* Copyright (c) 2025, Remi Freiwald
* All rights reserved.
*
* This source code is licensed under the BSD-style license found in the
* LICENSE file in the root directory of this source tree.
*/

#include "raylib.h"

#include "Player.h"
#include "Ball.h"

#include "Settings.h"

enum {
	BEFORE_GAME,
	DURING_GAME,
	AFTER_GAME,
};

int gameState = BEFORE_GAME;

int main() {

	InitWindow(settingsArenaWidth, settingsArenaHeight, settingsWindowTitle);

	SetTargetFPS(settingsTargetFPS);

	Player player = Player(settingsPlayerStartPos, settingsPlayerWidth, settingsPlayerHeight, settingsPlayerSpeed, settingsPlayerColor);
	Ball ball = Ball(settingsBallStartPos, settingsBallRadius, settingsBallColor);

	while (!WindowShouldClose()) {

		// delta time
		float dt = GetFrameTime();

		switch (gameState) {
			case BEFORE_GAME: {
				// move player
				player.Move(dt);
				player.CheckCollisionWithWall();

				// move ball with player
				ball.MoveToPlayer(player);

				// start game?
				if (IsKeyPressed(KEY_UP)) {
					gameState = DURING_GAME;
					ball.Shoot();
				}
			} break;

			case DURING_GAME: {
				// move player
				player.Move(dt);
				player.CheckCollisionWithWall();
			} break;

			case AFTER_GAME: {

			} break;
		}

		BeginDrawing();

		// Drawing
		ClearBackground(BLACK);
		player.Draw();
		ball.Draw();

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
