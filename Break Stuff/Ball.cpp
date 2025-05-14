/*
* Copyright (c) 2025, Remi Freiwald
* All rights reserved.
*
* This source code is licensed under the BSD-style license found in the
* LICENSE file in the root directory of this source tree.
*/

#include "Ball.h"
#include "Settings.h"

Ball::Ball(Vector2 pos, float radius, Color color) {
	this->pos = pos;
	this->radius = radius;
	this->color = color;
}

void Ball::MoveToPlayer(Player player) {
	pos.x = player.pos.x;
	pos.y = player.pos.y - settingsBallStartDistanceAbovePlayer;
}

void Ball::Shoot() {

}

void Ball::Draw() {
	DrawCircle(pos.x, pos.y, radius, color);
}
