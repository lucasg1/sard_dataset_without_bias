int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int64_t data);
void FUN5()
{
    int64_t data;
    data = 0LL;
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(int64_t data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < LLONG_MAX)
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2(int64_t data)
{
    if(VAR1)
    {
        if (data < LLONG_MAX)
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN4(int64_t data)
{
    if(VAR2)
    {
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
