static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t data;
    ; 
    if(staticFalse)
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
    if(staticTrue)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
