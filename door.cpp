#include<istream>
using namespace std;

class Door{
private:
	bool isOpen;
	bool isClose;
public:
 	Door();
	void openDoor();
	void closeDoor();
	void lockDoor()
	{
		cout<<"Door is locked\n"<<endl;
	}
	void unlockDoor();
	bool isDoorOpen()const;
	bool isDoorClose()const;
};


int main()
{
	

	return 0;
}