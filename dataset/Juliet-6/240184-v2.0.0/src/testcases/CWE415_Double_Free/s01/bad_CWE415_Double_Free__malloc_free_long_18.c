void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
<START>
    free(data);
<END>
    goto sink;
sink:
    free(data);
}
