namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
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
