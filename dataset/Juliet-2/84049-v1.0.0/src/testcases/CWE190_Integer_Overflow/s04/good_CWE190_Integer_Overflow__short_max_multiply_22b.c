int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(short data);
void FUN3()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(short data);
void FUN5()
{
    short data;
    data = 0;
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(short data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) 
        {
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN2(short data)
{
    if(VAR1)
    {
        if(data > 0) 
        {
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN4(short data)
{
    if(VAR2)
    {
        if(data > 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
