int FUN0(int data)
{
    data = 7;
    return data;
}
int FUN1(int data)
{
    data = RAND32();
    return data;
}
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1;
    data = FUN0(data);
    printIntLine(100 / data);
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    data = FUN1(data);
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
