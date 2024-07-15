int VAR0 = 0;
int VAR1 = 0;
void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    ; 
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t data);
void FUN3()
{
    int64_t data;
    ; 
    VAR1 = 1; 
    FUN2(data);
}
extern int VAR0;
extern int VAR1;
void FUN0(int64_t data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN2(int64_t data)
{
    if(VAR1)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
