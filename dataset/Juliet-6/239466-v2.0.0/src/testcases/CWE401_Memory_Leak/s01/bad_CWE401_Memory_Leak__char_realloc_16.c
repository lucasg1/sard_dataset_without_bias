void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
        break;
    }
    while(1)
    {
<START>
<END>
        ; 
        break;
    }
}
