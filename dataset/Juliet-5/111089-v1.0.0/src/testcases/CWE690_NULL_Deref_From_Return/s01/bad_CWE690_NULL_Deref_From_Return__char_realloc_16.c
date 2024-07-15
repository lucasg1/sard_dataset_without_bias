void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    while(1)
    {
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
        break;
    }
}
