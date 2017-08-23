#pragma once
#include "Graphics.h"
#include "Location.h"

class Board
{
public:
	Board( Graphics& gfx);
	void DrawCell( const Location& loc, Color c);
	int GetGridWidth() const;
	int GetGridHeight() const;
	bool IsInsideBoard(const Location& loc ) const;
private:
	static constexpr int dimension = 20;
	static constexpr int width = 25;
	static constexpr int height = 25;
	static constexpr Color cellColor = Colors::Magenta;
	Graphics& gfx;
};
