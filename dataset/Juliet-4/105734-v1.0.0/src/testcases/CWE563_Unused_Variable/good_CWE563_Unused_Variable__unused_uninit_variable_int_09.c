void FUN0()
{
    int data;
    ; 
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = 5;
        printIntLine(data);
    }
}
