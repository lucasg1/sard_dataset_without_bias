void FUN0()
{
    int data;
    data = 0;
    if(globalFive==5)
    {
        data = RAND32();
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < INT_MAX)
        {
            int result = data + 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    if(globalFive==5)
    {
        data = RAND32();
    }
    if(globalFive==5)
    {
        if (data < INT_MAX)
        {
            int result = data + 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2()
{
    int data;
    data = 0;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalFive==5)
    {
        {
            int result = data + 1;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(globalFive==5)
    {
        data = 2;
    }
    if(globalFive==5)
    {
        {
            int result = data + 1;
            printIntLine(result);
        }
    }
}
