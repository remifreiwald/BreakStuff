/*
* Copyright (c) 2025, Remi Freiwald
* All rights reserved.
*
* This source code is licensed under the BSD-style license found in the
* LICENSE file in the root directory of this source tree.
*/

#include <raylib.h>

int main() {

	InitWindow(640, 360, "Break Stuff");

	SetTargetFPS(120);

	while (!WindowShouldClose()) {
		BeginDrawing();

		// Drawing
		ClearBackground(BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
