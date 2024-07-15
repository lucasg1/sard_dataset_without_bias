static int staticFive = 5;
void FUN0()
{
    int data;
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN2()
{
    int data;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
    }
    if(staticFive==5)
    {
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    if(staticFive==5)
    {
        data = 5;
    }
    if(staticFive==5)
    {
        printIntLine(data);
    }
}
