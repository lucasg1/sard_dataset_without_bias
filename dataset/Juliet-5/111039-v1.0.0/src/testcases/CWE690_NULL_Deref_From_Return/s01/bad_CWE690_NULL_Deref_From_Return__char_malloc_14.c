void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    if(globalFive==5)
    {
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
