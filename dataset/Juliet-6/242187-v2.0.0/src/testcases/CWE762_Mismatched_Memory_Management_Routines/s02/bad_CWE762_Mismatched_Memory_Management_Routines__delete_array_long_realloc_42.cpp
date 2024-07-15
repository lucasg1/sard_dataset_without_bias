namespace NAMESPACE0
{
static long * FUN0(long * data)
{
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
