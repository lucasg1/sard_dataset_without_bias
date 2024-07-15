static int staticFive = 5;
void FUN0()
{
    int data;
    data = 0;
    if(staticFive==5)
    {
        data = INT_MAX;
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < INT_MAX)
        {
            data++;
            int result = data;
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
    if(staticFive==5)
    {
        data = INT_MAX;
    }
    if(staticFive==5)
    {
        if (data < INT_MAX)
        {
            data++;
            int result = data;
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(staticFive==5)
    {
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(staticFive==5)
    {
        data = 2;
    }
    if(staticFive==5)
    {
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
