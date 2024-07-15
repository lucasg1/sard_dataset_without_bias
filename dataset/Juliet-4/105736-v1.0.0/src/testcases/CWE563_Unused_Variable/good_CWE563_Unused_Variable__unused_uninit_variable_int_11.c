void FUN0()
{
    int data;
    ; 
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
    ; 
    if(globalReturnsTrue())
    {
        data = 5;
        printIntLine(data);
    }
}
