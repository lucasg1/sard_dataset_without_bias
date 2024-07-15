static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int count;
    count = -1;
    if(staticTrue)
    {
        count = RAND32();
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        count = RAND32();
    }
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(staticTrue)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN3()
{
    int count;
    count = -1;
    if(staticTrue)
    {
        count = 20;
    }
    if(staticTrue)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
