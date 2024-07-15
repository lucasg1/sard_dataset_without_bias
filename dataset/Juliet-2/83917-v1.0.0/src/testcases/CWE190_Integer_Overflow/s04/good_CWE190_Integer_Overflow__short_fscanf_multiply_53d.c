void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN2(short data);
void FUN3(short data)
{
    FUN2(data);
}
void FUN1(short data);
void FUN5(short data)
{
    FUN1(data);
}
void FUN3(short data);
void FUN7(short data)
{
    FUN3(data);
}
void FUN5(short data);
void FUN9()
{
    short data;
    data = 0;
    data = 2;
    FUN5(data);
}
void FUN7(short data);
void FUN11()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN7(data);
}
void FUN0(short data)
{
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN2(short data)
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
