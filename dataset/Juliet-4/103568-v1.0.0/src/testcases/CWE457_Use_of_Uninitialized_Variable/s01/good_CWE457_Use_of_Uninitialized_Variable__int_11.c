void FUN0()
{
    int data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsTrue())
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN2()
{
    int data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
    }
    if(globalReturnsTrue())
    {
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    if(globalReturnsTrue())
    {
        data = 5;
    }
    if(globalReturnsTrue())
    {
        printIntLine(data);
    }
}
