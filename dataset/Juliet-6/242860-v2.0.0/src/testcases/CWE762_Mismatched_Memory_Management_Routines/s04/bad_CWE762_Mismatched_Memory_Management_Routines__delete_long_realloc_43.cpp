namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    long * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
