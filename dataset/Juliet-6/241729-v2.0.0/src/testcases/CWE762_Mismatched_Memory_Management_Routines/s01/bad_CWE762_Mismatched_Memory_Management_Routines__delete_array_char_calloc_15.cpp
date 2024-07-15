namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        delete [] data;
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
