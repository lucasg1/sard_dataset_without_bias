void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        printLine(data);
<END>
    }
}
