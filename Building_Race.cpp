#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        double a, b, x, y;
        cin >> a >> b >> x>> y;
        double chef = a / b;
        double chefina = x / y;
        if (chef == chefina)
        {
            cout << "Both\n";
        }
        else if (chef < chefina)
        {
            cout << "Chef\n";
        }
        else
        {
            cout << "Chefina\n";
        }
        // double chef = (double)a / x ;
        // if (== (double)b / y)
        //     cout << "Both\n";
        // else if ((double)a / x < (double)b / y)
        //     cout << "Chef\n";
        // else
        //     cout << "Chefina\n";
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
	
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,x,b,y;
// 	    cin>>a>>x>>b>>y;
// 	    if((double)a/x==(double)b/y)cout <<"Both\n";
// 	    else if((double)a/x<(double)b/y)cout<<"Chef\n";
// 	    else cout <<"Chefina\n";
	  
// 	}

// }
