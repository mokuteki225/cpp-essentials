    //статья http://cppstudio.com/post/423/
    #include <bits/stdc++.h>

    using namespace std;

    bool equalC(int a, int b, int c)
    {
        return (a + b == c ? true : false);
    }

    int main()
    {
        int var = 123;

        int *ptrvar = &var;
        int **ptr_ptrvar = &ptrvar;
        int ***ptr_ptr_ptrvar = &ptr_ptrvar;

        cout << *ptrvar << " " << **ptr_ptrvar << " " << ***ptr_ptr_ptrvar << '\n';
        //http://cppstudio.com/wp-content/images/article/image28.4.png
        cout << &ptr_ptr_ptrvar << " " << &ptr_ptrvar << " " << &ptrvar << '\n';
        cout << &var << " " << var << '\n';

        for(int i = 0; i < 3; i++)
            cout << '\n';

        bool (*ptrfunc)(int, int, int);
        ptrfunc = equalC;

        int a, b, c; cin >> a >> b >> c;

        cout << (ptrfunc(a, b, c) ? "Yes" : "No") << '\n';

        return 0;
    }
