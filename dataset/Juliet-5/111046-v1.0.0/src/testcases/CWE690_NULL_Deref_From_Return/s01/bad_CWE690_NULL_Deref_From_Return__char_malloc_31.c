void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
