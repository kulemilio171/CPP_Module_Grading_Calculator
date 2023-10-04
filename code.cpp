#include <iostream>
using namespace std;

class Marks
{
protected:
	int studentID;
	string name;
	int component_marks;
	int no_student;

public:


	//Marks(int SID, string Name, int CMarks):studentID(SID), name(Name), component_marks(CMarks){}

	virtual void SetDisplay()
	{
		float classwork;
		float miniproject;
		float examMarks;

		float totalmarks = 0;

		cout << "Please enter number of students: " << endl;
		cin >> no_student;
	
		for (int i = 1; i <= no_student; i++)
		{
			cout << "Please enter classwork: " << endl;
			cin >> classwork;
			cout << "Please enter miniproject: " << endl;
			cin >> miniproject;
			cout << "Please enter Exam marks: " << endl;
			cin >> examMarks;

			component_marks = ((0.2 * classwork) + (0.3 * miniproject) + (0.5 * examMarks));

			cout << "Student 00" << i << " mark is " << component_marks << "%" << endl;
			cout << endl;
			totalmarks = (totalmarks += component_marks);
		};		

		cout << "And the Total Average mark for this MODULE is: " << totalmarks / no_student << "%";
	}
};

class AI : public Marks
{
public:
	Marks marks;
	int average;
	int AIMarks;

	void SetDisplay()
	{
		cout << "The Marks for AI Module are: " << endl << endl;
		marks.SetDisplay();
	}
};
class MobileCommunicationEngineering : public Marks
{
public:
	Marks marks;
	void SetDisplay()
	{
		cout << "The Marks for MobileCommunicationEngineering Module are: " << endl<<endl;
		marks.SetDisplay();
	}
};
class IPTelephony : public Marks
{
public:
	Marks marks;
	void SetDisplay()
	{
		cout << "The Marks for IPTelephony Module are: " << endl;
		marks.SetDisplay();
	}
};


int main()
{
	//Marks* ShowMark = new Marks();
	//ShowMark->SetDisplay();

	AI* ai = new AI();
	ai->SetDisplay();

	cout << endl << endl;

	MobileCommunicationEngineering* Mce = new MobileCommunicationEngineering();
	Mce->SetDisplay();

	cout << endl << endl;

	IPTelephony* IPT = new IPTelephony();
	IPT->SetDisplay();

	//delete ShowMark;
	delete ai;
	delete Mce;
	delete IPT;	
}

