#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4};
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;

    vec.push_back(5);
    cout<<"New capacity : "<<vec.capacity()<<endl;
    cout<<"New size : "<<vec.size()<<endl;

    vec.push_back(6);
    cout<<"new capacity : "<<vec.capacity()<<endl;

     vec.push_back(7);
    cout<<"new capacity : "<<vec.capacity()<<endl;

     vec.push_back(8);
    cout<<"new capacity : "<<vec.capacity()<<endl;

     vec.push_back(9);
    cout<<"new capacity : "<<vec.capacity()<<endl;

    vec.pop_back();
    cout<<"Size = "<<vec.size()<<endl;
    return 0;
}
// capacity me phle 4 thaa phir 5 push kie toh 4 double hogya then capacity 8 ho gya to 8 tk bharne tk capacity 8 hoga phir jaise hi 9 push krnge to 8 double hoga aur capacity 16 ho jyega aur jb 17 push krnge to capacity 32 ho jyega

// if we know the element then phle se size initialize krna better hoga rather than ki push kre push krne me time complexity bdhti h


// delete krne me capacity nhi decrese hoga wo same hi rhega