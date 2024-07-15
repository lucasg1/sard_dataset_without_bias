void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        count = RAND32();
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        count = RAND32();
    }
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(globalReturnsTrue())
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN3()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        count = 20;
    }
    if(globalReturnsTrue())
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
