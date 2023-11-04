  #include<iostream>
  using namespace std;

  void printarray(int arr[],int n)
  {
      cout<<"printing the array"<<endl;
    
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" "<<endl;
      }
    
      cout<<"Printing done"<<endl;
  }

  int main()
  {
      int n;
      cin>>n;
      int arr[15]={2,7};
      printarray(arr,n);
    
      return 0;
    
  }