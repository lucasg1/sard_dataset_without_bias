void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    funcPtr(data);
}
void FUN0(char * data)
{
<START>
    printHexCharLine(data[0]);
<END>
}
