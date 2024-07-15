void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(5==5)
    {
<START>
<END>
        ; 
    }
}
