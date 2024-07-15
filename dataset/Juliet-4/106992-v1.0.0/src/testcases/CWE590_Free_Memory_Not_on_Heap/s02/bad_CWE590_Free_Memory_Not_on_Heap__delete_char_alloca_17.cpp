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
