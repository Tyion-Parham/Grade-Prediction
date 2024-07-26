#pragma once
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

class Assignment
{
private:
	int assgnNum, pointsPossible, pointsEarned;
	string assgnName, category;
	bool completion, edited;
	double score;

public:
	Assignment();
	Assignment(string anN, string cat, int pP, int pE, bool comp);
	int getAssgnNum();
	string getAssgnName();
	string getAssgnCat();
	int getPointsPossible();
	int getPointsEarned();
	bool getCompletion();
	bool getEdit();
	void setAssgnNum(int aN);
	void setAssgnName(string anN);
	void setAssgnCat(string cat);
	void setPointsPossible(int pP);
	void setPointsEarned(int pE);
	void setCompletion(bool comp);
	void setEdit(bool e);
	void setScore();
	double getScore();
	friend ostream& operator<<(ostream& strm, const Assignment& assgnmnt);
	
};

#endif // !ASSIGNMENT_H