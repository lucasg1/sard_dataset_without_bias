namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printHexCharLine(*data);
<END>
    }
    else
    {
        ; 
    }
}
} 
