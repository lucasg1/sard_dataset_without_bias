static char * FUN0(char * data)
{
    data = (char *)malloc((10+1)*sizeof(char));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}
