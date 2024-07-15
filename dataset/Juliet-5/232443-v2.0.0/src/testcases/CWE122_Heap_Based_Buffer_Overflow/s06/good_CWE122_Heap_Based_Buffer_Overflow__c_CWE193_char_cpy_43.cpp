namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)malloc((10+1)*sizeof(char));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
        free(data);
    }
}
} 
