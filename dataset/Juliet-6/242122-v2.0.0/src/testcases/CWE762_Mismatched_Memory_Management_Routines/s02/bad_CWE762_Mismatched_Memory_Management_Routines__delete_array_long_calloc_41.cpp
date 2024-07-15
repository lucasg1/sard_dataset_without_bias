namespace NAMESPACE0
{
void FUN0(long * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
} 
