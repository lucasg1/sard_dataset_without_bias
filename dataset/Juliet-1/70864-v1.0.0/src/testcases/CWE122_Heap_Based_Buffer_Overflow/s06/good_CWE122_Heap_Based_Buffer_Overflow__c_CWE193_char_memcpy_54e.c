void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN2(char * data)
{
    FUN4(data);
}
void FUN1(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    data = (char *)malloc((10+1)*sizeof(char));
    FUN1(data);
}
void FUN4(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}
