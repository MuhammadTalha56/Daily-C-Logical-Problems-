#include <iostream>
using namespace std;
int main (){
	int arr[]={17, 76 ,65 ,54 ,39 ,9} ,size= sizeof arr/sizeof arr[0] ,j=0,temp;
	for(int i=size-1;i>=size/2;i--){
		
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		j++;
	}
	for(int k =0;k<size;k++){
		cout<<arr[k]<<endl;
	}
	return 0;
}
