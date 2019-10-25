#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

//функция получения индекса максимального элемента
int get_index_of_max_array_value(vector<int> your_array)
{
	
	srand(time(0));
// заполнение массива случайными числами
	cout<<"Your array with random elements:";
	
	for (int i=0;i<your_array.size();i++)
	{
		your_array.at(i)=(rand() % 200);
			cout<<your_array[i]<<" ";
	}
	
	cout<<endl;cout<<endl;	
//______________________________________________	
		
	int max_value=your_array[0];	
	int index_of_max_value=0;
	
//определение индекса максимального элемента массива
	for(int i=0;i<your_array.size();i++)
	{
		if(your_array[i]>=max_value)
		{
			max_value=your_array[i];
			index_of_max_value=i;
			
		}
	
	}	
	return index_of_max_value;
}


int main(){
	//результат
	vector <int> test_array(10);	
		cout<<"Index of the biggest value:"<<get_index_of_max_array_value(test_array);	
	return 0;
}
