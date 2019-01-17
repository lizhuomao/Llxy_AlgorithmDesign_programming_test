#include <iostream>
#include <string>
#include <vector>
using namespace std;


string data1[13]= {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string data2[12]= {"tam", "hel","maa", "huh","tou", "kes","hei", "elo", "syy", "lok","mer", "jou"};
int main(void)
{
  int N;
  cin >> N;
  getchar();
  for (int k = 0; k < N; k++)
  {
    string str;
        
    getline(cin, str);
    int sum = 0, temp;
    if(isdigit(str[0])) {
			int a=stoi(str);
			if((temp=a/13)>0) {
				cout<<data2[temp-1];
				if(a%13==0) 	{
					cout<<endl;
					continue;
				} else cout<<" ";
			}
			temp=a%13;
			cout<<data1[temp]<<endl;
		} 
    else
    {
      //cout << "str = " << str;
      if(str.size()>3) 	{
				string s1=str.substr(0,3);
				str=str.substr(4,3);
				for(int i=0; i<=12; i++) {
					if(data2[i]==s1) {
						sum+=13*(i+1);
						break;
					}
				}
			}
      //cout << "str = " << str;
			for(int i=0; i<13; i++) {
				if(data1[i]==str) {
					sum+=i;
					break;
				} else if(data2[i]==str && i < 12) {
          //cout << "debug" << data2[i] << i;
					sum+=13*(i+1);
					break;
				}
			}
			cout<<sum<<endl;
    }
//       {
//           //cout << "debug";
//           int j;
//           int num_1 = 0;
//          for (j = 0; j < 13; j++)
//          {
//             if (str == data1[j])
//             { 
//             num_1 = j;
//             break;
//             }
//          }
//          //cout << "j = "<< j;
//          if (j == 13)
//          {
//              for (int k = 0; k < 12; k++)
//             {
//                 if (str == data2[k])
//                 { 
//                 num_1 = k + 13;
//                 break;
//                 }
//             }
//          }
//         cout << num_1 << endl;
// //        cout << "debug1" << i; 
//         continue;
//       }
//     else
//       {
        
//         string temp1, temp2;
//         int num = 0;

//         temp1 = str.substr(0, 3);
//         temp2 = str.substr(4, 3);
//     // cout << "str = " << str << "temp1 = " << temp1 << "temp2 = " << temp2 << endl;
//       for (int j = 0; j < 13; j++)
//       {
//         if (temp1 == data2[j]) 
//         {
//           num += (j + 1) * 13;
//         }
//         if (temp2 == data1[j])
//         {
//           num += j;
//         }
//       }
//       //cout << "debug2";
//       cout << num << endl;
//       }
//     }
  }
  system("pause");
  return 0;
}