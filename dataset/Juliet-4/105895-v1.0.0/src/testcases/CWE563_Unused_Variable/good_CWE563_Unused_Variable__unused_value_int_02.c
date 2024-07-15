void FUN0()
{
    int data;
    if(1)
    {
        data = 5;
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    if(1)
    {
        data = 5;
    }
    if(1)
    {
        printIntLine(data);
    }
}
void FUN2()
{
    int data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
    if(1)
    {
        data = 10;
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    if(1)
    {
        data = 5;
        printIntLine(data);
    }
    if(1)
    {
        data = 10;
        printIntLine(data);
    }
}
