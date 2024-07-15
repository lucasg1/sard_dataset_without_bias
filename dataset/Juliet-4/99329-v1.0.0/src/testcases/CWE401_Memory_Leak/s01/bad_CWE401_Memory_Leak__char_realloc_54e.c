void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN2(data);
}
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
void FUN5(char * data);
void FUN2(char * data)
{
    FUN5(data);
}
void FUN0(char * data)
{
<START>
<END>
    ; 
}
