void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    {
        char * dataCopy = data;
        char * data = dataCopy;
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
    }
}
