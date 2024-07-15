void FUN0()
{
    int64_t data;
    ; 
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
