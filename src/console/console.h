#pragma once

class N3rDConsole
{
public:
	N3rDConsole();
	~N3rDConsole();

	
protected:

private:

	bool consoleRunnning = false;

	void StartConsole();
	void ParseCommand();
	void ParseConfigFile();

};