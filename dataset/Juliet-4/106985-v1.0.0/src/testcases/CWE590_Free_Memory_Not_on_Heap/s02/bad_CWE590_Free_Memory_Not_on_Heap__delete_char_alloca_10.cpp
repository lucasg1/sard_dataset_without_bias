namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(globalTrue)
    {
        {
            char * dataBuffer = (char *)ALLOCA(sizeof(char));
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
