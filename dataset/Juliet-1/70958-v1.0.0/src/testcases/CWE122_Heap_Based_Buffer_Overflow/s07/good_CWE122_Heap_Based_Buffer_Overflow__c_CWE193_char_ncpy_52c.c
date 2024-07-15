void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc((10+1)*sizeof(char));
    FUN0(data);
}
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
void FUN3(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
        free(data);
    }
}
