void FUN0()
{
    int i;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (char *)malloc(10*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    {
        char source[10+1] = SRC_STRING;
<START>
        strcpy(data, source);
<END>
        printLine(data);
        free(data);
    }
}
