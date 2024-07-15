void FUN0(int data)
{
    printIntLine(100 % data);
}
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = 7;
    funcPtr(data);
}
void FUN2(int data)
{
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
void FUN3()
{
    int data;
    void (*funcPtr) (int) = FUN2;
    data = -1;
    data = 0;
    funcPtr(data);
}
