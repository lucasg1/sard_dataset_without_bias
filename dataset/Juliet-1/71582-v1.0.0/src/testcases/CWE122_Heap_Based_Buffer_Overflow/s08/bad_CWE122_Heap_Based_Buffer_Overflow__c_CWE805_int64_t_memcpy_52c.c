void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN1(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(50*sizeof(int64_t));
    FUN1(data);
}
void FUN0(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
