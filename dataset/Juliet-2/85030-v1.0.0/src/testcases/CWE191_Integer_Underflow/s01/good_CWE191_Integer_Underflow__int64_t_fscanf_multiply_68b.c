int64_t VAR0;
int64_t VAR1;
int64_t VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    int64_t data;
    data = 0LL;
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    VAR2 = data;
    FUN1();
}
extern int64_t VAR0;
extern int64_t VAR1;
extern int64_t VAR2;
void FUN0()
{
    int64_t data = VAR1;
    if(data < 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data = VAR2;
    if(data < 0) 
    {
        if (data > (LLONG_MIN/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
