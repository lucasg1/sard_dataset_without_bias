void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
