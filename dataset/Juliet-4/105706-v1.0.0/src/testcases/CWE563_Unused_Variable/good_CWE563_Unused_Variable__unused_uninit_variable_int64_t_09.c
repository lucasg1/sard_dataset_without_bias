void FUN0()
{
    int64_t data;
    ; 
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
