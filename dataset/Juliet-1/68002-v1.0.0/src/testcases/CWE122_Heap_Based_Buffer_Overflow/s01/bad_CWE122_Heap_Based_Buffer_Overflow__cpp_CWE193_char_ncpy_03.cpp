namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char[10];
    }
    {
        char source[10+1] = SRC_STRING;
<START>
        strncpy(data, source, strlen(source) + 1);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
