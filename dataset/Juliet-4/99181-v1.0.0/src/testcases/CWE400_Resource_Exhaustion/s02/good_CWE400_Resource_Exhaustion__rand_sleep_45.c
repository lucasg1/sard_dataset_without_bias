static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int count = VAR1;
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN1()
{
    int count;
    count = -1;
    count = 20;
    VAR1 = count;
    FUN0();
}
void FUN2()
{
    int count = VAR2;
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
void FUN3()
{
    int count;
    count = -1;
    count = RAND32();
    VAR2 = count;
    FUN2();
}
