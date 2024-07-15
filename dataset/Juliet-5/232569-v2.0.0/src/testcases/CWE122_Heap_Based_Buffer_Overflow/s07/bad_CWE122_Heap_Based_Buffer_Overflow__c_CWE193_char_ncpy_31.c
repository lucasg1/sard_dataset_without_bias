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
            strncpy(data, source, strlen(source) + 1);
<END>
            printLine(data);
            free(data);
        }
    }
}
