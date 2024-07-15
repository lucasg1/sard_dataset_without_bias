void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[10+1] = SRC_STRING;
<START>
            memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
            printLine(data);
            free(data);
        }
    }
}
