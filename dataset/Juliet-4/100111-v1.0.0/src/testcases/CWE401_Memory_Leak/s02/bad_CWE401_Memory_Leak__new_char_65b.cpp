namespace NAMESPACE0
{
void FUN0(char * data);
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
namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
<END>
    ; 
}
} 
