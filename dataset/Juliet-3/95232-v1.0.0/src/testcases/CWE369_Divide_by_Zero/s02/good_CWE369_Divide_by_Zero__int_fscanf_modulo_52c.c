void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    data = 7;
    FUN1(data);
}
void FUN3(int data);
void FUN7()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN3(data);
}
void FUN0(int data)
{
    printIntLine(100 % data);
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
