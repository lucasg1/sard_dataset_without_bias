static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = 0;
    if(staticTrue)
    {
        data = INT_MIN;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > INT_MIN)
        {
            int result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    if(staticTrue)
    {
        data = INT_MIN;
    }
    if(staticTrue)
    {
        if (data > INT_MIN)
        {
            int result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
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
        data = -2;
    }
    if(staticTrue)
    {
        {
            int result = data - 1;
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
        data = -2;
    }
    if(staticTrue)
    {
        {
            int result = data - 1;
            printIntLine(result);
        }
    }
}
