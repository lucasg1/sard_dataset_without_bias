namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(1)
    {
<START>
        printHexCharLine(*data);
<END>
    }
}
} 
