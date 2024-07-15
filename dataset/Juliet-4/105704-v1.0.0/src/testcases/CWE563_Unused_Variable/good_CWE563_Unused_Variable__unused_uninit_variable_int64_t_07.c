static int staticFive = 5;
void FUN0()
{
    int64_t data;
    ; 
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
