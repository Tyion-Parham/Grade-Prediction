#include <iostream>
#include <ostream>
#include "Assignment.h"
using namespace std;

Assignment::Assignment() : Assignment("", "", 0, 0, false){}

Assignment::Assignment(string anN, string cat, int pP, int pE, bool comp) :
	assgnName(anN), category(cat), pointsPossible(pP), pointsEarned(pE), completion(comp) {}

int Assignment::getAssgnNum()
{
	return assgnNum;
}

string Assignment::getAssgnName()
{
	return assgnName;
}

string Assignment::getAssgnCat()
{
	return category;
}

int Assignment::getPointsPossible()
{
	return pointsPossible;
}

int Assignment::getPointsEarned()
{
	return pointsEarned;
}

bool Assignment::getCompletion()
{
	return completion;
}

bool Assignment::getEdit()
{
	return edited;
}

void Assignment::setAssgnNum(int aN)
{
	assgnNum = aN;
}

void Assignment::setAssgnName(string anN)
{
	assgnName = anN;
}

void Assignment::setAssgnCat(string cat)
{
	category = cat;
}

void Assignment::setPointsPossible(int pP)
{
	pointsPossible = pP;
}

void Assignment::setPointsEarned(int pE)
{
	pointsEarned = pE;
}

void Assignment::setCompletion(bool comp)
{
	completion = comp;
}

void Assignment::setEdit(bool e)
{
	edited = e;
}

void Assignment::setScore()
{
	score = 100 * (static_cast<double>(pointsEarned) / static_cast<double>(pointsPossible));
}

double Assignment::getScore()
{
	return score;
}

ostream& operator<<(ostream& strm, Assignment& assgnmnt)
{
	strm << assgnmnt.getAssgnName() << "        " << assgnmnt.getPointsEarned()
		<< " / " << assgnmnt.getPointsPossible() << "    " << assgnmnt.getScore() << "\n";
}
