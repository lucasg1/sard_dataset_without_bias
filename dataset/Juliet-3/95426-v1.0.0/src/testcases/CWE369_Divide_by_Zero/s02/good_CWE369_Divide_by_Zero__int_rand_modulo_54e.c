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
void FUN4(int data);
void FUN5(int data)
{
    FUN4(data);
}
void FUN6(int data);
void FUN7(int data)
{
    FUN6(data);
}
void FUN5(int data);
void FUN9()
{
    int data;
    data = -1;
    data = 7;
    FUN5(data);
}
void FUN7(int data);
void FUN11()
{
    int data;
    data = -1;
    data = RAND32();
    FUN7(data);
}
void FUN1(int data);
void FUN4(int data)
{
    FUN1(data);
}
void FUN3(int data);
void FUN6(int data)
{
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
