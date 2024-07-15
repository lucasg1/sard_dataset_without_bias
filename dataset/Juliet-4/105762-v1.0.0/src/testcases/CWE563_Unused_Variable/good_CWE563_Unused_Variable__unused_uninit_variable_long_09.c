void FUN0()
{
    long data;
    ; 
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    ; 
    if(GLOBAL_CONST_TRUE)
    {
        data = 5L;
        printLongLine(data);
    }
}
