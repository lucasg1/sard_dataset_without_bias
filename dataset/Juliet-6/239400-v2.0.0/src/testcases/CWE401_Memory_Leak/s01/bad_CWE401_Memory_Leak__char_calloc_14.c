void FUN0()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(globalFive==5)
    {
<START>
<END>
        ; 
    }
}
