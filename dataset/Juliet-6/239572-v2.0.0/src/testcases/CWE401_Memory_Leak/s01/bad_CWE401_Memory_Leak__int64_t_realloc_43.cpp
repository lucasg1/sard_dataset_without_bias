namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
<START>
<END>
    ; 
}
} 
