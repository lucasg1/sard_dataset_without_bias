namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        {
            static char dataBuffer;
            dataBuffer = 'A';
            data = &dataBuffer;
        }
    }
    else
    {
        {
            char * dataBuffer = new char;
            *dataBuffer = 'A';
            data = dataBuffer;
        }
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
