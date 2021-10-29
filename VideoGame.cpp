#include "VideoGame.h"

// Definition 
const char* RecommendMeAVideoGame(char videoGame)
{
	if (videoGame == 'a' || videoGame == 'A')
		return "Avatar";
	else if (videoGame == 'b' || videoGame == 'B')
		return "Battlefield";
	else if (videoGame == 'c' || videoGame == 'C')
		return "Call of Duty";
	else
		return "Haze";
}

const char* RecommendMeFood(char food)
{
	if (food == 'a' || food == 'A')
		return "Your recommended food for today is: Apple";
	else if (food == 'b' || food == 'B')
		return "Your recommended food for today is: Black Rice";
	else if (food == 'c' || food == 'C')
		return "Your recommended food for today is: Cacao";
	else
		return "No recommendation, Sorry!";
}