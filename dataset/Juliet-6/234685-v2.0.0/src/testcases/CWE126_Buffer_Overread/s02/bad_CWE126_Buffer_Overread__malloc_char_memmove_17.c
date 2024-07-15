void FUN0()
{
    int i;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memmove(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
