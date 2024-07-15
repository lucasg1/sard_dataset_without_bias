long * VAR0;
long * VAR1;
long * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    long * data;
    {
        long tmpData = 5L;
        data = &tmpData;
    }
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    long * data;
    data = NULL;
    VAR2 = data;
    FUN1();
}
extern long * VAR0;
extern long * VAR1;
extern long * VAR2;
void FUN0()
{
    long * data = VAR1;
    printLongLine(*data);
}
void FUN1()
{
    long * data = VAR2;
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
