static int VAR0 = 0;
static int64_t * FUN0(int64_t * data)
{
    if(VAR0)
    {
        data = (int64_t *)malloc(50*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
