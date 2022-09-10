#include<iostream>
#include<deque>
using namespace std;
int firstCircularTour(int petrol[],int distance[],int noOfPetrolStations,int noOfDistance)
{	
	int tank=0;
	int temp;

	for( int j=0;j<noOfPetrolStations;j++)
	{	for(int i=j;(i<j||i<noOfPetrolStations);i++)
		{	
			int alias=i;
			if(i==noOfPetrolStations-1&&j!=0){i=-1;}
			tank=tank+petrol[alias];
			if(tank>=distance[alias])

			{	
				temp=1;
				tank=tank-distance[alias];
			}
			else
			{	
				temp=0;
				tank=0;
				break;
			}
		}
		if(temp==1){return j+1;}
	}
	return -1;

}
int main()
{
	int petrol[]={4,8};
	int distance[]={5,6};
	cout<<firstCircularTour(petrol,distance,2,2);
}