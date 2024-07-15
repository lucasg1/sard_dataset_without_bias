static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int count;
    count = -1;
    if(FUN0())
    {
        count = RAND32();
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN3()
{
    int count;
    count = -1;
    if(FUN0())
    {
        count = RAND32();
    }
    if(FUN0())
    {
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
}
void FUN4()
{
    int count;
    count = -1;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(FUN0())
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN5()
{
    int count;
    count = -1;
    if(FUN0())
    {
        count = 20;
    }
    if(FUN0())
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
