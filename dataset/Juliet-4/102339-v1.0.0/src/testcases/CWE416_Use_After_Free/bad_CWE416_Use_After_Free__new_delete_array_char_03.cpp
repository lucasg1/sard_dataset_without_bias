namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(5==5)
    {
<START>
        printLine(data);
<END>
    }
}
} 
