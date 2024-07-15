namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
<START>
    delete data;
<END>
}
} 
