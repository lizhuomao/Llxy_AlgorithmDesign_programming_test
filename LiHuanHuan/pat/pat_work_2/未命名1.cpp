#include <stdio.h>
#include <iostream>

using namespace std;
int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char z[11] = {'1','0','X','9','8','7','6','5','4','3','2'};

int main(){
    int n;
    cin >> n;
    
    int cnt = 0;
    char credit[20];
    char check;
    int sum=0;
    bool error = false;
    for (int i = 0; i < n; ++i) {
        scanf("%17s%c",credit,&check);

        // 校验
        sum = 0;
        error = false;
        for (int j = 0; j < 17; ++j) {
            char ch = credit[j];
            if (ch >= '0' && ch <= '9') {
                ch = ch - '0';
                sum += ch * weight[j];

            }else{
                error = true;
                break;
            }
        }
        sum = sum % 11;

        // 输出不合法号码
        if (z[sum] != check || error == true){
            printf("%s%c\n",credit,check);
            ++cnt;
        }
        
        
    }
    if (cnt == 0) {
        cout << "All passed" << endl;
    }
    return 0;
}
