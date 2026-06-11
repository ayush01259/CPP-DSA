    #include<iostream>
    using namespace std;

void funcInt(){
    int *ptr = new int;
    *ptr =5;

    cout<<*ptr;

    delete ptr;
}
void func(){
    // int arr[100] = {1,2,3,4,5};
    // for(int i = 0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }
    // return ;
     int size;
    cin >> size;

    int  *ptr = new  int[size];
    int x = 1;
    for(int i =0; i<size; i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }
    cout<<endl;

    delete [] ptr; // would free the space

}

    int main(){

        funcInt();
        
       

        return 0;
    }