namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    funcPtr(data);
}
} 
