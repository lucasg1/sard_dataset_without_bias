int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = 0;
    data = INT_MAX;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int data);
void FUN5()
{
    int data;
    data = 0;
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) 
        {
            if (data < (INT_MAX/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN2(int data)
{
    if(VAR1)
    {
        if(data > 0) 
        {
            if (data < (INT_MAX/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN4(int data)
{
    if(VAR2)
    {
        if(data > 0) 
        {
            int result = data * 2;
            printIntLine(result);
        }
    }
}
