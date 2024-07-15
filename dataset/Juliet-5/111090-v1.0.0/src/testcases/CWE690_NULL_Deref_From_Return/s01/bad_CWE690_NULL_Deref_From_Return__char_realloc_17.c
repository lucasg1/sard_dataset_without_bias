void FUN0()
{
    int j;
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    for(j = 0; j < 1; j++)
    {
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
