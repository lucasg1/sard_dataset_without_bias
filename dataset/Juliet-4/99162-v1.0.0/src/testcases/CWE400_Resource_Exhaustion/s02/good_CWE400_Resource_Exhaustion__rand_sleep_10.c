void FUN0()
{
    int count;
    count = -1;
    if(globalTrue)
    {
        count = RAND32();
    }
    if(globalFalse)
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
void FUN1()
{
    int count;
    count = -1;
    if(globalTrue)
    {
        count = RAND32();
    }
    if(globalTrue)
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
void FUN2()
{
    int count;
    count = -1;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(globalTrue)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN3()
{
    int count;
    count = -1;
    if(globalTrue)
    {
        count = 20;
    }
    if(globalTrue)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
