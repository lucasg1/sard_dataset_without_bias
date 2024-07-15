namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
        break;
    }
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = new char[100];
    switch(6)
    {
    case 6:
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        delete [] data;
    }
}
} 
