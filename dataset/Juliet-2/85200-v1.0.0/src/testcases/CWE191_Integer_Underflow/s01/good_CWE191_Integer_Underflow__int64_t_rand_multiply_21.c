static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int64_t data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(data < 0) 
        {
            if (data > (LLONG_MIN/2))
            {
                int64_t result = data * 2;
                printLongLongLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t data)
{
    if(VAR1)
    {
        if(data < 0) 
        {
            if (data > (LLONG_MIN/2))
            {
                int64_t result = data * 2;
                printLongLongLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int64_t data)
{
    if(VAR2)
    {
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
void FUN5()
{
    int64_t data;
    data = 0LL;
    data = -2;
    VAR2 = 1; 
    FUN4(data);
}
