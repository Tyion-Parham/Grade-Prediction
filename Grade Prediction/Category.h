#pragma once
#ifndef CATEGORY_H
#define CATEGORY_H

class Category
{
private:
	string name;
	vector<Assignment> assgnmnts;
	double weight;
	int assgnComp, assgnLeft, totalPP, totalPE, totalPPP, totalPPE;
	double currGrade, projGrade, predGrade;

public:
	Category(vector<Assignment> assgn);
	Category(string n, vector<Assignment> assgn, double w);
	void setName(string n);
	void setWeight(double w);
	void setAssgnComp(int aC);
	void setAssgnLeft(int aL);
	void setTotalPP(int tP);
	void setTotalPE(int tE);
	void setTotalPPP(int tP);
	void setTotalPPE(int tE);
	void setCurrGrade();
	void setProjGrade(double pjG);
	void setPredGrade();
	string getName();
	double getWeight();
	int getAssgnComp();
	int getAssgnLeft();
	int getTotalPP();
	int getTotalPE();
	int getTotalPPP();
	int getTotalPPE();
	double getCurrGrade();
	double getProjGrade();
	double getPredGrade();
	friend ostream& operator<<(ostream& strm, const Category& catgry);
};

#endif // !CATEGORY_H