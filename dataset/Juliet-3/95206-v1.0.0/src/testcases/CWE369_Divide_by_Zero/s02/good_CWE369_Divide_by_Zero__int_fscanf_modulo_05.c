static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        fscanf(stdin, "%d", &data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        fscanf(stdin, "%d", &data);
    }
    if(staticTrue)
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN2()
{
    int data;
    data = -1;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(staticTrue)
    {
        printIntLine(100 % data);
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        data = 7;
    }
    if(staticTrue)
    {
        printIntLine(100 % data);
    }
}
