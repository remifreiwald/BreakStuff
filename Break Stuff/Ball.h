/*
* Copyright (c) 2025, Remi Freiwald
* All rights reserved.
*
* This source code is licensed under the BSD-style license found in the
* LICENSE file in the root directory of this source tree.
*/
#pragma once

#include "raylib.h"
#include "Player.h"

class Ball {
public:
	Vector2 pos;
	float radius;
	Color color;

	Ball(Vector2 pos, float radius, Color color);

	void MoveToPlayer(Player player);

	void Shoot();

	void Draw();
};
