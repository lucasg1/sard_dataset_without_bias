void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    {
        char source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
        free(data);
    }
}
