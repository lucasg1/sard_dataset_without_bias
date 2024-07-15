static int VAR0 = 0;
static int64_t * FUN0(int64_t * data)
{
    if(VAR0)
    {
        data = (int64_t *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    printLongLongLine(*data);
<END>
    free(data);
}
