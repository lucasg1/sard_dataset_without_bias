void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    int64_t * data = (*dataPtr);
<START>
<END>
    ; 
}
