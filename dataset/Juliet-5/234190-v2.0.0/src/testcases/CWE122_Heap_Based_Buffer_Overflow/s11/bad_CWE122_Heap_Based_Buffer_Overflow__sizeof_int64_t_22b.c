int VAR0 = 0;
int64_t * FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
    printLongLongLine(*data);
    free(data);
}
extern int VAR0;
int64_t * FUN0(int64_t * data)
{
    if(VAR0)
    {
        data = (int64_t *)malloc(sizeof(data));
<START>
        if (data == NULL) {exit(-1);}
<END>
        *data = 2147483643LL;
    }
    return data;
}
