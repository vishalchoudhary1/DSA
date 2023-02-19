#include <iostream>
using namespace std;
int main()
{

    //! C O D E 1:
    // int i=0;
    // i=i+1;
    // cout<<i;
    // i=i+1;
    // cout<<++i;

    //! C O D E 2:
    // short i=2300, j=4322;
    // cout<<"i+j="<<(i+j);

    //! C O D E 3:
    // float l, b;
    // float P = 2*(l+b);
    // printf("Perimeter=%f", P);

    //! C O D E 4:
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //! C O D E 5:
    // int n;
    // cin >> n;
    // bool isPrime = true;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime)
    // {
    //     cout << "Prime" << endl;
    // }
    // else
    // {
    //     cout << "Not Prime" << endl;
    // }

    //! C O D E 6:
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=j+1;j<=n;j++){
            if(j==i+1 || j == n - i - 1 || i == 0){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}