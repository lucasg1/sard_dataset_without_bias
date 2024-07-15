namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[100];
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
        free(data);
<END>
    }
}
} 
