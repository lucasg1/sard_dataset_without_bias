namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = NULL; 
    {
        wchar_t * data = *dataPtr1;
        {
            static wchar_t dataBuffer;
            dataBuffer = L'A';
            data = &dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        printWcharLine(*data);
<START>
        delete data;
<END>
    }
}
} 
