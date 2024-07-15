static int FUN0(int data)
{
    data = 7;
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
    printIntLine(100 % data);
}
static int FUN2(int data)
{
    data = 0;
    return data;
}
void FUN3()
{
    int data;
    data = -1;
    data = FUN2(data);
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
