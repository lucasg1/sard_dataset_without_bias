void FUN0()
{
    char * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc((10+1)*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    {
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = (char *)malloc((10+1)*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    {
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
        free(data);
    }
}
