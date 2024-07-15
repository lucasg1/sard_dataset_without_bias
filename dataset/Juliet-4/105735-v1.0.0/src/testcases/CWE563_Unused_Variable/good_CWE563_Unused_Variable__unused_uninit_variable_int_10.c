void FUN0()
{
    int data;
    ; 
    if(globalFalse)
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
    if(globalTrue)
    {
        data = 5;
        printIntLine(data);
    }
}
