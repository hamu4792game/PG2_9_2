#pragma once
class Player
{
public:
	Player();

private:
	int posX_;
	int posY_;
	int speedX_;
	int speedY_;
	int radius_;

	bool UP;
	bool RIGHT;

public:
	//	移動関数
	void Move();
	//	描画関数
	void Draw();
};

