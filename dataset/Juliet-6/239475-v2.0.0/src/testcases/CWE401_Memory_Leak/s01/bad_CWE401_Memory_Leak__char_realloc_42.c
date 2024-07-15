static char * FUN0(char * data)
{
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}
