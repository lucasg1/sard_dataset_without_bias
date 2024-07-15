static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int count;
    count = -1;
    if(STATIC_CONST_FIVE==5)
    {
        count = RAND32();
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        count = RAND32();
    }
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(STATIC_CONST_FIVE==5)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN3()
{
    int count;
    count = -1;
    if(STATIC_CONST_FIVE==5)
    {
        count = 20;
    }
    if(STATIC_CONST_FIVE==5)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
