void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
<END>
        ; 
    }
}
