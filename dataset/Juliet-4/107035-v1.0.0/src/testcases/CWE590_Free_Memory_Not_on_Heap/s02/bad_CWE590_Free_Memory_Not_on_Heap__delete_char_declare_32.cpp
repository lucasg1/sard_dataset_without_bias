namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL; 
    {
        char * data = *dataPtr1;
        {
            char dataBuffer;
            dataBuffer = 'A';
            data = &dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        printHexCharLine(*data);
<START>
        delete data;
<END>
    }
}
} 
