void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
        break;
    }
    while(1)
    {
<START>
        printLine(data);
<END>
        break;
    }
}
