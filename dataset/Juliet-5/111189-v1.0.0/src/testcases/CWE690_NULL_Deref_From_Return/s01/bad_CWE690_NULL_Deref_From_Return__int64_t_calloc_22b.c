int VAR0 = 0;
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int64_t * data)
{
    if(VAR0)
    {
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
