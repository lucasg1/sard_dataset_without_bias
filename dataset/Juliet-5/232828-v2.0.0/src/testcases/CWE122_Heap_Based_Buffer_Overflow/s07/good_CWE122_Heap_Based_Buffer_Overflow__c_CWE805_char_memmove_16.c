void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; 
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
