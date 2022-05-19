#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include "player.h"
#include "platform.h"
#include "splash.h"
#include "txt.h"
#include "map.h"

class Game {
public:
	enum class GameState { SPLASH, PLAY, GAME_OVER };
	Game();
	void play();

private:
	sf::RenderWindow window;
	GameState game_state = GameState::SPLASH;
	Player player;

	std::list<Platform*> platform_sprites;
	Splash game_over ;
	Map map;

	int score = 0;
	TextObj  score_text;



	void check_events();
	void update();
	void draw();
	void check_collisions();

};