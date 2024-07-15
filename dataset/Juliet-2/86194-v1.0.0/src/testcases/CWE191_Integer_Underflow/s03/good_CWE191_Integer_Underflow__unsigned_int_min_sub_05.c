static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    unsigned int data;
    data = 0;
    if(staticTrue)
    {
        data = 0;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > 0)
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    if(staticTrue)
    {
        data = 0;
    }
    if(staticTrue)
    {
        if (data > 0)
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN2()
{
    unsigned int data;
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
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}
void FUN3()
{
    unsigned int data;
    data = 0;
    if(staticTrue)
    {
        data = -2;
    }
    if(staticTrue)
    {
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}
