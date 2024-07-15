void FUN0()
{
    long data;
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive==5)
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN2()
{
    long data;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
    }
    if(globalFive==5)
    {
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    if(globalFive==5)
    {
        data = 5L;
    }
    if(globalFive==5)
    {
        printLongLine(data);
    }
}
