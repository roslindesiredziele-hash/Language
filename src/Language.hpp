#pragma once

class Language
{
public:
	virtual void evolve() = 0;
	virtual ~Language() = default;
};