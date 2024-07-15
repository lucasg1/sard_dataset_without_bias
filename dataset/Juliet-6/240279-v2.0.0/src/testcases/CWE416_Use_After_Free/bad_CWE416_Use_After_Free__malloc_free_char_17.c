void FUN0()
{
    int i,j;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printLine(data);
<END>
    }
}
