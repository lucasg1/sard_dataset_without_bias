void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
<START>
    free(data);
<END>
    goto sink;
sink:
    free(data);
}
