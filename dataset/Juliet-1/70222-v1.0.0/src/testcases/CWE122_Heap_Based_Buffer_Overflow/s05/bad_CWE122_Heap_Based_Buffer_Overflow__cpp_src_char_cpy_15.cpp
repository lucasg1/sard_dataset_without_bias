namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    switch(6)
    {
    case 6:
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
