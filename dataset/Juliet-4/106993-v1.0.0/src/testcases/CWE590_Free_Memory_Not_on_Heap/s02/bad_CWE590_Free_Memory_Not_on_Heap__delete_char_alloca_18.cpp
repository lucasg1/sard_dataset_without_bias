namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    goto source;
source:
    {
        char * dataBuffer = (char *)ALLOCA(sizeof(char));
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
