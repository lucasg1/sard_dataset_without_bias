static char * VAR0;
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    printHexCharLine(data[0]);
}
void FUN1()
{
    char * data;
    data = "Good";
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR2;
    if (data != NULL)
    {
        printHexCharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    VAR2 = data;
    FUN2();
}
