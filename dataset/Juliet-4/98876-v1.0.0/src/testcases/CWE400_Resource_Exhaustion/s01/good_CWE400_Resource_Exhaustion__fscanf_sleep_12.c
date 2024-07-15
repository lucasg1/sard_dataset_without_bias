void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrueOrFalse())
    {
        fscanf(stdin, "%d", &count);
    }
    else
    {
        fscanf(stdin, "%d", &count);
    }
    if(globalReturnsTrueOrFalse())
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
    if(globalReturnsTrueOrFalse())
    {
        count = 20;
    }
    else
    {
        count = 20;
    }
    if(globalReturnsTrueOrFalse())
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
    else
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
