void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(globalTrue)
    {
<START>
        printLine(data);
<END>
    }
}
