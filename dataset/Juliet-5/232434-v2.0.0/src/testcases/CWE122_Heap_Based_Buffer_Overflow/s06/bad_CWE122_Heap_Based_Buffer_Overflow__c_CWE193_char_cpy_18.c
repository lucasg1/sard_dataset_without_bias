void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    {
        char source[10+1] = SRC_STRING;
<START>
        strcpy(data, source);
<END>
        printLine(data);
        free(data);
    }
}
