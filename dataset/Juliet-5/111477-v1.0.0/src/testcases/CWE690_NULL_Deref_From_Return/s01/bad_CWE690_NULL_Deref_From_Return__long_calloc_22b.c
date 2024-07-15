int VAR0 = 0;
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(long * data)
{
    if(VAR0)
    {
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
