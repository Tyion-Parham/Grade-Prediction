#include <vector>
#include <iostream>
#include <ostream>
#include "Category.h"
#include "Assignment.h"
#include <string>
using namespace std;

Category::Category(vector<Assignment> assgn) : Category("temp", assgn, 0) {}

Category::Category(string n, vector<Assignment> assgn, double w) :
	name(n), assgnmnts(assgn), weight(w) {}

void Category::setName(string n)
{
	name = n;
}
void Category::setWeight(double w)
{
	weight = w;
}

void Category::setAssgnComp(int aC)
{
	assgnComp = aC;
}

void Category::setAssgnLeft(int aL)
{
	assgnLeft = aL;
}

void Category::setTotalPP(int tP)
{
	totalPP = tP;
}

void Category::setTotalPE(int tE)
{
	totalPE = tE;
}

void Category::setTotalPPP(int tPP)
{
	totalPPP = tPP;
}

void Category::setTotalPPE(int tPE)
{
	totalPPE = tPE;
}

void Category::setCurrGrade()
{
	currGrade = 100 * (totalPE / totalPP);
}

void Category::setProjGrade(double pjG)
{
	projGrade = pjG;
}

void Category::setPredGrade()
{
	predGrade = 100 * ((totalPE + totalPPE) / (totalPP + totalPPP));
}

string Category::getName()
{
	return name;
}

double Category::getWeight()
{
	return weight;
}

int Category::getAssgnComp()
{
	return assgnComp;
}

int Category::getAssgnLeft()
{
	return assgnLeft;
}

int Category::getTotalPP()
{
	return totalPP;
}

int Category::getTotalPE()
{
	return totalPE;
}

int Category::getTotalPPP()
{
	return totalPPP;
}

int Category::getTotalPPE()
{
	return totalPPE;
}

double Category::getCurrGrade()
{
	return currGrade;
}

double Category::getProjGrade()
{
	return projGrade;
}

double Category::getPredGrade()
{
	return predGrade;
}

ostream& operator<<(ostream& strm, const Category& catgry)
{
	strm << 
}