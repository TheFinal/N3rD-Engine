// Engine.cpp: definisce le funzioni esportate per l'applicazione DLL.
//

#include "stdafx.h"
#include "Engine.h"

N3rDEngine::N3rDEngine()
{
	// startup the log subsystem
	log = new LOG();

}

N3rDEngine::~N3rDEngine()
{

}

void N3rDEngine::LoadXmlConfig(const string &filename)
{

}