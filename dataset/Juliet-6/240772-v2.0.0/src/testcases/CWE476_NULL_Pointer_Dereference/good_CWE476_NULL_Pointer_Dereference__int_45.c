static int * VAR0;
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR1;
    printIntLine(*data);
}
void FUN1()
{
    int * data;
    int tmpData = 5;
    {
        data = &tmpData;
    }
    VAR1 = data;
    FUN0();
}
void FUN2()
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
void FUN3()
{
    int * data;
    data = NULL;
    VAR2 = data;
    FUN2();
}
