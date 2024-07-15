char * FUN0(char * data)
{
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}
