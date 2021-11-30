#include "hw11-1-Position.h"

int main()
{
	const Position memphis(35.15, -90.05);
	memphis.display();
	const Position nowhere(memphis.getLongitude(), memphis.getLatitude());
	nowhere.display();
}