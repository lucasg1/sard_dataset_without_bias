void FUN0()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
    goto sink;
sink:
<START>
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
