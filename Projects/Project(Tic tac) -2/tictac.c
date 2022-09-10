#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void printmatrix(int[][3]);
int winningcols(int[][3]);
int winningrows(int[][3]);
int winningrd(int[][3]);
int winningld(int[][3]);
int winningsituation(int[][3]);
int itemavailable(int[][3], int);
int computer(int[][3], int);
void computerprintmatrix(int[][3]);
void computergame();
void Playergame();
void evilcomputergame();
int main()
{
    
    while (1)
    {
        int x = 0;
        printf("                    Enter your choice \n");
        printf("            1. Want to Play with smart Computer\n");
        printf("             2. Want to Play with Evil Computer\n");
        printf("               3. Want to Play with Player\n");
        printf("                 4. Exit\n");
       

        scanf("%d", &x);
        system("cls");
        if (x == 1)
        {
            computergame();
        }
        else if (x == 2)
        {
            evilcomputergame();
        }
        else if (x == 3)
        {
            Playergame();
        }

        if (x == 4)
        {
            printf("Thanks for Playing game \n");
            break;
        }
    }
   
}
void computergame()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, h = 0;
    int x = 0, win, winner = 0;
    while (x < 9)
    {
        // first take input user
        computerprintmatrix(arr);

        int item, flag = 0;
        if (x % 2 == 0)
        {

            printf("Player 1, Enter the position");
            scanf("%d", &item);

            flag = itemavailable(arr, item);
            if (flag == 1)
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {

                        if (item == arr[i][j])
                        {
                            arr[i][j] = 0;
                        }
                    }
                }
                x++;
            }
        }
        else
        {

            printf("Player 2, Computer turn ");
            computer(arr, x);
            x++;
        }

        // first take input end here

        win = winningsituation(arr);
        system("cls");
        if (win == 3)
        {
            winner = 3;
            break;
        }
        else if (win == 2)
        {
            winner = 2;
            break;
        }
    }

    if (winner == 3)
    {
        computerprintmatrix(arr);
        printf(" --------- Player  won ---------\n");
    }
    else if (winner == 2)
    {
        computerprintmatrix(arr);
        printf("---------- Computer won -----------\n");
    }
    if (x > 8)
    {
        computerprintmatrix(arr);
        printf("------------------   Match draw ------------------\n\n");
    }
}
int itemavailable(int arr[][3], int item)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (item == arr[i][j])
            {
                if (arr[i][j] != 88 || arr[i][j] != 0)
                {
                    return 1;
                }
            }
        }
    }

    return 0;
}
int winningsituation(int arr[][3])
{
    int winr, winc, winrd, winld;

    winr = winningrows(arr);
    winc = winningcols(arr);
    winrd = winningrd(arr);
    winld = winningld(arr);
    if (winr == 3 || winc == 3 || winrd == 3 || winld == 3)
    {

        return 3;
    }
    else if (winr == 2 || winc == 2 || winrd == 2 || winld == 2)
    {

        return 2;
    }

    return -1;
}
void printmatrix(int a[][3])
{
    int i, j;
    printf("\n--------------  FIRST PLAYER 0 ---------------\n");
    printf("\n--------------  SECOND PLAYER X ------------\n");
    printf("\n");
    // printf("\n              -----------------");
    for (i = 0; i < 3; i++)
    {
        printf("\n             ");
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 88)
            {
                if (j < 2)
                    printf("  %c  |", a[i][j]);
                else
                    printf("  %c   ", a[i][j]);
            }
            else
            {
                if (j < 2)
                    printf("  %d  |", a[i][j]);
                else
                    printf("  %d   ", a[i][j]);
            }
        }
        if (i < 2)
            printf("\n              ---------------");
        else
            printf("\n");
    }
    printf("\n");
}
int winningrows(int a[][3])
{
    int i = 0, j, sec = 0, zero = 0;
    while (i < 3)
    {
        sec = 0, zero = 0;
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 'X')
            {
                sec++;
            }
            else if (a[i][j] == 0)
                zero++;
        }
        if (sec == 3)
            break;
        else if (zero == 3)
            break;
        i++;
    }
    if (zero == 3)
    {
        return 3;
    }
    else if (sec == 3)
    {
        return 2;
    }
}
int winningcols(int a[][3])
{
    int sec = 0, zero = 0, j = 0, i, rep = 0;
    while (j < 3)
    {
        sec = 0, zero = 0;
        for (i = 0; i < 3; i++)
        {

            if (a[i][j] == 'X')
            {
                sec++;
            }
            else if (a[i][j] == 0)
            {
                zero++;
            }
        }
        if (zero == 3 || sec == 3)
        {
            break;
        }
        j++;
    }

    if (zero == 3)
        return 3;
    else if (sec == 3)
        return 2;
}
int winningrd(int a[][3])
{
    int i, j = 0, sec = 0, zero = 0;
    for (i = 0; i < 3; i++)
    {
        if (a[i][j] == 'X')
            sec++;
        else if (a[i][j] == 0)
            zero++;
        j++;
    }
    if (zero == 3)
        return 3;
    else if (sec == 3)
        return 2;
}
int winningld(int a[][3])
{
    int i, j = 2, sec = 0, zero = 0;
    for (i = 0; i < 3; i++)
    {
        if (a[i][j] == 'X')
            sec++;
        else if (a[i][j] == 0)
            zero++;
        j--;
    }
    if (zero == 3)
        return 3;
    else if (sec == 3)
        return 2;
}
int computer(int arr[][3], int x)
{

    int ld = 2, lda = 2;
    int r, c;
    int i, j;
    // for x

    int count = 0, k;
    if (x == 8)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (arr[i][j] != 0 && arr[i][j] != 88)
                {
                    arr[i][j] = 88;
                    return 10;
                }
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 88)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (k = 0; k < 3; k++)
            {
                if (arr[i][k] != 0 && arr[i][k] != 88)
                {
                    arr[i][k] = 88;
                    return 0;
                }
            }
        }
    }

    // for row
    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[j][i] == 88)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (k = 0; k < 3; k++)
            {
                if (arr[k][i] != 0 && arr[k][i] != 88)
                {
                    arr[k][i] = 88;
                    return 0;
                }
            }
        }
    }

    // for diagonalrd

    count = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 88 && i == j)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (r = 0; r < 3; r++)
            {
                for (c = 0; c < 3; c++)
                {
                    if (arr[r][c] != 0 && arr[r][c] != 88 && r == c)
                    {
                        arr[r][c] = 88;
                        return 0;
                    }
                }
            }
        }
    }

    // for diagonalld

    count = 0;
    for (i = 0; i < 3; i++)
    {

        if (arr[i][ld] == 88)
        {

            count++;
            // printf("cont %d", count);
        }
        ld--;

        if (count == 2)
        {
            for (r = 0; r < 3; r++)
            {
                if (arr[r][lda] != 0 && arr[r][lda] != 88)
                {
                    arr[r][lda] = 88;
                    return 0;
                }
                lda--;
            }
        }
    }

    // for zeros

    if (x == 1)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (arr[i][j] != 0)
                {
                    arr[i][j] = 88;
                    return 0;
                }
            }
        }
    }

    // for colm

    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (k = 0; k < 3; k++)
            {
                if (arr[i][k] != 0 && arr[i][k] != 88)
                {
                    arr[i][k] = 88;
                    return 0;
                }
            }
        }
    }

    // for row
    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[j][i] == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (k = 0; k < 3; k++)
            {
                if (arr[k][i] != 0 && arr[k][i] != 88)
                {
                    arr[k][i] = 88;
                    return 0;
                }
            }
        }
    }

    // for diagonalrd

    count = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0 && i == j)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (r = 0; r < 3; r++)
            {
                for (c = 0; c < 3; c++)
                {
                    if (arr[r][c] != 0 && arr[r][c] != 88 && r == c)
                    {
                        arr[r][c] = 88;
                        return 0;
                    }
                }
            }
        }
    }

    // for diagonalld
    count = 0;
    ld = 2, lda = 2;
    for (i = 0; i < 3; i++)
    {

        if (arr[i][ld] == 0)
        {

            count++;
            printf("cont %d", count);
        }
        ld--;

        if (count == 2)
        {
            for (r = 0; r < 3; r++)
            {
                if (arr[r][lda] != 0 && arr[r][lda] != 88)
                {
                    arr[r][lda] = 88;
                    return 0;
                }
                lda--;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] != 0 && arr[i][j] != 88)
            {
                arr[i][j] = 88;
                return 0;
            }
        }
    }
}
int evilcomputer(int arr[][3])
{
    int i, j;
    int count, k;
    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (k = 0; k < 3; k++)
            {
                if (arr[i][k] != 0 && arr[i][k] != 88)
                {
                    return 1;
                }
            }
        }
    }

    // for row
    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[j][i] == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (k = 0; k < 3; k++)
            {
                if (arr[k][i] != 0 && arr[k][i] != 88)
                {

                    return 1;
                }
            }
        }
    }

    // for diagonalrd

    int r, c;
    count = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0 && i == j)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (r = 0; r < 3; r++)
            {
                for (c = 0; c < 3; c++)
                {
                    if (arr[r][c] != 0 && arr[r][c] != 88 && r == c)
                    {

                        return 1;
                    }
                }
            }
        }
    }

    // for diagonalld
    count = 0;
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0 && j==3-i-1)
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (r = 0; r < 3; r++)
            {
                for (c = 0; c < 3; c++)
                {
                    if (arr[r][c] != 0 && arr[r][c] != 88 && c == 3-r-1)
                    {
                        return 1;
                    }
                }
            }
        }
    }
   
    return 0;
}
void computerprintmatrix(int a[][3])
{
    int i, j;
    printf("\n--------------  FIRST PLAYER 0 ---------------\n");
    printf("\n--------------  COMPUTER PLAYER X ------------\n");
    printf("\n");
    // printf("\n              -----------------");
    for (i = 0; i < 3; i++)
    {
        printf("\n             ");
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 88)
            {
                if (j < 2)
                    printf("  %c  |", a[i][j]);
                else
                    printf("  %c   ", a[i][j]);
            }
            else
            {
                if (j < 2)
                    printf("  %d  |", a[i][j]);
                else
                    printf("  %d   ", a[i][j]);
            }
        }
        if (i < 2)
            printf("\n              ---------------");
        else
            printf("\n");
    }
    printf("\n");
}
void evilcomputergame()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, h = 1;
    int x = 0, win, turn = 1, winner = 0;
    while (x < 9)
    {
   

        // first take input user
        computerprintmatrix(arr);
        int item, flag = 0;
        if (turn == 1)
        {

            printf("Player 1, Enter the position");
            scanf("%d", &item);
            flag = itemavailable(arr, item);
            if (flag == 1)
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {

                        if (item == arr[i][j])
                        {
                            arr[i][j] = 0;
                        }
                    }
                }

                turn = 0;
                x++;
            }
        }
        else
        {
            printf("Player 2, Evil Computer turn ");
            computer(arr, x);
            turn = 1;
            x++;
            if (evilcomputer(arr) == 1 && h)
            {   
                turn = 0;
                h = 0;
            }
        }

        // first take input end here

        system("cls");

        win = winningsituation(arr);
        if (win == 3)
        {
            winner = 3;
            break;
        }
        else if (win == 2)
        {
            winner = 2;
            break;
        }
    }

    if (winner == 3)
    {
          computerprintmatrix(arr);
        printf(" ------------------Player  won ------------------\n\n");
    }
    else if (winner == 2)
    {
        computerprintmatrix(arr);
        printf(" ------------------Evil Computer won ------------------\n\n");
    }
    else if (x > 8)
    {
        computerprintmatrix(arr);
        printf(" ------------------Match draw ------------------\n\n");
    }
}
void Playergame()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
  
    int x = 0, k = 0, win,winner;
    while (x < 9)
    {
        // first take input user
        printmatrix(arr);
        int item, flag = 0;
        if (x % 2 == 0)
        {
            printf("Player 1, Enter the position");
            scanf("%d", &item);
        }
        else if (x % 2 != 0)
        {
            printf("Player 2, Enter the position");
            scanf("%d", &item);
        }

        flag = itemavailable(arr, item);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {

                if (item == arr[i][j] && k == 1)
                {
                    arr[i][j] = 88;
                    k = 0;
                }
                else if (item == arr[i][j])
                {
                    arr[i][j] = 0;
                    k = 1;
                }
            }
        }
        // first take input end here

        system("cls");
        win = winningsituation(arr);
        if (win == 3)
        {
           winner = 3;
            break;
        }
        else if (win == 2)
        {
            winner = 2;
            break;
        }

        if (flag == 1)
            x++;
    }

    if (winner == 3)
    {
        printmatrix(arr);
        printf(" ------------------first Player  won ------------------\n\n");
    }
    else if (winner == 2)
    {
        printmatrix(arr);
        printf(" ------------------Second Player won ------------------\n\n");
    }
    else if (x > 8)
    {
        printmatrix(arr);
        printf(" ------------------Match draw ------------------\n\n");
    }
}
