#pragma once
#include <SFML/Graphics.hpp>
#include "../include/ResourceHolder.hpp"


class Game
{
    public:
        Game();
        void run();

    private:
        void processEvents();
        void update(sf::Time deltaTime);
        void render();
        void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

    private:
        static const float PlayerSpeed;
        static const sf::Time TimePerFrame;

        sf::RenderWindow mWindow;
        ResourceHolder<sf::Texture, Textures::ID> mTextures;
        // TextureHolder mTextures;
        sf::Sprite mPlayer;

        bool mIsMovingUp;
        bool mIsMovingDown;
        bool mIsMovingLeft;
        bool mIsMovingRight;

        float mSpeed;
};

