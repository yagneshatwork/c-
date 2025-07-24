#include <iostream>
using namespace std;

class rainfall_data
{
	int rainfall[3][3];
	
public:
	void input()
	{
		cout<<"--- Input the rainfall in the cities ---\n\n";
		for(int i=0;i<3;i++)  //input
        {
			
		    cout<<"city"<<i+1<<":\n";
		    for(int j=0;j<3;j++)
		    {
			    cout<<"day"<<j+1<<":";
			    cin>>rainfall[i][j];
		    }
		    cout<<"\n";
	    }
	}
	void display()
	{
		cout<<"      ";  //top row
        for(int i=0;i<3;i++)
        {
		    cout<<"|"<<"day"<<i+1<<"\t|";
	    }
	    cout<<"|average|";
	    cout<<"\n";
		
        int a;
        float avg;
        for(int i=0;i<3;i++) //display
        {
	    	a=0;
	  	    cout<<"city"<<i+1<<":";
		    for(int j=0;j<3;j++)
		    {
				cout<<"|"<<rainfall[i][j]<<"\t|";
		        a=a+rainfall[i][j];
		    }
			    avg=a/3;
		    	cout<<"|"<<avg<<"\t|";
		        cout<<"\n";
	    }
	}
};

int main()
{
	rainfall_data data;
	data.input();
	data.display();
	return 0;
}
