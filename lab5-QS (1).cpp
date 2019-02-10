
#include<iostream>
using namespace std;
//partition function
int partition(int arr[],int low,int high){
	int pivot=high;
	int j;
	while(low<pivot){
		if(arr[low]>arr[pivot]){
			j=arr[low];
			arr[low]=arr[pivot-1];
			arr[pivot-1]=arr[pivot];
			arr[pivot]=j;
			pivot=pivot-1;
			}
			else{
				low++;}
	}
			return pivot;
			
}
//sorting the either side of the pivot
void QS(int arr[],int low,int high){
	if(low>=high)return;
	else{
		int k=partition(arr,low,high);
		QS(arr,low,k-1);
		QS(arr,k+1,high);
	}
}
/*int display(int arr[]){
	int n;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}*/
//main function
int main(){
	int n;int i;
	int arr[10];
	cout<<"enter the limit of the array"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];}
		cout<<endl;
	partition(arr,0,n-1);
	cout<<"printing after partition"<<endl;
	for(i=0;i<n;i++){
	cout<<arr[i];}
	cout<<endl;
	QS(arr,0,n-1);
	cout<<"printing the ordered array "<<endl;
	for(i=0;i<n;i++){
	cout<<arr[i];}
	cout<<endl;
	return 0;
}
			
			










		

