static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(staticTrue)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(staticTrue)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticTrue)
    {
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN2()
{
    int64_t data;
    data = 0LL;
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
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(staticTrue)
    {
        data = -2;
    }
    if(staticTrue)
    {
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
