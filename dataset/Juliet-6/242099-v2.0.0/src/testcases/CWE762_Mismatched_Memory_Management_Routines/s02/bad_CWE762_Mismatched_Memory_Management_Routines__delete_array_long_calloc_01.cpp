namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
<START>
    delete [] data;
<END>
}
} 
