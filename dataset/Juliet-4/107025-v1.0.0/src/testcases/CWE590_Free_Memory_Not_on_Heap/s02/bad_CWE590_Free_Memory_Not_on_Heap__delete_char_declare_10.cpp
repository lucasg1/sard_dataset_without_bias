namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(globalTrue)
    {
        {
            char dataBuffer;
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
