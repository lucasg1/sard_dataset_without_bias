static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    if(staticTrue)
    {
        data = 5;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    if(staticTrue)
    {
        data = 5;
    }
    if(staticTrue)
    {
        printIntLine(data);
    }
}
void FUN2()
{
    int data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
    if(staticTrue)
    {
        data = 10;
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    if(staticTrue)
    {
        data = 5;
        printIntLine(data);
    }
    if(staticTrue)
    {
        data = 10;
        printIntLine(data);
    }
}
