namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[10];
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printLine(data);
        delete [] data;
    }
}
} 
