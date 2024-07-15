namespace NAMESPACE0
{
void FUN0()
{
    int i;
    char * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            static char dataBuffer;
            dataBuffer = 'A';
            data = &dataBuffer;
        }
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
