namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    while(1)
    {
        {
            static char dataBuffer;
            dataBuffer = 'A';
            data = &dataBuffer;
        }
        break;
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
