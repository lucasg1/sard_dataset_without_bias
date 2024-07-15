static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > SHRT_MIN)
        {
            short result = data - 1;
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
    short data;
    data = 0;
    if(staticTrue)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(staticTrue)
    {
        if (data > SHRT_MIN)
        {
            short result = data - 1;
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
    short data;
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
            short result = data - 1;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        data = -2;
    }
    if(staticTrue)
    {
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
}
