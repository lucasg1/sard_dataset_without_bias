void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; 
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncat(data, source, 100);
<END>
        printLine(data);
        free(data);
    }
}
