void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
void FUN2(char * data)
{
<START>
<END>
    ; 
}
