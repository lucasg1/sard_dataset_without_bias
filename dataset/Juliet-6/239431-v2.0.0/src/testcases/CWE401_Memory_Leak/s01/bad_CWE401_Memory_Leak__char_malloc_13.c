void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
<END>
        ; 
    }
}
