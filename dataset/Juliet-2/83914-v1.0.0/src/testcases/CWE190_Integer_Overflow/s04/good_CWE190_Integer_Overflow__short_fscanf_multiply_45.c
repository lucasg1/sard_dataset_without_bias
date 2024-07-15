static short VAR0;
static short VAR1;
static short VAR2;
void FUN0()
{
    short data = VAR1;
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = 2;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    short data = VAR2;
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
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    VAR2 = data;
    FUN2();
}
