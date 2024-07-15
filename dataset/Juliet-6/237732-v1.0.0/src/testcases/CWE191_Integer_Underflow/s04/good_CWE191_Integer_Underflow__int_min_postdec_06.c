static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = INT_MIN;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > INT_MIN)
        {
            data--;
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
    if(STATIC_CONST_FIVE==5)
    {
        data = INT_MIN;
    }
    if(STATIC_CONST_FIVE==5)
    {
        if (data > INT_MIN)
        {
            data--;
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = -2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
