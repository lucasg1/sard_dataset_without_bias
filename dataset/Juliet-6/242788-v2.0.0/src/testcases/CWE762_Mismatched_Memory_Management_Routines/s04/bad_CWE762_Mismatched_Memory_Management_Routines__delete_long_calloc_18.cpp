namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
<START>
    delete data;
<END>
}
} 
