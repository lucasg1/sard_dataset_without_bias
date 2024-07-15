namespace NAMESPACE0
{
void FUN0()
{
    int h;
    char * data;
    data = new char[100];
    for(h = 0; h < 1; h++)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        memcpy(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
