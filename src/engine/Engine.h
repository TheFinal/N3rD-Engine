// Il seguente blocco ifdef rappresenta il modo standard di creare macro che semplificano 
// l'esportazione da una DLL. Tutti i file all'interno della DLL sono compilati con il simbolo ENGINE_EXPORTS
// definito nella riga di comando. Questo simbolo non deve essere definito in alcun progetto
// che utilizza questa DLL. In questo modo qualsiasi altro progetto i cui file di origine includono questo file vedranno le funzioni 
// ENGINE_API come importate da una DLL, mentre la DLL vedrà i simboli
// definiti con questa macro come esportati.
#ifdef ENGINE_EXPORTS
#define ENGINE_API __declspec(dllexport)
#else
#define ENGINE_API __declspec(dllimport)
#endif

#include "..\common\common.h"



class ENGINE_API LOG
{
public:
	LOG();
	~LOG();

protected:

private:

};




class ENGINE_API N3rDEngine
{
public:
	N3rDEngine();
	~N3rDEngine();

	void LoadXmlConfig(const string &filename);


protected:

private:

	LOG* log;

};
