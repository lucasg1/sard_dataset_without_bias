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
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    funcPtr(data);
}
} 
