int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    return data;
}
int64_t * FUN0(int64_t * data);
void FUN2()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}
