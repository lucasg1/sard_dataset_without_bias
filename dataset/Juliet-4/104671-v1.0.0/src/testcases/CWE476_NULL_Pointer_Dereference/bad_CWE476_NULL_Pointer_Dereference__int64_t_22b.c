int VAR0 = 0;
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int64_t * data)
{
    if(VAR0)
    {
<START>
        printLongLongLine(*data);
<END>
    }
}
