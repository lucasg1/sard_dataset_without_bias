void FUN0(int * data);
void FUN1()
{
    int data;
    data = -1;
    data = 7;
    FUN0(&data);
}
void FUN2(int * data);
void FUN3()
{
    int data;
    data = -1;
    data = RAND32();
    FUN2(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    printIntLine(100 % data);
}
void FUN2(int * dataPtr)
{
    int data = *dataPtr;
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
