#include"iostream"
#include"string"
using namespace std;
class person
{
public:
	person();
	person(string nam, int ag, char se) :person(nam,ag,se)
	{
		name = nam;
		age = ag;
		sex = se;
	}
	string name;
	int age;
	~person(){}
	void display()
	{
		cout << "��������һ����Ϊ" << name << "��" << age << "��" << sex << "������" << endl;
	}
protected:
	char sex;
};

class student :public person
{
public:
	student(int n, string nam, int ag, char se, string sch) :student(n,sch)
	{
		num = n;
		school = sch;
	}
	~student(){}
	void display()
	{
		cout << "Ȼ������һ����Ϊ" << name << "����" << school << "ѧУ��" << age << "��" << sex << "ѧ��Ϊ"<<num<<"��ѧ��" << endl;
	}
private:
	int num;
	string school;
};

int main()
{
	person S("WZD", 20, "N");
	S.display();
	student T(5, "BOB", 20, "N", "DLCY");
	T.display();

}