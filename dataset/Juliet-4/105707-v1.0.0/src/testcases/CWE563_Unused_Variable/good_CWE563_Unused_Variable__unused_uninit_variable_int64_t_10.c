void FUN0()
{
    int64_t data;
    ; 
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    ; 
    if(globalTrue)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
