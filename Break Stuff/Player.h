/*
* Copyright (c) 2025, Remi Freiwald
* All rights reserved.
*
* This source code is licensed under the BSD-style license found in the
* LICENSE file in the root directory of this source tree.
*/
#pragma once

#include "raylib.h"

class Player {
public:
	Vector2 pos;
	float width;
	float height;
	float speed;
	Color color;

	Player(Vector2 pos, float width, float height, float speed, Color color);

	void Move(float dt);

	void CheckCollisionWithWall();

	void Draw();
};
