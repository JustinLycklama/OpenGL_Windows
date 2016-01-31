#ifdef OPENGLDLL_EXPORTS   
#define EXPORT __declspec(dllexport) 
#else   
#define EXPORT __declspec(dllimport) 
#endif

enum ErrorType
{
	ErrorTypeError
};

bool EXPORT initialize(ErrorType &error);