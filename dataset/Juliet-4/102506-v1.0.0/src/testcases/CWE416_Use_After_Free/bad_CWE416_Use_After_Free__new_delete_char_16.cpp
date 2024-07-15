namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char;
        *data = 'A';
        delete data;
        break;
    }
    while(1)
    {
<START>
        printHexCharLine(*data);
<END>
        break;
    }
}
} 
