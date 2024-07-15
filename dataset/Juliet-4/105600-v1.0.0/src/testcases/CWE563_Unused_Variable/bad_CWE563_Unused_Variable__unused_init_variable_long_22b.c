int VAR0 = 0;
void FUN0(long data);
void FUN1()
{
    long data;
    data = 5L;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(long data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
