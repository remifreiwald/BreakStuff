#include "raylib.h"

inline int settingsArenaWidth = 700;
inline int settingsArenaHeight = 700;
inline const char* settingsWindowTitle = "Break Stuff";

inline int settingsTargetFPS = 60;

inline Vector2 settingsPlayerStartPos = Vector2{ settingsArenaWidth / 2.f, settingsArenaHeight - 50.f };
inline float settingsPlayerWidth = 130;
inline float settingsPlayerHeight = 20;
inline float settingsPlayerSpeed = 500;
inline Color settingsPlayerColor = WHITE;

// spawn ball a little above the player
inline float settingsBallStartDistanceAbovePlayer = 30.f;
inline Vector2 settingsBallStartPos = Vector2{ settingsPlayerStartPos.x, settingsPlayerStartPos.y - settingsBallStartDistanceAbovePlayer };
inline float settingsBallRadius = 10.f;
inline Color settingsBallColor = WHITE;
