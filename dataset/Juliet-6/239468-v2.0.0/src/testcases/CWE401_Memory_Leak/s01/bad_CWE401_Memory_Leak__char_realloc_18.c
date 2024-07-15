void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    goto sink;
sink:
<START>
<END>
    ; 
}
