#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    int a[100][100];
    int num = 1, top=0, bottom=r-1, left=0, right=c-1;

    while(left<=right && top<=bottom) {
        for(int i=left;i<=right;i++) a[top][i]=num++;
        top++;
        for(int i=top;i<=bottom;i++) a[i][right]=num++;
        right--;
        for(int i=right;i>=left;i--) a[bottom][i]=num++;
        bottom--;
        for(int i=bottom;i>=top;i--) a[i][left]=num++;
        left++;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}