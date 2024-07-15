void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    free(data);
    goto sink;
sink:
<START>
    printLine(data);
<END>
}
