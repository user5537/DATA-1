#include <iostream>
#define TESTS
#include <cstring>
using namespace std;

bool przestepny(int rok)
{
   return ((rok %4 == 0) && (rok %100 != 0)) || (rok %400 == 0);
}


bool data(int dzien,int miesioc, int rok)
{

int d;
przestepny(rok)?d=1:d=2;
if (d==1)
    {
        if
                        (miesioc>12 || (((miesioc == 1||3||5||7||8||10||12) && (dzien > 31)) ||

                         ((miesioc == 2) && (dzien > 30)) ||

                         ((miesioc == 4) && (dzien > 30)) ||

                         ((miesioc == 6) && (dzien > 30)) ||

                         ((miesioc == 9) && (dzien > 30)) ||

                          ((miesioc == 11) && (dzien > 30))  ))


                             return false;





else return true;
}

if (d==2)
    {
        if
                        (miesioc>12 || (((miesioc == 1||3||5||7||8||10||12) && (dzien > 31)) ||

                         ((miesioc == 2) && (dzien > 29)) ||

                         ((miesioc == 4) && (dzien > 30)) ||

                         ((miesioc == 6) && (dzien > 30)) ||

                         ((miesioc == 9) && (dzien > 30)) ||

                         ((miesioc == 11) && (dzien > 30))  ))


                             return false;
}
}
#define TEST(dzien, miesioc, rok)
void testdaty()
{
    if (data(3,3,20) ==false) cout<<"error 1A"<<endl;
    if (data(29,2,2012) ==false) cout<<"error 1B"<<endl;
    if (data(1,8,2014) ==false) cout<<"error 1C"<<endl;
    if (data(31,8,2014) ==false) cout<<"error 1D"<<endl;
    if (data(24,8,2014) ==false) cout<<"error 1E"<<endl;
    if (data(24,8,2014) ==false) cout<<"error 1"<<endl;
    if (data(29,2,2014) !=false) cout<<"error 2"<<endl;
    if (data(32,8,2014) !=false) cout<<"error 3"<<endl;
    if (data(24,13,2014) !=false) cout<<"error 4"<<endl;
}

#undef TEST

int main()
{
#ifdef TEST

testdaty();


#else

int dzien, miesioc, rok;

cin >> dzien;
cin >> miesioc;
cin >> rok;


data(dzien, miesioc, rok)?cout<<"poprawna data":cout<<"niepoprawna data"<<endl;





#endif
    return 0;
}
