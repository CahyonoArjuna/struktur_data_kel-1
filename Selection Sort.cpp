#include <iostream>

using namespace std;

main()
{
	int i,a, masuk,data[50],simpan;
	
	cout<<"Masukkan Banyak Bilangan : ";
	cin>>masuk;
	for(i=0;i<masuk;i++)
	{
		cin>>data[i];
	}
	for(i=0;i<masuk;i++)
	
		for(a=0;a<masuk;a++)
		{
			if(data[i]>data[a])
			{
				simpan=data[i];
				data[i]=data[a];
				data[a]=simpan;
			}
		}
	cout<<"\n";
	cout<<"Hasil Pengurutan : ";
	for(i=0;i<masuk;i++)
	{
		cout<<data[i]<<"\t";
	}
}
