int VAR0;
int VAR1;
int VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    int data;
    data = 0;
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    int data;
    data = 0;
    data = INT_MIN;
    VAR2 = data;
    FUN1();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0()
{
    int data = VAR1;
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN1()
{
    int data = VAR2;
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}