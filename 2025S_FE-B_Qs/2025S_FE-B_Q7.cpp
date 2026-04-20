#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int low, int high){
	int mid;
	if(low>>high){
		return -1;
	}
	mid = ((low+high)/2);
	
	if(arr[mid-1]> target){
		cout<<"function recalled"<<endl;
		return binarySearch(arr, target, low, mid-1);
	}
	else if(arr[mid]<target){
		cout<<"function recalled"<<endl;
		return binarySearch(arr, target, mid+1, high);
	}
    else{
    	return mid;
	}
}

int main(){
	int arr[6] = {1,2,3,4,5,6};
  
	// output က 5 ဆိုတာထက် ဒီမေးခွန်းအရ function call ဘယ်နကြိမ်ဖြစ်ခဲ့သလဲ ‌မေးတာက သတိထား စေချင်ပါတယ်။ 
	cout<<binarySearch(arr, 5, 1, 6);
	return 0;
}
