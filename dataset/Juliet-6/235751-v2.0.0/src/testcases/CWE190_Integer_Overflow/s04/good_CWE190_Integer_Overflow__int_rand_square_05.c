static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = 0;
    if(staticTrue)
    {
        data = RAND32();
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
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
    if(staticTrue)
    {
        data = RAND32();
    }
    if(staticTrue)
    {
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(staticTrue)
    {
        {
            int result = data * data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(staticTrue)
    {
        data = 2;
    }
    if(staticTrue)
    {
        {
            int result = data * data;
            printIntLine(result);
        }
    }
}
