#include <iostream>
using namespace std;
void maxHeapify(int a[], int i, int n){
int j, temp;
temp=a[i];
j=2*i;
while(j<=n){
if(j<n && a[j+1]>a[j])
j=j+1;
if(temp>a[j])
break;
else if(temp<=a[j]){
a[j/2]=a[j];
j=2*j;
}
}
a[j/2]=temp;
return;
}
void build_maxheap(int a[], int n){
int i;
for(i=n/2 ; i>=1; i--){
maxHeapify(a,i,n);
}
}
void max_HeapSort(int a[], int n){
int i, temp;
for(i=n; i>=2; i--){
temp = a[i];
a[i] = a[1];
a[1] = temp;
maxHeapify(a, 1, i-1);
}
}
void print(int arr[], int n){
cout<<"\nsorted data: ";
for(int i=1; i<=n; i++){
cout<<"->"<<arr[i];
}
return;
}
int main()
{
int n, i, ch;
cout<<"Enter the number of elements to be sorted: " ;
cin>>n;
int arr[n];
for(i=1; i<=n; i++) {
cout<<"Enter element "<<i<<": ";
cin>>arr[i];
}
cout<<"Heap sort using max heap";
build_maxheap(arr, n);
max_HeapSort(arr, n);
print(arr, n);
return 0;
}
