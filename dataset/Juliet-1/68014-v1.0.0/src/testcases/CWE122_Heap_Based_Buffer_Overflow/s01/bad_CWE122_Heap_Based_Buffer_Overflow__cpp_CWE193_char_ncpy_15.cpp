namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new char[10];
        break;
    default:
        printLine("Benign, fixed string");
        break;
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
