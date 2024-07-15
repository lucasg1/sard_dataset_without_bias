int * VAR0;
int * VAR1;
int * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    int * data;
    {
        int tmpData = 5;
        data = &tmpData;
    }
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    int * data;
    data = NULL;
    VAR2 = data;
    FUN1();
}
extern int * VAR0;
extern int * VAR1;
extern int * VAR2;
void FUN0()
{
    int * data = VAR1;
    printIntLine(*data);
}
void FUN1()
{
    int * data = VAR2;
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
