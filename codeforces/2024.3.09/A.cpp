#include <iostream>
using namespace std;
int main(){
    int n;
    //yonglishu
    long long a[4];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[0]>>a[1]>>a[2]>>a[3];//shu ru shi ge ren
        int it = 3;//it
        int ct=0;//count
        while(it){
            if(a[it]>a[0])
                ct++;//

            it--;//3to 0
        }
        printf("%d\n",ct);

    }

    return 0;
}