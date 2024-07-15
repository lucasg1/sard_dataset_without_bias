void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(globalTrue)
    {
<START>
<END>
        ; 
    }
}
