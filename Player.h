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
	//	�ړ��֐�
	void Move();
	//	�`��֐�
	void Draw();
};

