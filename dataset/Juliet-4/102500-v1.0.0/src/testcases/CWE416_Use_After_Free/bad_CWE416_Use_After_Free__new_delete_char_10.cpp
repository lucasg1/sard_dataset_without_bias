namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(globalTrue)
    {
<START>
        printHexCharLine(*data);
<END>
    }
}
} 
