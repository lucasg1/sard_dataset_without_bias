static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(short data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > SHRT_MIN)
        {
            data--;
            short result = data;
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
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(short data)
{
    if(VAR1)
    {
        if (data > SHRT_MIN)
        {
            data--;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(short data)
{
    if(VAR2)
    {
        {
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN5()
{
    short data;
    data = 0;
    data = -2;
    VAR2 = 1; 
    FUN4(data);
}
