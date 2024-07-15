static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if( data != 0 )
        {
            printIntLine(100 / data);
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
    fscanf(stdin, "%d", &data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int data)
{
    if(VAR1)
    {
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int data)
{
    if(VAR2)
    {
        printIntLine(100 / data);
    }
}
void FUN5()
{
    int data;
    data = -1;
    data = 7;
    VAR2 = 1; 
    FUN4(data);
}
