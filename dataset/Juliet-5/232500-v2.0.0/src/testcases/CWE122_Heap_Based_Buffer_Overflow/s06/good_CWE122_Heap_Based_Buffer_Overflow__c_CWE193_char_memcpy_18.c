void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc((10+1)*sizeof(char));
    if (data == NULL) {exit(-1);}
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}
