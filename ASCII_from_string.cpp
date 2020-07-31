#include <iostream>
#include <string>
using namespace std;



int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);

    char** array = new char* [H];
    for (int i = 0; i < H; i++)
    {
        array[i] = new char[L];
    }

    for (int i = 0; i < T.size(); i++)
    {
        if (T[i] == 'E' || T[i] == 'e')
        {
            int mid = H / 2;
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    if (j == L - 1)
                    {
                        array[i][j] = ' ';
                    }
                    else if (i == 0)
                    {
                        array[i][j] = '#';
                    }
                    else if (j == 0)
                    {
                        array[i][j] = '#';
                    }

                    else if (i == H - 1)
                    {
                        array[i][j] = '#';
                    }
                    else if (i == mid && j != L - 2)
                    {
                        array[i][j] = '#';
                    }
                    else if (i == mid && j == L - 2)
                    {
                        array[i][j] = ' ';
                    }
                    else
                        array[i][j] = ' ';
                }

            }

            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    cout << array[i][j];
                }
                cout << endl;
            }
        }
        else if (T[i] == 'A' || T[i] == 'a')
        {
            int midH = H / 2;
            int midL = (L - 1) / 2;
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    if (j == L - 1)
                    {
                        array[i][j] = ' ';
                    }
                    else if (i == 0 && j == L - 2)
                    {
                        array[i][j] = ' ';
                    }
                    else if (i == 0 && j == 0)
                    {
                        array[i][j] = ' ';
                    }
                    else if (i != 0 && j == 0)
                    {
                        array[i][j] = '#';
                    }
                    else if (i == 0 && j != 0)
                    {
                        array[i][j] = '#';
                    }

                    else if (i != 0 && j == L - 2)
                    {
                        array[i][j] = '#';
                    }
                    else if (i == 0 && j == midL)
                    {
                        array[i][j] = '#';
                    }
                    else if (i == midH && j != L - 1)
                    {
                        array[i][j] = '#';
                    }
                    else
                    {
                        array[i][j] = ' ';
                    }
                }

            }

            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    cout << array[i][j];
                }
                cout << endl;
            }

        }
        else if (T[i] == 'O' || T[i] == 'o')
        {
            int midH = H / 2;

            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    if (j == L - 1)
                    {
                        array[i][j] = ' ';
                    }
                    else if (i == 0)
                    {
                        array[i][j] = '#';
                    }
                    else if (i == H - 1)
                    {
                        array[i][j] = '#';
                    }
                    else if (j == L - 2)
                    {
                        array[i][j] = '#';
                    }
                    else if (j == 0)
                    {
                        array[i][j] = '#';
                    }

                    else
                    {
                        array[i][j] = ' ';
                    }
                }


            }


            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    cout << array[i][j];
                }
                cout << endl;
            }

        }
        else if (T[i] == 'L' || T[i] == 'l')
        {


            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    if (j == L - 1)
                    {
                        array[i][j] = ' ';
                    }
                    else if (j == 0)
                    {
                        array[i][j] = '#';
                    }

                    else if (i == H - 1)
                    {
                        array[i][j] = '#';
                    }

                    else
                    {
                        array[i][j] = ' ';
                    }
                }


            }


            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    cout << array[i][j];
                }
                cout << endl;
            }

        }

        else if (T[i] == 'H' || T[i] == 'h')
        {
            int midH = H / 2;
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    if (j == L - 1)
                    {
                        array[i][j] = ' ';
                    }
                    else if (j == L - 2)
                    {
                        array[i][j] = '#';
                    }
                    else if (j == 0)
                    {
                        array[i][j] = '#';
                    }

                    else if (i == midH && j != L - 1)
                    {
                        array[i][j] = '#';
                    }
                    else
                    {
                        array[i][j] = ' ';
                    }
                }


            }


            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < L; j++)
                {
                    cout << array[i][j];
                }
                cout << endl;
            }

        }



        else
        {
            cout << "Work for other letters is in progress" << endl;
        }

    }



    for (int i = 0; i < H; i++)
    {
        delete[]array[i];
    }
    delete[]array;
    return 0;




}