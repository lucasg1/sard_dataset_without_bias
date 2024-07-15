void FUN0()
{
    int i,j;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
<END>
        ; 
    }
}
