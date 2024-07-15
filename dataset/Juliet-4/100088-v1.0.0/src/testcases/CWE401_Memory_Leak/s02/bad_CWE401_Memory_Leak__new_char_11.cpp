namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
} 
