void FUN0()
{
    int count;
    count = -1;
    if(1)
    {
        fscanf(stdin, "%d", &count);
    }
    if(0)
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
    if(1)
    {
        fscanf(stdin, "%d", &count);
    }
    if(1)
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
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(1)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN3()
{
    int count;
    count = -1;
    if(1)
    {
        count = 20;
    }
    if(1)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
