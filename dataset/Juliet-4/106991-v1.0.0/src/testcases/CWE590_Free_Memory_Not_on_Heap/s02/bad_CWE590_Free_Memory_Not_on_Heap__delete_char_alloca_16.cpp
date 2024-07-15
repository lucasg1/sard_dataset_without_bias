namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    while(1)
    {
        {
            char * dataBuffer = (char *)ALLOCA(sizeof(char));
            *dataBuffer = 'A';
            data = dataBuffer;
        }
        break;
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
