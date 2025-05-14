/*
* Copyright (c) 2025, Remi Freiwald
* All rights reserved.
*
* This source code is licensed under the BSD-style license found in the
* LICENSE file in the root directory of this source tree.
*/

#include "Player.h"
#include "Settings.h"

Player::Player(Vector2 pos, float width, float height, float speed, Color color) {
	this->pos = pos;
	this->width = width;
	this->height = height;
	this->speed = speed;
	this->color = color;
}

void Player::Move(float dt) {
	if (IsKeyDown(KEY_LEFT)) {
		pos.x -= speed * dt;
	}
	if (IsKeyDown(KEY_RIGHT)) {
		pos.x += speed * dt;
	}
}

void Player::CheckCollisionWithWall() {
	if (pos.x > (settingsArenaWidth - width / 2.f)) {
		pos.x = settingsArenaWidth - width / 2.f;
	}
	if (pos.x < (width / 2.f)) {
		pos.x = width / 2.f;
	}
}

void Player::Draw() {
	DrawRectangle(pos.x - width / 2.f, pos.y - height / 2.f, width, height, color);
}
