namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long;
        delete data;
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long;
        delete data;
    }
    if(globalFive==5)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
} 
